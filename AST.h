#ifndef __AST_H__
#define __AST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NODE_NUM	58
#define STACK_SIZE	512

typedef struct tokenType {
	int tokenNumber;
	char *tokenValue;
} Token;

typedef struct nodeType {
	Token token;
	enum {terminal, nonterm} noderep;
	struct nodeType *son;
	struct nodeType *brother;
} Node;

enum nodeNumber {
	ACTUAL_PARAM,	ADD,			ADD_ASSIGN,		ARRAY_VAR,		ASSIGN_OP,
	CALL,			COMPOUND_ST,	CONST_NODE,		DCL,			DCL_ITEM,
	DCL_LIST,		DCL_SPEC,		DIV,			DIV_ASSIGN,		EQ,
	ERROR_NODE,		EXP_ST,			FORMAL_PARA,	FUNC_DEF,		FUNC_HEAD,
	GE,				GT,				IDENT,			IF_ELSE_ST,		IF_ST,
	INDEX,			INT_NODE,		LE,				LOGICAL_AND,	LOGICAL_NOT,
	LOGICAL_OR,		LT,				MOD,			MOD_ASSIGN,		MUL,
	MUL_ASSIGN,		NE,				NUMBER,			PARAM_DCL,		POST_DEC,
	POST_INC,		PRE_DEC,		PRE_INC,		PROGRAM,		RETURN_ST,
	SIMPLE_VAR,		STAT_LIST,		SUB,			SUB_ASSIGN,		UNARY_MINUS,
	VOID_NODE,		WHILE_ST,		FOR_ST,			FUNC_TYPE,		VAR_TYPE,
	CHAR_NODE,		FLOAT_NODE,		STRING
};

Node* valueStack[STACK_SIZE];	// stack for value
int rightHandsLen[NODE_NUM + 1];	// the length of right-hand-side
int sp;	// stack pointer
int i;
int lineno;

char *TokenToString(char *token);
Node* buildNode(int tokenNumber, char *tokenValue);
Node* buildTree(int nodeNumber, int rhsLength);
void printNode(Node *pt, int indent, FILE* astFile);
void printTree(Node *pt, int indent, FILE* astFile);

#endif
