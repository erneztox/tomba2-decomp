/**
 * @brief Copies 5-word GTE matrix from source to destination
 * @note Original: func_80051B34 at 0x80051B34
 */
// GTE_CopyMatrix



#include "tomba.h"
void FUN_80051b34(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2->flags = param_1->flags;
  param_2->kind = param_1->kind;
  param_2->sub_type = param_1->sub_type;
  param_2->state = param_1->state;
  return;
}
