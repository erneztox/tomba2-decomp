/**
 * @brief Camera delta calculation: GTE cos/sin, smooths distance, updates scratchpad
 * @note Original: func_8006DAD8 at 0x8006DAD8
 */
// Camera_CalcDelta



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Camera_CalcDelta(int param_1)

{
  s16 sVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = Math_CosGTE((int)*(s16 *)(param_1 + 0x6e));
  sVar1 = *(s16 *)(param_1 + 0x6c);
  iVar4 = Math_CosGTE((int)*(s16 *)(param_1 + 0x70));
  iVar5 = (int)(s16)(iVar3 * sVar1 >> 0xc);
  uVar6 = (uint)_DAT_1f8000de;
  iVar3 = Math_Cos((int)*(s16 *)(param_1 + 0x70));
  iVar3 = (int)((((uint)_DAT_1f8000e6 - (iVar3 * iVar5 >> 0xc)) - (_DAT_1f8000d8 >> 0x10)) * 0x10000
               ) >> 0x10;
  iVar4 = (int)(((uVar6 + (iVar4 * iVar5 >> 0xc)) - (_DAT_1f8000d0 >> 0x10)) * 0x10000) >> 0x10;
  sVar1 = Math_Atan2(-iVar3,iVar4);
  sVar2 = Math_SqrtGTE(iVar4 * iVar4 + iVar3 * iVar3);
  iVar3 = Math_CosGTE((int)sVar1);
  iVar4 = (int)sVar2;
  _DAT_1f8000d0 = _DAT_1f8000d0 + (iVar3 * iVar4 >> 1);
  iVar3 = Math_Cos((int)sVar1);
  _DAT_1f8000d8 = _DAT_1f8000d8 - (iVar3 * iVar4 >> 1);
  if (iVar4 < 0x191) {
    param_1->camera_flags = param_1->camera_flags | 1;
  }
  return;
}
