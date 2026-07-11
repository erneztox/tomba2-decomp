/**
 * @brief Calls parent entity function at entity[0x10] with same params
 * @note Original: func_80041FA8 at 0x80041FA8
 */
// Entity_ForwardToParent



#include "tomba.h"
void FUN_80041fa8(int param_1)

{
  FUN_80041f34(param_1->parent);
  return;
}
