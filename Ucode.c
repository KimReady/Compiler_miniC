#include <stdlib.h>
#include <stdio.h>
#include "Ucode.h"
#include "AST.h"

void codeGen(Node *ptr, FILE* outFile)
{
	Node *p;
	int globalSize;
	file = outFile;

	stackTop = 0;
	symtabBase = 1;
	width = 1;

	tblStack[stackTop] = makeSymtab(NULL);
	tblStack[stackTop]->parent = NULL;
	offsetStack[stackTop] = 1;

	for(p = ptr->son; p; p = p->brother)
	{
		if(p->token.tokenNumber == DCL)
		{
			processDeclaration(p->son);
		}
		else if(p->token.tokenNumber == FUNC_DEF)
		{
			processFuncHeader(p->son);
		}
		else
		{
			icg_error(3);
		}
	}

	globalSize = offsetStack[stackTop]-1;

	for(p = ptr->son; p; p = p->brother)
	{
		if(p->token.tokenNumber == FUNC_DEF)
		{
			processFunction(p);
		}
	}

	emit1("bgn", globalSize);
	emit0("ldp");
	emitJump("call", "main");
	emit0("end");

}

symtabPtr makeSymtab(char *name)
{
	symtabPtr ptr;

	ptr = (symtabPtr)malloc(sizeof(struct symtab));

	ptr->name=name;
	ptr->num=0;
	ptr->base=symtabBase++;

	return ptr;
}


void processDeclaration(Node *ptr)
{
	int typeSpecifier, typeQualifier;
	Node *p, *q;

	if(ptr->token.tokenNumber != DCL_SPEC) 
	{
		icg_error(4);
	}

	typeSpecifier = INT_NODE;		
	typeQualifier = VAR_TYPE;
	p = ptr->son;
	while(p)
	{
		if(p->token.tokenNumber == INT_NODE)
		{
			typeSpecifier = INT_NODE;
		}
		else if(p->token.tokenNumber == CONST_NODE)
		{
			typeQualifier = CONST_NODE;
		}
		else
		{
			fprintf(file, "not yet implemented\n");
			return;
		}
		p = p->brother;
	}


	p = ptr->brother;
	if(p->token.tokenNumber != DCL_ITEM)
	{
		icg_error(5);
	}

	while(p)
	{
		q = p->son;
		switch(q->token.tokenNumber)
		{
			case SIMPLE_VAR:
				processSimpleVariable(q, typeSpecifier, typeQualifier);
				break;

			case ARRAY_VAR:
				processArrayVariable(q, typeSpecifier, typeQualifier);
				break;

			default:
				fprintf(file, "error in SIMPLE_VAR or ARRAY_VAR\n");
				break;
		}
		p = p->brother;
	}
}


void processSimpleVariable(Node *ptr, int typeSpecifier, int typeQualifier)
{
	Node *p = ptr->son;
	Node *q = ptr->brother;
	int stIndex, size, initialValue, base;
	int sign = 1;

	if(ptr->token.tokenNumber != SIMPLE_VAR)
		fprintf(file, "error in SIMPLE_VAR\n");

	if(typeQualifier == CONST_NODE)
	{
		if(q == NULL)
		{
			fprintf(file, "%s must have a constant value\n", ptr->son->token.tokenValue);
			return;
		}
		if(q->token.tokenNumber == UNARY_MINUS)
		{
			sign = -1;
			q = q->son;
		}

		initialValue = sign * atoi(q->token.tokenValue);
		stIndex = insert(p->token.tokenValue, typeSpecifier, typeQualifier,
							0, 0, 0, initialValue);
	}
	else							
	{
		size = typeSize(typeSpecifier);

		stIndex = insert(p->token.tokenValue, typeSpecifier, typeQualifier,
							base, offsetStack[stackTop], width, 0);
		offsetStack[stackTop] += size;
	}
}


int typeSize(int type)
{
	return 1;
}


void processArrayVariable(Node *ptr, int typeSpecifier, int typeQualifier)
{
	Node *p = ptr->son;			
	int stIndex, size, base;

	if(ptr->token.tokenNumber != ARRAY_VAR)
	{
		fprintf(file, "error in ARRAY_VAR\n");
		return;
	}

	if(p->brother == NULL)	
	{
		fprintf(file, "array size must be specified\n");
	}
	else
	{
		size = atoi(p->brother->token.tokenValue);
	}

	size *= typeSize(typeSpecifier);

	stIndex = insert(p->token.tokenValue, typeSpecifier, typeQualifier,
						base, offsetStack[stackTop], size, 0);
	offsetStack[stackTop] += size;
}


int insert(char *id, int typeSpecifier, int typeQualifier, int base, int offset, int width, int initialValue)
{
	symtabPtr symtab;
	int symID;

	symtab = tblStack[stackTop];

	if((symID = lookup(id,0)) != -1)
	{
		return symID;
	}

	symtab->st[symtab->num].id = id;
	symtab->st[symtab->num].typeSpecifier = typeSpecifier;
	symtab->st[symtab->num].typeQualifier = typeQualifier;
	symtab->st[symtab->num].offset = offset;
	symtab->st[symtab->num].width = width;
	symtab->st[symtab->num].initialValue = initialValue;
	symtab->st[symtab->num].link = NULL;
	symtab->st[symtab->num].base = symtab->base;
	symtab->num++;

	return symtab->num-1;
}


void processOperator(Node *ptr)
{
	int stIndex;

	switch(ptr->token.tokenNumber)
	{
		case ASSIGN_OP:
		{
			Node *lhs = ptr->son, *rhs = ptr->son->brother;

			if(lhs->noderep == nonterm)
			{
				lvalue = 1;
				processOperator(lhs);
				lvalue = 0;
			}

			if(rhs->noderep == nonterm)
			{
				processOperator(rhs);
			}
			else
			{
				rv_emit(rhs);
			}

			if(lhs->noderep == terminal)	
			{
				stIndex = lookup(lhs->token.tokenValue, 1);
				if(stIndex == -1)
				{
					fprintf(file, "undefined variable: %s\n", lhs->token.tokenValue);
					return;
				}
				emit2("str", rtSymbol.base, rtSymbol.offset);
			}
			else							
			{
				emit0("sti");
			}
			break;
		}

		case ADD_ASSIGN: case SUB_ASSIGN: case MUL_ASSIGN:
		case DIV_ASSIGN: case MOD_ASSIGN:
		{
			Node *lhs = ptr->son, *rhs = ptr->son->brother;
			int nodeNumber = ptr->token.tokenNumber;

			ptr->token.tokenNumber = ASSIGN_OP;

			if(lhs->noderep == nonterm)
			{
				lvalue = 1;
				processOperator(lhs);
				lvalue = 0;
			}

			ptr->token.tokenNumber = nodeNumber;

			if(lhs->noderep == nonterm)
			{
				processOperator(lhs);
			}
			else
			{
				rv_emit(lhs);
			}

			if(rhs->noderep == nonterm)
			{
				processOperator(rhs);
			}
			else
			{
				rv_emit(rhs);
			}

			switch(ptr->token.tokenNumber)
			{
				case ADD_ASSIGN:	emit0("add");	break;
				case SUB_ASSIGN:	emit0("sub");	break;
				case MUL_ASSIGN:	emit0("mult");	break;
				case DIV_ASSIGN:	emit0("div");	break;
				case MOD_ASSIGN:	emit0("mod");	break;
			}

			if(lhs->noderep == terminal)
			{
				stIndex = lookup(lhs->token.tokenValue, 1);
				if(stIndex == -1)
				{
					fprintf(file, "undefined variable: %s\n", lhs->son->token.tokenValue);
					return;
				}
				emit2("str", rtSymbol.base, rtSymbol.offset);
			
			}
			else
			{
				emit0("sti");
			}
			break;
		}

		case ADD:	case SUB:	case MUL:	case DIV:	case MOD:
		case EQ:	case NE:	case GT:	case LT:	case GE:	case LE:
		case LOGICAL_AND:	case LOGICAL_OR:
		{
			Node *lhs = ptr->son, *rhs = ptr->son->brother;

			if(lhs->noderep == nonterm) 
			{
				processOperator(lhs);
			}
			else
			{
				rv_emit(lhs);
			}

			if(rhs->noderep == nonterm) 
			{
				processOperator(rhs);
			}
			else
			{
				rv_emit(rhs);
			}

			switch(ptr->token.tokenNumber)
			{
				case ADD:			emit0("add");		break;		
				case SUB:			emit0("sub");		break;
				case MUL:			emit0("mult");		break;
				case DIV:			emit0("div");		break;
				case MOD:			emit0("mod");		break;
				case EQ:			emit0("eq");		break;		
				case NE:			emit0("ne");		break;
				case GT:			emit0("gt");		break;
				case LT:			emit0("lt");		break;
				case GE:			emit0("ge");		break;
				case LE:			emit0("le");		break;
				case LOGICAL_AND:	emit0("and");		break;		
				case LOGICAL_OR:	emit0("or");		break;
			}
		}
		break;

		case UNARY_MINUS:	case LOGICAL_NOT:
		{
			Node *p = ptr->son;

			if(p->noderep == nonterm)
			{
				processOperator(p);
			}
			else
			{
				rv_emit(p);
			}

			switch(ptr->token.tokenNumber)
			{
				case UNARY_MINUS:	emit0("neg");		break;
				case LOGICAL_NOT:	emit0("not");		break;
			}
			break;
		}

		case INDEX:
		{
			Node *indexExp = ptr->son->brother;

			if(indexExp->noderep == nonterm) processOperator(indexExp);
			else rv_emit(indexExp);

			stIndex = lookup(ptr->son->token.tokenValue, 1);
			if(stIndex == -1)
			{
				fprintf(file, "undefined variable: %s\n", ptr->son->token.tokenValue);
				return;
			}
			emit2("lda", rtSymbol.base, rtSymbol.offset);
			emit0("add");
			if(!lvalue)			
			{
				emit0("ldi");
			}
			break;
		}

		case PRE_INC:	case PRE_DEC:	case POST_INC:	case POST_DEC:
		{
			Node *p = ptr->son;
			Node *q;
			int stIndex;
			int amount = 1;

			if(p->noderep == nonterm)
			{
				processOperator(p);
			}
			else
			{
				rv_emit(p);
			}

			q = p;
			while(q->noderep != terminal) 
			{
				q = q->son;
			}

			if(!q || (q->token.tokenNumber != IDENT))
			{
				fprintf(file, "increment/decrement operators can not be applied in expression\n");
				return;
			}
			stIndex = lookup(q->token.tokenValue, 1);
			if(stIndex == -1)
			{
				return;
			}

			switch(ptr->token.tokenNumber)
			{
				case PRE_INC:	emit0("inc");	break;
				case PRE_DEC:	emit0("dec");	break;
				case POST_INC:	emit0("inc");	break;
				case POST_DEC:	emit0("dec");	break;
			}

			if(p->noderep == terminal)
			{
				stIndex = lookup(p->token.tokenValue, 1);
				if(stIndex == -1) 
				{
					return;
				}

				emit2("str", rtSymbol.base, rtSymbol.offset);
			}
			else if(p->token.tokenNumber == INDEX)
			{
				lvalue = 1;
				processOperator(p);
				lvalue = 0;
				emit0("swp");
				emit0("sti");
			}
			else fprintf(file, "error in increment/decrement operators\n");
			break;
		}

		case CALL:
		{
			Node *p = ptr->son;		
			char *functionName;
			int stIndex;
			int noArguments;

			if(checkPredefined(p))	
			{
				break;
			}

			functionName = p->token.tokenValue;

			stIndex = lookup(functionName, 1);
			
			if(stIndex == -1)			
			{
				fprintf(file, "%s: undefined function\n", functionName);
				break; 
			}
			noArguments = rtSymbol.width;

			emit0("ldp");
			p = p->brother;
			while(p)
			{
				if(p->noderep == nonterm)
				{
					processOperator(p);
				}
				else
				{
					rv_emit(p);
				}
				noArguments--;
				p = p->brother;
			}

			if(noArguments > 0)
			{
				fprintf(file, "%s: too few actual arguments\n", functionName);
			}

			if(noArguments < 0)
			{
				fprintf(file, "%s: too many actual arguments\n", functionName);
			}

			emitJump("call", ptr->son->token.tokenValue);
			break;
		}
	}
}

void rv_emit(Node *ptr)
{
	int stIndex;

	if(ptr->token.tokenNumber == NUMBER)
	{
		emit1("ldc", atoi(ptr->token.tokenValue));
	}
	else
	{
		stIndex = lookup(ptr->token.tokenValue, 1);
		if(stIndex == -1)
		{
			return;
		}
		if(rtSymbol.typeQualifier == CONST_NODE)
		{
			emit1("ldc", rtSymbol.initialValue);
		}
		else if(rtSymbol.width > 1)
		{
			emit2("lda", rtSymbol.base, rtSymbol.offset);
		}
		else
		{
			emit2("lod", rtSymbol.base, rtSymbol.offset);
		}
	}
}

int checkPredefined(Node *ptr)
{
	Node *p=ptr;
	char *functionName;
	int noArguments;
	int stIndex;

	functionName = p->token.tokenValue;

	if(strcmp(functionName, "read") == 0)
	{
		noArguments = 1;

		emit0("ldp");
		p = p->brother;
		while(p)
		{
			if(p->noderep == nonterm)
			{
				processOperator(p);
			}
			else {
				stIndex = lookup(p->token.tokenValue, 1);
				if(stIndex == -1)
				{
					return -1;
				}
				emit2("lda", rtSymbol.base, rtSymbol.offset);
			}
			noArguments--;
			p = p->brother;
		}

		if(noArguments > 0)
		{
			fprintf(file, "%s: too few actual arguments\n", functionName);
		}

		if(noArguments < 0)
		{
			fprintf(file, "%s: too many actual arguments\n", functionName);
		}

		emitJump("call", functionName);
		return 1;
	}
	else if(strcmp(functionName, "write") == 0)
	{
		noArguments = 1;

		emit0("ldp");
		p = p->brother;
		while(p)
		{
			if(p->noderep == nonterm)
				processOperator(p);
			else {
				stIndex = lookup(p->token.tokenValue, 1);
				if(stIndex == -1) return -1;
				emit2("lod", rtSymbol.base, rtSymbol.offset);
			}
			noArguments--;
			p=p->brother;
		}

		if(noArguments > 0)
		{
			fprintf(file, "%s: too few actual arguments\n", functionName);
		}

		if(noArguments < 0)
		{
			fprintf(file, "%s: too many actual arguments\n", functionName);
		}

		emitJump("call", functionName);
		return 1;
	}
	else if(strcmp(functionName, "lf") == 0)
	{
		emitJump("call", functionName);
		return 1;
	}

	return 0;
}


void processStatement(Node *ptr)
{
	Node *p;

	switch(ptr->token.tokenNumber)
	{
		case COMPOUND_ST:
			p = ptr->son->brother;
			p = p->son;
			while(p)
			{
				processStatement(p);
				p = p->brother;
			}
			break;

		case EXP_ST:
			if(ptr->son != NULL)
			{
				processOperator(ptr->son);
			}
			break;

		case RETURN_ST:
			if(ptr->son != NULL)
			{
				returnWithValue = 1;
				p = ptr->son;
				if(p->noderep == nonterm)
				{
					processOperator(p);
				}
				else
				{
					rv_emit(p);
				}
				emit0("retv");
			}
			else
				emit0("ret");
			flag_returned=1;
			break;

		case IF_ST:
		{
			char label[LABEL_SIZE]={0};

			genLabel(label);
			processCondition(ptr->son);
			emitJump("fjp", label);
			processStatement(ptr->son->brother);
			emitLabel(label);
		}
		break;

		case IF_ELSE_ST:
		{
			char label1[LABEL_SIZE]={0}, label2[LABEL_SIZE]={0};

			genLabel(label1);
			genLabel(label2);
			processCondition(ptr->son);
			emitJump("fjp", label1);
			processStatement(ptr->son->brother);
			emitJump("ujp", label2);
			emitLabel(label1);
			processStatement(ptr->son->brother->brother);
			emitLabel(label2);
		}
		break;

		case WHILE_ST:
		{
			char label1[LABEL_SIZE]={0}, label2[LABEL_SIZE]={0};

			genLabel(label1);
			genLabel(label2);
			emitLabel(label1);
			processCondition(ptr->son);
			emitJump("fjp", label2);

			processStatement(ptr->son->brother);

			emitJump("ujp", label1);
			emitLabel(label2);
		}
		break;

		default:
			fprintf(file, "not yet implemented.\n");
			break;
	}
}


void processCondition(Node *ptr)
{
	if(ptr->noderep == nonterm)
	{
		processOperator(ptr);
	}
	else
	{
		rv_emit(ptr);
	}
}


void processFuncHeader(Node *ptr)
{
	int noArguments, returnType;
	int stIndex;
	Node *p;

	if(ptr->token.tokenNumber != FUNC_HEAD)
	{
		fprintf(file, "error in processFuncHeader\n");
	}

	p = ptr->son->son;
	while(p)
	{
		if(p->token.tokenNumber == INT_NODE)
		{
			returnType = INT_NODE;
		}
		else if(p->token.tokenNumber == VOID_NODE)
		{
			returnType = VOID_NODE;
		}
		else
		{
			fprintf(file, "invalid function return type\n");
		}
		p = p->brother;
	}

	p = ptr->son->brother->brother;
	p = p->son;

	noArguments = 0;
	while(p)
	{
		noArguments++;
		p = p->brother;
	}

	stIndex = insertFuncName(ptr->son->brother->token.tokenValue, returnType, noArguments);
}


int insertFuncName(char *id, int returnType, int noArguments)
{
	symtabPtr tbl;

	stackTop++;

	tblStack[stackTop] = makeSymtab(id);
	tblStack[stackTop]->parent = tblStack[stackTop-1];
	offsetStack[stackTop] = 1;

	tbl=tblStack[stackTop-1];
	tbl->st[tbl->num].id = id;
	tbl->st[tbl->num].typeSpecifier = returnType;
	tbl->st[tbl->num].typeQualifier = FUNC_TYPE;
	tbl->st[tbl->num].offset = 0;
	tbl->st[tbl->num].width = noArguments;
	tbl->st[tbl->num].initialValue = 0;
	tbl->st[tbl->num].link = tblStack[stackTop];
	tbl->st[tbl->num].base = tbl->base;

	tbl->num++;
	stackTop--;

	return tbl->num - 1;
}


void processFunction(Node *ptr)
{
	int stIndex, i;
	char *functionName;
	Node *p;

	functionName = ptr->son->son->brother->token.tokenValue;
	flag_returned = 0;

	stIndex = lookup(functionName, 1);
	stackTop++;
	tblStack[stackTop] = tblStack[stackTop-1]->st[stIndex].link;
	offsetStack[stackTop] = 1;

	for(p = ptr->son->brother->son->son; p; p = p->brother)
	{
		if(p->token.tokenNumber == DCL)
		{
			processDeclaration(p->son);
		}
		else
		{
			icg_error(3);
		}
	}

	emitProc(functionName, offsetStack[stackTop]-1, tblStack[stackTop]->base, 2);

	for(i = 0; i < tblStack[stackTop]->num; i++)
	{
		emitSym("sym", tblStack[stackTop]->base, 
			tblStack[stackTop]->st[i].offset, tblStack[stackTop]->st[i].width);
	}

	for(p = ptr->son; p; p = p->brother)
	{
		if(p->token.tokenNumber == COMPOUND_ST)
		{
			processStatement(p);
		}
	}

	if(!flag_returned)
	{
		emit0("ret");
	}
	emit0("end");

	stackTop--;
}


int lookup(char *id, int global)
{
	int i, symID = -1;

	for(i = 0; i < tblStack[stackTop]->num; i++)
	{
		if(strcmp(tblStack[stackTop]->st[i].id, id) == 0)
		{
			symID = i;
			rtSymbol = tblStack[stackTop]->st[i];
			break;
		}
	}

	if(global && stackTop > 0)
	{
		for(i = 0; i < tblStack[stackTop-1]->num; i++)
		{
			if(strcmp(tblStack[stackTop-1]->st[i].id, id) == 0)
			{
				symID = i;
				rtSymbol = tblStack[stackTop-1]->st[i];
				break;
			}
		}
	}

	return symID;
}

void emit0(char *opcode)
{
	fprintf(file, "           %s \n", opcode);
}


void emit1(char *opcode, int operand)
{
	fprintf(file, "           %s \t %d\n", opcode, operand);
}


void emit2(char *opcode, int operand1, int operand2)
{
	fprintf(file, "           %s \t %d \t %d\n", opcode, operand1, operand2);
}


void emitJump(char *opcode, char *operand)
{
	fprintf(file, "           %s \t %s\n", opcode, operand);
}


void emitSym(char *opcode, int operand1, int operand2, int operand3)
{
	fprintf(file, "           %s \t %d \t %d \t %d \t\n", opcode, operand1, operand2, operand3);
}


void emitProc(char *label, int proc1, int proc2, int proc3)
{
	fprintf(file, "%-10s proc \t %d \t %d \t %d\n", label, proc1, proc2, proc3);
}


void emitLabel(char *label)
{
	fprintf(file, "%-10s nop\n", label);
}


void genLabel(char *label)
{
	sprintf(label, "$$%d", labelNum);
	labelNum++;
}


void icg_error(int i)
{
	fprintf(file, "ERROR: %d\n", i);
}

void printSymTable() {
	symtabPtr tbl;
	int i, j;
	int count = 1;

	for(i = 0; i < SYMTAB_STACK_SIZE; i++) {
		tbl = tblStack[i];
		if(!tbl)
			break;
		for(j = 0; j < tbl->num; j++) {
			fprintf(file, "%d \t%s\t%d\n", count, tbl->st[j].id, tbl->st[j].initialValue);
			count++;
		}
	}
}

