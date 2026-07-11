/**
 * @brief Applies GTE transform to entity (rotation + translation)
 * @note Original address: 0x8002AE0C
 */
// Entity_ApplyTransform

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_ApplyTransform(s32 *param_1,int param_2,int param_3)

{
  s32 in_zero;
  s32 extraout_at;
  s32 extraout_at_00;
  s32 uVar1;
  s32 uVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 in_stack_ffffffd4;
  s32 uVar8;
  int local_28;
  int local_24;
  int local_20;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  DAT_1f800095 = 0x10;
  DAT_1f800094 = (u8)(param_2 >> 3);
  DAT_1f800096 = DAT_1f800094;
  if (param_3 == 0) {
    uVar7 = CONCAT22((*(s16 *)((int)param_1 + 0x32) + *(s16 *)((int)param_1 + 0x86)) -
                     *(s16 *)(param_1 + 0x21),*(s16 *)((int)param_1 + 0x2e));
    uVar8 = CONCAT22((s16)((uint)in_stack_ffffffd4 >> 0x10),*(s16 *)((int)param_1 + 0x36));
    GTE_LoadRotMatrixFromSVec(param_1 + 0x15,0x1f800000,*(s16 *)(param_1 + 0x21),param_2,uVar7,uVar8);
    local_28 = (uint)DAT_1f800094 << 2;
    local_24 = (uint)DAT_1f800095 << 2;
    local_20 = (uint)DAT_1f800096 << 2;
    GTE_TransformVec(0x1f800000,&local_28);
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data4 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_DataC & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] >> 0x10);
    setCopReg(2,0x5000,_g_GTE_Data8 & 0xffff);
    setCopReg(2,0x5800,_g_GTE_DataC >> 0x10);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _g_GTE_Matrix[0] = CONCAT22((s16)uVar2,(s16)uVar1);
    _g_GTE_DataC = CONCAT22((s16)uVar6,(s16)uVar5);
    setCopReg(2,0x4800,_g_GTE_Data4 & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data8 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_Data10 & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar2 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    _g_GTE_Data4 = CONCAT22((s16)uVar3,(s16)uVar1);
    _g_GTE_Data8 = CONCAT22((s16)uVar2,(s16)uVar4);
    _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar5);
    setCopReg(2,in_zero,uVar7);
    setCopReg(2,extraout_at,uVar8);
    copFunction(2,0x486012);
  }
  else {
    GTE_LoadRotMatrixFromSVec(&DAT_800a1ccc,0x1f800000);
    local_28 = (uint)DAT_1f800094 << 2;
    local_24 = (uint)DAT_1f800095 << 2;
    local_20 = (uint)DAT_1f800096 << 2;
    GTE_TransformVec(0x1f800000,&local_28);
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data4 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_DataC & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] >> 0x10);
    setCopReg(2,0x5000,_g_GTE_Data8 & 0xffff);
    setCopReg(2,0x5800,_g_GTE_DataC >> 0x10);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _g_GTE_Matrix[0] = CONCAT22((s16)uVar2,(s16)uVar1);
    _g_GTE_DataC = CONCAT22((s16)uVar6,(s16)uVar5);
    setCopReg(2,0x4800,_g_GTE_Data4 & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data8 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_Data10 & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar2 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    _g_GTE_Data4 = CONCAT22((s16)uVar3,(s16)uVar1);
    _g_GTE_Data8 = CONCAT22((s16)uVar2,(s16)uVar4);
    _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar5);
    setCopReg(2,in_zero,*param_1);
    setCopReg(2,extraout_at_00,param_1->flags);
    copFunction(2,0x486012);
  }
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
  if (g_GameState - 1 < 2) {
    _DAT_1f800090 = 0x800;
  }
  else {
    if (g_GameState == GAMESTATE_7) {
      _DAT_1f800090 = 0x400;
      uVar1 = 0xfffffffd;
      goto LAB_8002b244;
    }
    _DAT_1f800090 = 0;
  }
  uVar1 = 0xfffffff6;
LAB_8002b244:
  Entity_SubmitQuadToOT(&DAT_8009fae8,0,uVar1,0);
  return;
}

