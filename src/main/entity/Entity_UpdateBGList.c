/**
 * @brief Iterates background entity linked list, calls each entity's update function
 * @note Original: func_80069B28 at 0x80069B28
 */
// Entity_UpdateBGList



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80069b28(void)

{
  s32 *puVar1;
  int iVar2;
  
  iVar2 = _g_BackgroundEntitiesList;
  while (iVar2 != 0) {
    puVar1 = iVar2->callback;
    iVar2 = iVar2->next;
    (*(code *)*puVar1)();
  }
  return;
}
