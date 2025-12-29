#ifndef UTILS_H
#define UTILS_H

#include "symtab.h"

// Returns 1 if the type is a valid lvalue (variable or array element), 0 otherwise
int isLValue(Type* type);

#endif