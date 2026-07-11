/**
 * @brief Camera delta calculation: GTE cos/sin, smooths distance, updates scratchpad
 * @note Original: func_8006DAD8 at 0x8006DAD8
 */
// Camera_CalcDelta



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006dad8(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0x6e));
  sVar1 = *(short *)(param_1 + 0x6c);
  iVar4 = FUN_80083f50((int)*(short *)(param_1 + 0x70));
  iVar5 = (int)(short)(iVar3 * sVar1 >> 0xc);
  uVar6 = (uint)_DAT_1f8000de;
  iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x70));
  iVar3 = (int)((((uint)_DAT_1f8000e6 - (iVar3 * iVar5 >> 0xc)) - (_DAT_1f8000d8 >> 0x10)) * 0x10000
               ) >> 0x10;
  iVar4 = (int)(((uVar6 + (iVar4 * iVar5 >> 0xc)) - (_DAT_1f8000d0 >> 0x10)) * 0x10000) >> 0x10;
  sVar1 = FUN_80085690(-iVar3,iVar4);
  sVar2 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  iVar3 = FUN_80083f50((int)sVar1);
  iVar4 = (int)sVar2;
  _DAT_1f8000d0 = _DAT_1f8000d0 + (iVar3 * iVar4 >> 1);
  iVar3 = FUN_80083e80((int)sVar1);
  _DAT_1f8000d8 = _DAT_1f8000d8 - (iVar3 * iVar4 >> 1);
  if (iVar4 < 0x191) {
    param_1->camera_flags = param_1->camera_flags | 1;
  }
  return;
}
