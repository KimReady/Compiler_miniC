#ifndef	__MYAST
#define	__MYAST
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define PROGRAM 		0
#define FUNC_DEF 		1
#define FUNC_HEAD 		2
#define DCL_SPEC		3
#define CONST_NODE	4
#define INT_NODE		5
#define VOID_NODE		6
#define FORMAL_PARA	7
#define PARAM_DCL		8
#define COMPOUND_ST	9
#define DCL_LIST		10
#define DCL			11
#define DCL_ITEM		12
#define SIMPLE_VAR		13
#define ARRAY_VAR		14
#define STAT_LIST		15
#define EXP_ST			16
#define IF_ST			17
#define IF_ELSE_ST		18
#define WHILE_ST		19
#define RETURN_ST		20
#define ASSIGN_OP		21
#define ADD_ASSIGN		22
#define SUB_ASSIGN		23
#define MUL_ASSIGN	24
#define DIV_ASSIGN		25
#define MOD_ASSIGN	26
#define LOGICAL_OR		27
#define LOGICAL_AND	28
#define EQ			29
#define NE			30
#define GT			31
#define LT			32
#define GE			33
#define ADD			34
#define SUB			35
#define MUL			36
#define DIV			37
#define MOD			38
#define UNARY_MINUS	39
#define LOGICAL_NOT	40
#define PRE_INC		41
#define PRE_DEC		42
#define INDEX			43
#define CALL			44
#define POST_INC		45
#define POST_DEC		46
#define ACTUAL_PARAM	47
#define LE			48
#define PARAM_S		49
#define BLOCK_S		50
#define ASS_LHS		51
#define PRI_EXP		52
#define ASS_INDEX		53
#define IF_COND		54
#define ELSE_S			55
#define ASS_INC		56
#define ASS_DEC		57
#define WHILE_S		58
#define FUNC_NAME		59
#define READ_CALL		60

#define NAMESIZE		16

typedef struct _token
{
	int t_num;
	char c_value[NAMESIZE];
}Token;

typedef struct _myAst
{
	int op;
	Token token;
	int is_terminal;
	struct _myAst *son;
	struct _myAst *bro;
}Node;

int lineno;

FILE *out;

int addNonTerminal(int op,int son);

int addTerminal(int t_num,char *val);

int buildTree(int pre,int bro);

void printTree(Node *node,int depth);

extern Node *root;

void addSymbols(Node *ptr);

#endif
