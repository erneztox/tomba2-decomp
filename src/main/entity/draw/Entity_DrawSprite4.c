/**
 * @brief Entity sprite drawer variant 4: different matrix config
 * @note Original: func_8002A834 at 0x8002A834
 */
// Entity_DrawSprite4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void FUN_8002a834(int param_1)

{
  s32 in_zero;
  s32 extraout_at;
  int iVar1;
  u8 *pbVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  s16 local_40;
  s16 local_3e;
  s16 local_3c;
  u8 local_38;
  u8 local_37;
  u8 local_36;
  int local_30;
  int local_2c;
  int local_28;
  
  pbVar2 = (u8 *)(param_1 + 0x50);
  iVar1 = (uint)*(u8 *)(param_1->parent + 2) * 4;
  setCopControlWord(2,0xa800,(uint)(u8)(&DAT_800a1fc4)[iVar1] << 4);
  setCopControlWord(2,0xb000,(uint)(u8)(&DAT_800a1fc5)[iVar1] << 4);
  setCopControlWord(2,0xb800,(uint)(u8)(&DAT_800a1fc6)[iVar1] << 4);
  iVar1 = 0;
  _DAT_1f800090 = 0xfff;
  do {
    local_38 = pbVar2->sub_type;
    local_40 = (u16)*pbVar2 << 4;
    local_3e = (u16)pbVar2->flags << 4;
    local_3c = (u16)pbVar2->kind << 4;
    local_37 = local_38;
    local_36 = local_38;
    FUN_80085480(&local_40,0x1f800000);
    local_30 = (uint)local_38 << 2;
    local_28 = (uint)local_36 << 2;
    local_2c = (uint)local_37 << 2;
    FUN_80084520(0x1f800000,&local_30);
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
    pbVar2 = pbVar2 + 4;
    iVar1 = iVar1 + 1;
    FUN_80027768(&DAT_8009fb0c,0,(int)*(s16 *)(param_1 + 0x32),0);
  } while (iVar1 < 10);
  return;
}
