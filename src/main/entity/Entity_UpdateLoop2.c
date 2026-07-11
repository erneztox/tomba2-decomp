/**
 * @brief Entity update loop variant 2: iterates inactive list from g_InactiveEntitiesList
 * @note Original: func_8007B04C at 0x8007B04C
 */
// Entity_UpdateLoop2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_UpdateLoop2(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _g_InactiveEntitiesList;
  while (iVar1 = iVar2, iVar2 = _g_ActiveEntitiesList, iVar1 != 0) {
    iVar2 = iVar1->next;
    iVar1->flags = 0;
    if ((iVar1->alloc_flags & 0x80) != 0) {
      (*iVar1->callback)();
    }
  }
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = iVar1->next;
    iVar1->flags = 0;
    if ((iVar1->alloc_flags & 0x80) != 0) {
      (*iVar1->callback)();
    }
  }
  return;
}
