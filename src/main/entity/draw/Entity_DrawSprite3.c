/**
 * @brief Entity sprite drawer variant 3: different matrix source
 * @note Original: func_8002C138 at 0x8002C138
 */
// Entity_DrawSprite3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void FUN_8002c138(int param_1)

{
  int iVar1;
  s32 in_zero;
  s32 extraout_at;
  s32 uVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s16 local_30;
  s16 local_2e;
  s16 local_2c;
  s32 local_28;
  s32 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_2c = 0;
  local_30 = 0;
  local_2e = param_1->rot_y;
  iVar1 = ((int)((uint)param_1->draw_x << 0x10) >> 0x11) * 5;
  if ((param_1->draw_x & 1) != 0) {
    local_2c = 0xaa;
  }
  local_28 = CONCAT22(*(s16 *)(param_1 + 0x32),param_1->pos_y);
  local_24 = CONCAT22(local_24._2_2_,param_1->pos_z);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = 0;
  FUN_80085480(&local_30,0x1f800000);
  local_20 = (uint)(u8)(&DAT_800a203c)[iVar1] << 2;
  local_1c = (uint)(u8)(&DAT_800a203d)[iVar1] << 2;
  local_18 = (uint)(u8)(&DAT_800a203e)[iVar1] << 2;
  FUN_80084520(0x1f800000,&local_20);
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
  setCopReg(2,in_zero,local_28);
  setCopReg(2,extraout_at,local_24);
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
  FUN_80027768(&DAT_8009f05c,(&DAT_800a203f)[iVar1],0xfffffff6,(&DAT_800a2040)[iVar1]);
  return;
}
