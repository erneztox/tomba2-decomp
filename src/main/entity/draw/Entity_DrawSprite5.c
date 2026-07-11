/**
 * @brief Entity sprite drawer variant 5: projection + draw
 * @note Original: func_80030D68 at 0x80030D68
 */
// Entity_DrawSprite5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_DrawSprite5(int param_1)

{
  s32 in_zero;
  s32 extraout_at;
  uint uVar1;
  s32 uVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  int iVar8;
  s32 local_58;
  s32 local_54;
  s32 local_50;
  s32 local_48;
  s32 local_44;
  u8 local_40;
  int local_38;
  int local_34;
  int local_30;
  
  local_58 = DAT_800102f0;
  local_54 = DAT_800102f4;
  local_50 = DAT_800102f8;
  local_48 = DAT_800102fc;
  local_44 = DAT_80010300;
  local_40 = DAT_80010304;
  uVar1 = (uint)(param_1->behavior_state >> 1);
  iVar8 = uVar1 * 3;
  setCopControlWord(2,0xa800,(uint)*(u8 *)((int)&local_48 + iVar8) << 4);
  setCopControlWord(2,0xb000,(uint)*(u8 *)((int)&local_48 + iVar8 + 1) << 4);
  setCopControlWord(2,0xb800,(uint)*(u8 *)((int)&local_48 + iVar8 + 2) << 4);
  iVar8 = 0;
  _DAT_1f800090 = 0xfff;
  do {
    GTE_LoadRotMatrixFromSVec(param_1 + 0x48,0x1f800000);
    GTE_LoadIdentityMatrix(&DAT_1f800020);
    Math_Atan2_2((int)param_1->sprite_x,&DAT_1f800020);
    GTE_MulMatrix3(0x1f800000,&DAT_1f800020);
    local_38 = (uint)*(u8 *)(&local_58 + uVar1) << 2;
    local_34 = (uint)*(u8 *)((int)&local_58 + uVar1 * 4 + 1) << 2;
    local_30 = (uint)*(u8 *)((int)&local_58 + uVar1 * 4 + 2) << 2;
    GTE_TransformVec(0x1f800000,&local_38);
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data4 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_DataC & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] >> 0x10);
    setCopReg(2,0x5000,_g_GTE_Data8 & 0xffff);
    setCopReg(2,0x5800,_g_GTE_DataC >> 0x10);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    _g_GTE_Matrix[0] = CONCAT22((s16)uVar3,(s16)uVar2);
    _g_GTE_DataC = CONCAT22((s16)uVar7,(s16)uVar6);
    setCopReg(2,0x4800,_g_GTE_Data4 & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data8 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_Data10 & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _g_GTE_Data4 = CONCAT22((s16)uVar4,(s16)uVar2);
    _g_GTE_Data8 = CONCAT22((s16)uVar3,(s16)uVar5);
    _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar6);
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
    Entity_SubmitQuadToOT(&DAT_8009f3e0,0,0,uVar1 << 5);
    iVar8 = iVar8 + 1;
    param_1->sprite_x = param_1->sprite_x + 0x400;
  } while (iVar8 < 4);
  return;
}
