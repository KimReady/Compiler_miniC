#ifndef __SYMTABLE_H__
#define __SYMTABLE_H__

#include "AST.h"
#define LABEL_SIZE			8
#define SYMTAB_ARRAY_SIZE	512
#define SYMTAB_STACK_SIZE	5

FILE* file;

typedef struct symtab *symtabPtr;

typedef struct {
	char *id;
	int typeSpecifier;
	int typeQualifier;
	int offset;
	int width;
	int base;
	int initialValue;
	symtabPtr link;
} symtabArray;

struct symtab
{
	char *name;
	int num;
	int base;
	symtabArray st[SYMTAB_ARRAY_SIZE];
	symtabPtr parent;
};

int labelNum, width, lvalue;
int stackTop, offsetStack[SYMTAB_STACK_SIZE], symtabBase;
int flag_returned, returnWithValue;
symtabPtr tblStack[SYMTAB_STACK_SIZE];
symtabArray rtSymbol;


void codeGen(Node *ptr, FILE* outFile);
symtabPtr makeSymtab(char *name);
void processDeclaration(Node *ptr);
void processSimpleVariable(Node *ptr, int typeSpecifier, int typeQualifier);
int typeSize(int type);
void processArrayVariable(Node *ptr, int typeSpecifier, int typeQualifier);
int insert(char *id, int typeSpecifier, int typeQualifier, int base, int offset, int width, int initialValue);
void processOperator(Node *ptr);
void rv_emit(Node *ptr);
int checkPredefined(Node *ptr);
void processStatement(Node *ptr);
void processCondition(Node *ptr);
void processFuncHeader(Node *ptr);
int insertFuncName(char *id, int returnType, int noArguments);
void processFunction(Node *ptr);
int lookup(char *id, int global);
void printSymTable();

void emit0(char *opcode);
void emit1(char *opcode, int operand);
void emit2(char *opcode, int operand1, int operand2);
void emitJump(char *opcode, char *operand);
void emitSym(char *opcode, int operand1, int operand2, int operand3);
void emitProc(char *label, int proc1, int proc2, int proc3);
void emitLabel(char *label);
void genLabel(char *label);
void icg_error(int i);

#endif
