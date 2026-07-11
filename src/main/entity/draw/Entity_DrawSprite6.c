/**
 * @brief Entity sprite drawer variant 6: full projection pipeline
 * @note Original: func_8002B3A4 at 0x8002B3A4
 */
// Entity_DrawSprite6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_DrawSprite6(int param_1)

{
  s32 bVar1;
  s32 in_zero;
  s32 extraout_at;
  s32 extraout_at_00;
  int iVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  int local_30;
  
  if (param_1->scale_y != 0) {
    GTE_LoadRotMatrixFromSVec(param_1 + 0x48,0x1f800000);
    local_38 = (uint)DAT_800a1cd4 << 2;
    local_34 = (uint)DAT_800a1cd5 << 2;
    local_30 = (uint)DAT_800a1cd6 << 2;
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
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    iVar10 = 0;
    _g_GTE_WorkC0 = CONCAT22(param_1->angle_offset << 6,_g_GTE_WorkC0);
    uVar4 = param_1->scale_y;
    _DAT_1f800090 = 0;
    iVar9 = 0;
    uVar3 = uVar4;
    do {
      iVar2 = Math_CosGTE(iVar9);
      _g_GTE_WorkC0 = CONCAT22(_DAT_1f8000c2,(s16)((uint)(iVar2 * 0x19) >> 4));
      iVar9 = Math_Cos(iVar9);
      _g_GTE_WorkC4 = CONCAT22(g_GTE_WorkC4_2,(s16)((uint)(iVar9 * 0x19) >> 4));
      setCopReg(2,in_zero,_g_GTE_WorkC0);
      setCopReg(2,extraout_at_00,_g_GTE_WorkC4);
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
          if (_g_GTE_Result[0] < 0) {
            bVar1 = true;
          }
          else {
            _g_GTE_Work8C = getCopReg(2,0xe);
            _g_GTE_Work84 = getCopReg(2,0x18);
            bVar1 = false;
          }
        }
      }
      if (!bVar1) {
        _DAT_1f800088 = _g_GTE_Work84;
        uVar3 = Entity_ProcessAnimFrame(uVar4,*(s32 *)(param_1 + 0x44));
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar10 * 0x400;
    } while (iVar10 < 4);
    param_1->anim_data = uVar3;
  }
  return;
}
