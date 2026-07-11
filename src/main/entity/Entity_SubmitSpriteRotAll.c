/**
 * @brief Submits fully rotated sprite: GTE rotation on all axes before MVMVA
 * @note Original: func_800321D8 at 0x800321D8
 */
// Entity_SubmitSpriteRotAll



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_SubmitSpriteRotAll(s32 *param_1,u8 *param_2,s32 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  s32 in_zero;
  s32 extraout_at;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  s32 uVar9;
  int local_20;
  int local_1c;
  int local_18;
  
  Math_Atan(param_3,0x1f800000);
  local_20 = (uint)*param_2 << 2;
  local_1c = (uint)param_2->flags << 2;
  local_18 = (uint)param_2->kind << 2;
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
  uVar4 = getCopReg(2,0x4800);
  uVar6 = getCopReg(2,0x5000);
  uVar8 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,_g_GTE_Matrix[0] >> 0x10);
  setCopReg(2,0x5000,_g_GTE_Data8 & 0xffff);
  setCopReg(2,0x5800,_g_GTE_DataC >> 0x10);
  copFunction(2,0x49e012);
  uVar5 = getCopReg(2,0x4800);
  uVar7 = getCopReg(2,0x5000);
  uVar9 = getCopReg(2,0x5800);
  _g_GTE_Matrix[0] = CONCAT22((s16)uVar5,(s16)uVar4);
  _g_GTE_DataC = CONCAT22((s16)uVar9,(s16)uVar8);
  setCopReg(2,0x4800,_g_GTE_Data4 & 0xffff);
  setCopReg(2,0x5000,_g_GTE_Data8 >> 0x10);
  setCopReg(2,0x5800,_g_GTE_Data10 & 0xffff);
  copFunction(2,0x49e012);
  uVar4 = getCopReg(2,0x4800);
  uVar5 = getCopReg(2,0x5000);
  uVar8 = getCopReg(2,0x5800);
  _g_GTE_Data4 = CONCAT22((s16)uVar6,(s16)uVar4);
  _g_GTE_Data8 = CONCAT22((s16)uVar5,(s16)uVar7);
  _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar8);
  setCopReg(2,in_zero,*param_1);
  setCopReg(2,extraout_at,param_1->flags);
  copFunction(2,0x486012);
  iVar1 = getCopReg(2,0x19);
  iVar2 = getCopReg(2,0x1a);
  iVar3 = getCopReg(2,0x1b);
  _g_GTE_Data14 = iVar1 + _g_GTE_Work10C;
  _g_GTE_Data18 = iVar2 + _g_GTE_Work110;
  _g_GTE_Data1C = iVar3 + _g_GTE_Work114;
  setCopControlWord(2,0,_g_GTE_Matrix[0]);
  setCopControlWord(2,0x800,_g_GTE_Data4);
  setCopControlWord(2,0x1000,_g_GTE_Data8);
  setCopControlWord(2,0x1800,_g_GTE_DataC);
  setCopControlWord(2,0x2000,_g_GTE_Data10);
  setCopControlWord(2,0x2800,iVar1 + _g_GTE_Work10C);
  setCopControlWord(2,0x3000,iVar2 + _g_GTE_Work110);
  setCopControlWord(2,0x3800,iVar3 + _g_GTE_Work114);
  return;
}
