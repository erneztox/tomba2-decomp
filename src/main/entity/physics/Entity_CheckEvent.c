/**
 * @brief Entity event check: tests entity[0x72] and global DAT_800e806e for event trigger
 * @note Original: func_800421CC at 0x800421CC
 */
// Entity_CheckEvent



#include "tomba.h"
s32 Entity_CheckEvent(int param_1)

{
  s32 uVar1;
  int iVar2;
  
  if (param_1->event_id == 0) {
    uVar1 = 0;
    if (DAT_800e806e == '\x03') {
      uVar1 = 1;
    }
  }
  else if (param_1->event_id == 1) {
    iVar2 = Entity_DecrementTimer2(0x800e8008);
    uVar1 = 1;
    if (iVar2 != 1) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
