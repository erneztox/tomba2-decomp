/**
 * @brief Spawns entity via pool 1, sets entity[0x1C] callback, type 0x17, flag 0x80
 * @note Original: func_800725D4 at 0x800725D4
 */
// Entity_SpawnWithCallback



#include "tomba.h"
int FUN_800725d4(s16 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_8007a980(1,3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1->kind = 0x17;
    iVar1->callback = FUN_8007263c;
    *(s16 **)(iVar1 + 0x10) = param_1;
    iVar1->alloc_flags = iVar1->alloc_flags | 0x80;
    *param_1 = 0xffff;
  }
  return iVar1;
}
