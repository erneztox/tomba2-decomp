/**
 * @brief Entity update loop: iterates linked list from 0x800F2624, calls each entity[0x1C] callback
 * @note Original: func_8007B008 at 0x8007B008
 */
// Entity_UpdateLoop



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_UpdateLoop(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _g_ActiveEntitiesList;
  while (iVar1 != 0) {
    iVar2 = iVar1->next;
    iVar1->flags = 0;
    (*iVar1->callback)();
    iVar1 = iVar2;
  }
  return;
}
