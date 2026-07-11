/**
 * @brief Collision vector calc: GTE cos/sin on param_4, stores result in scratchpad
 * @note Original: func_80049418 at 0x80049418
 */
// Collision_CalcVector



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80049418(int param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_80083e80((int)param_4);
  iVar2 = FUN_80083f50((int)param_4);
  _DAT_1f8001be = *(short *)(param_1 + 0x32) + param_3;
  _DAT_1f8001c0 = param_1->pos_z + (short)(-iVar1 * (int)param_2 >> 0xc);
  _DAT_1f8001bc = param_1->pos_y + (short)(iVar2 * param_2 >> 0xc);
  iVar1 = FUN_800498c8(param_1);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_80049800();
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else if ((_DAT_1f8001a6 & 0xf00) == 0x100) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + _DAT_1f8001c4;
    }
  }
  return uVar3;
}
