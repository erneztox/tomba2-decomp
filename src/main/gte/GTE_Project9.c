/**
 * @brief GTE project variant 9: loads matrix from entity, projects
 * @note Original: func_8002AB5C at 0x8002AB5C
 */
// GTE_Project9



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void FUN_8002ab5c(int param_1)

{
  s32 in_zero;
  s32 extraout_at;
  s32 uVar1;
  s32 uVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  int local_28;
  int local_24;
  int local_20;
  
  _DAT_1f800090 = (0x80 - param_1->sprite_x) * 0x20;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  DAT_800a2014 = (u8)((int)param_1->timer1 * (int)param_1->angle_offset >> 0xb);
  DAT_800a2016 = (u8)((int)param_1->timer2 * (int)param_1->angle_offset >> 0xb);
  FUN_80085480(param_1 + 0x54,0x1f800000);
  local_28 = (uint)DAT_800a2014 << 2;
  local_24 = (uint)DAT_800a2015 << 2;
  local_20 = (uint)DAT_800a2016 << 2;
  FUN_80084520(0x1f800000,&local_28);
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
  setCopReg(2,in_zero,*(s32 *)(param_1 + 0x48));
  setCopReg(2,extraout_at,*(s32 *)(param_1 + 0x4c));
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
  FUN_80027768(&DAT_8009fae8,0,0,0);
  return;
}
