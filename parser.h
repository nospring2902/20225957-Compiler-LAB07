#ifndef PARSER_H
#define PARSER_H

#include "token.h"
#include "symtab.h"
#include "error.h"

void compileProgram(void);
void compileBlock(void);
void compileBlock2(void);
void compileBlock3(void);
void compileBlock4(void);
void compileBlock5(void);
void compileSubDecls(void);
void compileFuncDecl(void);
void compileProcDecl(void);
void compileStatements(void);
void compileStatement(void);
void compileAssignSt(void);
void compileCallSt(void);
void compileGroupSt(void);
void compileIfSt(void);
void compileElseSt(void);
void compileWhileSt(void);
void compileForSt(void);
void compileCondition(void);
void compileParams(void);
void compileParam(void);
void compileArguments(ObjectNode* paramList);
void compileArgument(Object* param);

Type* compileLValue(void);
Type* compileExpression(void);
Type* compileExpression2(void);
void compileExpression3(void);
Type* compileTerm(void);
void compileTerm2(void);
Type* compileFactor(void);
Type* compileIndexes(Type* arrayType);
Type* compileType(void);
Type* compileBasicType(void);
ConstantValue* compileConstant(void);
ConstantValue* compileConstant2(void);
ConstantValue* compileUnsignedConstant(void);

#endif