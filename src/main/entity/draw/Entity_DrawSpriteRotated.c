/**
 * @brief Renders a rotated sprite using GTE matrix multiply from entity[0x48] transform
 * @note Original: func_80028B70 at 0x80028B70
 */
// Entity_DrawSpriteRotated



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_DrawSpriteRotated(int param_1)

{
  s32 in_zero;
  s32 extraout_at;
  u8 *pbVar1;
  uint uVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  s32 uVar9;
  int local_20;
  int local_1c;
  int local_18;
  
  pbVar1 = *(u8 **)(param_1 + 0x3c);
  if (pbVar1 != (u8 *)0x0) {
    uVar2 = (uint)*pbVar1;
    if ((*pbVar1 & 0x80) == 0) {
      *(u8 **)(param_1 + 0x40) = pbVar1 + 1;
    }
    else {
      *(s32 *)(param_1 + 0x40) = 0;
      uVar2 = uVar2 & 0x7f;
    }
    uVar9 = *(s32 *)(uVar2 * 4 + *(int *)(param_1 + 0x50));
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f800090 = 0;
    GTE_LoadRotMatrixFromSVec(param_1 + 0x48,0x1f800000);
    local_20 = (uint)DAT_800a1cd4 << 2;
    local_1c = (uint)DAT_800a1cd5 << 2;
    local_18 = (uint)DAT_800a1cd6 << 2;
    GTE_TransformVec(0x1f800000,&local_20);
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data4 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_DataC & 0xffff);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] >> 0x10);
    setCopReg(2,0x5000,_g_GTE_Data8 & 0xffff);
    setCopReg(2,0x5800,_g_GTE_DataC >> 0x10);
    copFunction(2,0x49e012);
    uVar4 = getCopReg(2,0x4800);
    uVar6 = getCopReg(2,0x5000);
    uVar8 = getCopReg(2,0x5800);
    _g_GTE_Matrix[0] = CONCAT22((s16)uVar4,(s16)uVar3);
    _g_GTE_DataC = CONCAT22((s16)uVar8,(s16)uVar7);
    setCopReg(2,0x4800,_g_GTE_Data4 & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data8 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_Data10 & 0xffff);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    _g_GTE_Data4 = CONCAT22((s16)uVar5,(s16)uVar3);
    _g_GTE_Data8 = CONCAT22((s16)uVar4,(s16)uVar6);
    _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar7);
    setCopReg(2,in_zero,*(s32 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,param_1->pos_y_fixed);
    copFunction(2,0x486012);
    _g_GTE_Data14 = getCopReg(2,0x19);
    _g_GTE_Data18 = getCopReg(2,0x1a);
    _g_GTE_Data1C = getCopReg(2,0x1b);
    _g_GTE_Data14 = _g_GTE_Data14 + _g_GTE_Work10C;
    _g_GTE_Data18 = _g_GTE_Data18 + _g_GTE_Work110;
    _g_GTE_Data1C = _g_GTE_Data1C + _g_GTE_Work114;
    setCopControlWord(2,0,_g_GTE_Matrix[0]);
    setCopControlWord(2,0x800,_g_GTE_Data4);
    setCopControlWord(2,0x1000,_g_GTE_Data8);
    setCopControlWord(2,0x1800,_g_GTE_DataC);
    setCopControlWord(2,0x2000,_g_GTE_Data10);
    setCopControlWord(2,0x2800,_g_GTE_Data14);
    setCopControlWord(2,0x3000,_g_GTE_Data18);
    setCopControlWord(2,0x3800,_g_GTE_Data1C);
    Entity_SubmitQuadToOT(uVar9,0,(int)*(s16 *)(param_1 + 0x32),0);
  }
  return;
}
