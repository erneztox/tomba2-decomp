/**
 * @brief Entity spawn behavior: switch on entity type, spawns
 * @note Original: func_8002F514 at 0x8002F514
 */
// Entity_Behavior_Spawn



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8002f514(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = _DAT_1f800164;
  uVar1 = _DAT_1f800160;
  switch(param_1) {
  case 1:
    iVar4 = 0;
    if (DAT_800e7e7c < 7) goto LAB_8002f70c;
    iVar4 = FUN_8007a980(0,6,1);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x32) = 0xff38;
      uVar5 = 0x2a;
      goto LAB_8002f704;
    }
    break;
  case 2:
    iVar4 = 0;
    FUN_80023528(param_2);
    goto LAB_8002f70c;
  case 3:
    iVar4 = 0;
    if (DAT_800e7e7c < 7) goto LAB_8002f70c;
    iVar4 = FUN_8007a980(0,6,1);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x32) = 0xff38;
      uVar5 = 0x32;
      goto LAB_8002f704;
    }
    break;
  case 4:
    iVar4 = 0;
    if (DAT_800e7e7c < 7) goto LAB_8002f70c;
    iVar4 = FUN_8007a980(0,6,1);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x32) = 0xff38;
      uVar5 = 0x33;
      goto LAB_8002f704;
    }
    break;
  case 5:
    iVar4 = 0;
    if (DAT_800e7e7c < 7) goto LAB_8002f70c;
    iVar4 = FUN_8007a980(0,6,1);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x32) = 0xff38;
      uVar5 = 0x31;
      goto LAB_8002f704;
    }
    break;
  default:
    sVar3 = _DAT_1f800162 + -200;
    if ((6 < DAT_800e7e7c) && (iVar4 = FUN_8007a980(0,6,1), iVar4 != 0)) {
      uVar5 = 0x36;
      iVar4->pos_x = uVar1;
      iVar4->pos_y = sVar3;
      *(undefined2 *)(iVar4 + 0x32) = 0xff38;
      *(undefined2 *)(iVar4 + 0x30) = uVar2;
LAB_8002f704:
      FUN_80028e10(iVar4,uVar5);
      goto LAB_8002f70c;
    }
  }
  iVar4 = 0;
LAB_8002f70c:
  if ((param_2 != 0) && (iVar4 != 0)) {
    iVar4->parent = param_2;
  }
  return;
}
