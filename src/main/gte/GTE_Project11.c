/**
 * @brief GTE project variant 11: entity draw projection
 * @note Original: func_8002FDD0 at 0x8002FDD0
 */
// GTE_Project11



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void GTE_Project11(int param_1)

{
  s16 sVar1;
  uint uVar2;
  s32 in_zero;
  s32 extraout_at;
  s16 sVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  s32 uVar9;
  int iVar10;
  s32 uVar11;
  s32 in_stack_ffffffc4;
  s32 uVar12;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar2 = DAT_800102ec;
  sVar3 = param_1->angle_offset;
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  sVar1 = param_1->sprite_y;
  uVar12 = CONCAT22((s16)((uint)in_stack_ffffffc4 >> 0x10),*(s16 *)(param_1 + 0x30));
  uVar11 = CONCAT22(param_1->pos_y + sVar3 * -10,param_1->pos_x);
  setCopControlWord(2,0xa800,0x1e0);
  setCopControlWord(2,0xb000,0x3c0);
  setCopControlWord(2,0xb800,0x640);
  iVar10 = 0;
  _DAT_1f800090 = 0x1000;
  do {
    GTE_LoadRotMatrixFromSVec(param_1 + 0x48,0x1f800000);
    local_30 = (uVar2 & 0xff) << 2;
    local_28 = (uVar2 >> 0x10 & 0xff) << 2;
    local_2c = (uVar2 >> 8 & 0xff) << 2;
    GTE_TransformVec(0x1f800000,&local_30);
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
    setCopReg(2,in_zero,uVar11);
    setCopReg(2,extraout_at,uVar12);
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
    Entity_SubmitQuadToOT(&DAT_8009f3e0,0,(int)*(s16 *)(param_1 + 0x32),(int)sVar1,uVar11,uVar12);
    iVar10 = iVar10 + 1;
    param_1->velocity_y = param_1->velocity_y + 0x400;
  } while (iVar10 < 4);
  return;
}
