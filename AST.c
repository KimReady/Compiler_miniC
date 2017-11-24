#include "AST.h"

char *nodeName[] = {
	"ACTUAL_PARAM",	"ADD",			"ADD_ASSIGN",	"ARRAY_VAR",	"ASSIGN_OP",
	"CALL",			"COMPOUND_ST",	"CONST_NODE",	"DCL",			"DCL_ITEM",
	"DCL_LIST",		"DCL_SPEC",		"DIV",			"DIV_ASSIGN",	"EQ",
	"ERROR_NODE",	"EXP_ST",		"FORMAL_PARA",	"FUNC_DEF",		"FUNC_HEAD",
	"GE",			"GT",			"IDENT",		"IF_ELSE_ST",	"IF_ST",
	"INDEX",		"INT_NODE",		"LE",			"LOGICAL_AND",	"LOGICAL_NOT",
	"LOGICAL_OR",	"LT",			"MOD",			"MOD_ASSIGN",	"MUL",
	"MUL_ASSIGN",	"NE",			"NUMBER",		"PARAM_DCL",	"POST_DEC",
	"POST_INC",		"PRE_DEC",		"PRE_INC",		"PROGRAM",		"RETURN_ST",
	"SIMPLE_VAR",	"STAT_LIST",	"SUB",			"SUB_ASSIGN",	"UNARY_MINUS",
	"VOID_NODE",	"WHILE_ST",		"FOR_ST",		"FUNC_TYPE",	"VAR_TYPE",
	"CHAR_NODE",	"FLOAT_NODE",	"STRING"
};

char *TokenToString(char *token)
{
	char *string;
	string = (char*)malloc(strlen(token)+1);
	strcpy(string, token);
	return string;
}

Node* buildNode(int tokenNumber, char *tokenValue)
{
	Node *ptr;
	Token token;

	token.tokenNumber = tokenNumber;
	token.tokenValue = tokenValue;

	if(++sp > STACK_SIZE) {
		printf("ERROR : parsing stack overflow\n");
		exit(1);
	}

	ptr = (Node *) malloc(sizeof(Node));
	if(!ptr)
	{
		printf("ERROR : memory allocation error in buildNode()\n");
		exit(1);
	}

	ptr->token = token;
	ptr->noderep = terminal;
	ptr->son = ptr->brother = NULL;

	valueStack[sp] = ptr;
	return ptr;
}

Node* buildTree(int nodeNumber, int rhsLength)
{
	int start, i, j;
	Node *first, *ptr;

	i = sp - rhsLength + 1;

	if(!nodeNumber && i > sp)
	{
		ptr = NULL;
	}
	else
	{
		start = i;

		while(i <= sp - 1)
		{
			j = i + 1;
			while(j <= sp && valueStack[j] == NULL) j++;
			if(j <= sp)
			{
				ptr = valueStack[i];
				while(ptr->brother) ptr = ptr->brother;
				ptr->brother = valueStack[j];
			}
			i = j;
		}
		first = (start > sp) ? NULL : valueStack[start];

		if(nodeNumber)
		{
			ptr = (Node*) malloc(sizeof(Node));
			if(!ptr)
			{
				printf("ERROR : memory allocation error in buildTree()\n");
				exit(1);
			}

			ptr->token.tokenNumber = nodeNumber;
			ptr->token.tokenValue = NULL;
			ptr->noderep = nonterm;
			ptr->son = first;
			ptr->brother = NULL;
		}
		else
			ptr = first;
	}

	sp = sp - rhsLength + 1;
	valueStack[sp] = ptr;
	rightHandsLen[nodeNumber] = 0;

	return first;
}

void printNode(Node *pt, int indent, FILE* astFile)
{
	int i;

	for(i = 1; i <= indent; i++)
		fprintf(astFile, " ");

	if(pt->noderep == terminal)		// terminal node
	{
		fprintf(astFile, " Terminal: %s", pt->token.tokenValue);
	}
	else							// nonterminal node
	{
		int idx = (int) (pt->token.tokenNumber);
		fprintf(astFile, " Nonterminal: %s", nodeName[idx]);
	}
	fprintf(astFile, "\n");
}

void printTree(Node *pt, int indent, FILE* astFile)
{
	Node *p = pt;
	while(p != NULL)
	{
		printNode(p, indent, astFile);
		if(p->noderep == nonterm)
			printTree(p->son, indent + 5, astFile);

		p = p->brother;
	}
}
