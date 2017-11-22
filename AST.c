#include"AST.h"

Node *root;

int addNonTerminal(int op,int son){
	Node *tmp;
	tmp=(Node *)malloc(sizeof(Node));
	tmp->op=op;
	tmp->son=(Node *)son;
	return (int)tmp;
}
int addTerminal(int t_num,char *val){
	Node *tmp;
	tmp=(Node *)malloc(sizeof(Node));
	tmp->op=-1;
	tmp->token.t_num=t_num;
	strcpy(tmp->token.c_value,val);
	return (int)tmp;
}
int buildTree(int pre,int bro){
	int key=1;
	
	Node *temp=(Node *)pre;
	
	while(key)
	{
		if((((Node *)temp)->bro)!=NULL)
			temp=((Node *)temp)->bro;
		else
			key=0;
	}

	((Node *)temp)->bro=(Node *)bro;
	
	return pre;
}

void printTree(Node *node,int depth)
{
	int i;
	if(node==NULL)
		return;
	
	for(i=0;i<depth;i++)
		printf(" ");

	switch(node->op)
	{
	case -1:
		printf("%s\n", node->token.c_value);
		break;
	case PROGRAM: 
		printf("PROGRAM\n");
		break;		
	case FUNC_DEF: 
		printf("FUNC_DEF\n");
		break;
	case FUNC_HEAD:
		printf("FUNC_HEAD\n");
		break;		
	case DCL_SPEC:
		printf("DCL_SPEC\n");
		break;		
	case CONST_NODE:	
		printf("CONST\n");
		break;
	case INT_NODE:
		printf("INT\n");
		break;
	case VOID_NODE:
		printf("VOID\n");
		break;	
	case FORMAL_PARA:	
		printf("FORMAL_PARA\n");
		break;
	case PARAM_DCL:	
		printf("PARAM_DCL\n");
		break;
	case COMPOUND_ST:
		printf("COMPOUND_ST\n");
		break;
	case DCL_LIST:	
		printf("DCL_LIST\n");
		break;
	case DCL:	
		printf("DCL\n");	
		break;
	case DCL_ITEM:
		printf("DCL_ITEM\n");
		break;	
	case SIMPLE_VAR:
		printf("SIMPLE_VAR\n");	
		break;
	case ARRAY_VAR:
		printf("ARRAY_VAR\n");
		break;	
	case STAT_LIST:
		printf("STAT_LIST\n");
		break;	
	case EXP_ST:
		printf("EXP_ST\n");	
		break;	
	case IF_ST:	
		printf("IF_ST\n");
		break;	
	case IF_ELSE_ST:
		printf("IF_ELSE_ST\n");	
		break;
	case WHILE_ST:
		printf("WHILE_ST\n");
		break;
	case RETURN_ST:	
		printf("RETURN_ST\n");
		break;
	case ASSIGN_OP:
		printf("ASSIGN_OP\n");	
		break;
	case ADD_ASSIGN:	
		printf("ADD_ASSIGN\n");
		break;
	case SUB_ASSIGN:
		printf("SUB_ASSIGN\n");
		break;	
	case MUL_ASSIGN:
		printf("MUL_ASSIGN\n");
		break;
	case DIV_ASSIGN:
		printf("DIV_ASSIGN\n");
		break;
	case MOD_ASSIGN:
		printf("MOD_ASSIGN\n");	
		break;
	case LOGICAL_OR:
		printf("LOGICAL_OR\n");	
		break;
	case LOGICAL_AND:	
		printf("LOGICAL_AND\n");
		break;
	case EQ:	
		printf("EQ\n");
		break;	
	case NE:	
		printf("NE\n");
		break;
	case GT:	
		printf("GT\n");
		break;	
	case LT:
		printf("LT\n");	
		break;	
	case GE:	
		printf("GE\n");
		break;	
	case ADD:
		printf("ADD\n");
		break;	
	case SUB:
		printf("SUB\n");
		break;		
	case MUL:
		printf("MUL\n");
		break;		
	case DIV:	
		printf("DIV\n");
		break;	
	case MOD:
		printf("MOD\n");
		break;		
	case UNARY_MINUS:	
		printf("UNARY_MINUS\n");
		break;
	case LOGICAL_NOT:	
		printf("LOGICAL_NOT\n");
		break;
	case PRE_INC:	
		printf("PRE_INC\n");
		break;
	case PRE_DEC:	
		printf("PRE_DEC\n");
		break;
	case INDEX:
		printf("INDEX\n");
		break;		
	case CALL:	
		printf("CALL\n");
		break;	
	case POST_INC:	
		printf("POST_INC\n");
		break;
	case POST_DEC:
		printf("POST_DEC\n");
		break;	
	case ACTUAL_PARAM:
		printf("ACTUAL_PARAM\n");
		break;
	case LE:	
		printf("LE\n");	
		break;
	case PARAM_S:
		printf("PARAM_S\n");
		break;
	case BLOCK_S:
		printf("BLOCK_S\n");
		break;
	case PRI_EXP:
		printf("PRI_EXP\n");
		break;
	case ASS_LHS:
		printf("ASS_LHS\n");
		break;
	case ASS_INDEX:
		printf("ASS_INDEX\n");
		break;
	case IF_COND:
		printf("IF_COND\n");
		break;
	case ELSE_S:
		printf("ELSE_S\n");
		break;
	case ASS_INC:
		printf("ASS_INC\n");
		break;
	case ASS_DEC:
		printf("ASS_DEC\n");
		break;
	case WHILE_S:
		printf("WHILE_S\n");
		break;
	case FUNC_NAME:
		printf("FUNC_NAME\n");
		break;
	case READ_CALL:
		printf("READ_CALL\n");
		break;
	default:
		printf("not defined node\n");
		break;
	}

	printTree(node->son,depth+2);
	printTree(node->bro,depth);
}
