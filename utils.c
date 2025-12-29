#include "utils.h"

int isLValue(Type* type) {
  // Only variables and array elements are lvalues
  if (type == NULL) return 0;
  if (type->typeClass == TP_INT || type->typeClass == TP_CHAR) return 1;
  if (type->typeClass == TP_ARRAY) return 1;
  return 0;
}
