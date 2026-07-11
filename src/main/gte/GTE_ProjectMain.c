/**
 * @brief GTE projection main: full projection pipeline
 * @note Original: func_8002BC9C at 0x8002BC9C
 */
// GTE_ProjectMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void FUN_8002bc9c(int param_1)

{
  s32 bVar1;
  s32 in_zero;
  s32 in_at;
  s32 extraout_at;
  s32 extraout_at_00;
  u8 *pbVar2;
  uint uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  s32 uVar9;
  int iVar10;
  s32 uVar11;
  int local_38;
  int local_34;
  int local_30;
  
  _DAT_1f800090 = 0;
  pbVar2 = *(u8 **)(param_1 + 0x3c);
  if (pbVar2 != (u8 *)0x0) {
    uVar3 = (uint)*pbVar2;
    if ((*pbVar2 & 0x80) == 0) {
      *(u8 **)(param_1 + 0x40) = pbVar2 + 1;
    }
    else {
      *(s32 *)(param_1 + 0x40) = 0;
      uVar3 = uVar3 & 0x7f;
    }
    uVar11 = *(s32 *)(uVar3 * 4 + *(int *)(param_1 + 0x50));
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar10 = 0;
    do {
      FUN_80085480(param_1 + 0x48,0x1f800000);
      local_38 = (uint)DAT_800a1cd4 << 2;
      local_34 = (uint)DAT_800a1cd5 << 2;
      local_30 = (uint)DAT_800a1cd6 << 2;
      FUN_80084520(0x1f800000,&local_38);
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
      FUN_80027768(uVar11,0,(int)*(s16 *)(param_1 + 0x32),0);
      iVar10 = iVar10 + 1;
      param_1->velocity_y = param_1->velocity_y + 0x400;
      in_at = extraout_at_00;
    } while (iVar10 < 4);
  }
  if ((param_1->sub_type - 0x14 < 2) && (param_1->scale_y != 0)) {
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_g_GTE_Work10C);
    setCopControlWord(2,0x3000,_g_GTE_Work110);
    setCopControlWord(2,0x3800,_g_GTE_Work114);
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    setCopReg(2,in_zero,*(s32 *)(param_1 + 0x58));
    setCopReg(2,in_at,*(s32 *)(param_1 + 0x5c));
    copFunction(2,0x180001);
    _g_GTE_Result[0] = getCopControlWord(2,0xf800);
    bVar1 = true;
    if (-1 < _g_GTE_Result[0]) {
      _g_GTE_Result[0] = getCopReg(2,0x13);
      if (0 < _g_GTE_Result[0]) {
        _g_GTE_Result[0] = (_g_GTE_Result[0] >> 2) + (int)*(s16 *)(param_1 + 0x32);
        if (_g_GTE_Result[0] < 4) {
          _g_GTE_Result[0] = 4;
        }
        _g_GTE_Result[0] =
             (_g_GTE_Result[0] >> (_g_GTE_Result[0] >> 10 & 0x1fU)) + (_g_GTE_Result[0] >> 10) * 0x200;
        if (0x7fb < _g_GTE_Result[0] - 4U) {
          _g_GTE_Result[0] = -1;
        }
        bVar1 = true;
        if (-1 < _g_GTE_Result[0]) {
          _g_GTE_Work8C = getCopReg(2,0xe);
          _g_GTE_Work84 = getCopReg(2,0x18);
          bVar1 = false;
        }
      }
    }
    if (bVar1) {
      FUN_80031780(param_1);
    }
    else {
      _DAT_1f800088 = _g_GTE_Work84;
      uVar11 = FUN_80027a4c(param_1->scale_y,*(s32 *)(param_1 + 0x44));
      param_1->anim_data = uVar11;
    }
  }
  return;
}
