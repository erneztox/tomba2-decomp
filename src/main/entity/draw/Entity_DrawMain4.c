/**
 * @brief Entity draw main variant 4: final projection path
 * @note Original: func_8002D65C at 0x8002D65C
 */
// Entity_DrawMain4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_DrawMain4(int param_1)

{
  s32 bVar1;
  s32 in_zero;
  s32 extraout_at;
  s32 extraout_at_00;
  s32 extraout_at_01;
  s16 sVar2;
  int iVar3;
  int iVar4;
  s16 sVar5;
  s16 sVar6;
  s32 *puVar7;
  s32 *puVar8;
  s32 uVar9;
  s32 uVar10;
  s32 uVar11;
  s32 uVar12;
  s32 uVar13;
  int iVar14;
  int iVar15;
  s32 uVar16;
  int iVar17;
  s32 in_stack_ffffffa4;
  s16 uVar18;
  uint uVar19;
  u8 auStack_50->counter1;
  s32 local_48;
  s32 local_44;
  int local_40;
  int local_3c;
  int local_38;
  s32 *local_30;
  s32 *local_2c;
  
  uVar16 = 0;
  iVar14 = 0;
  iVar17 = param_1->scale_y;
  if (iVar17 != 0) {
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
    _DAT_1f800090 = 0;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar15 = 0;
    do {
      uVar18 = (s16)((uint)in_stack_ffffffa4 >> 0x10);
      iVar3 = Math_CosGTE(iVar14);
      sVar5 = param_1->pos_x + (s16)(iVar3 * 0x4b0 >> 0xc);
      iVar3 = Math_Cos(iVar14);
      in_stack_ffffffa4 =
           CONCAT22(uVar18,*(s16 *)(param_1 + 0x30) + (s16)(iVar3 * 0x4b0 >> 0xc));
      sVar6 = param_1->pos_y + param_1->sprite_x;
      sVar2 = sVar6 + -0xc00;
      iVar3 = 0;
      if (3 < iVar15) {
        sVar2 = sVar6 + -0xa80;
      }
      uVar10 = CONCAT22(sVar2,sVar5);
      puVar8 = (s32 *)&g_GTE_Work84;
      puVar7 = (s32 *)&g_GTE_Work8C;
      uVar9 = extraout_at;
      do {
        setCopReg(2,in_zero,uVar10);
        setCopReg(2,uVar9,in_stack_ffffffa4);
        copFunction(2,0x180001);
        _g_GTE_Result[0] = getCopControlWord(2,0xf800);
        bVar1 = true;
        if (-1 < _g_GTE_Result[0]) {
          _g_GTE_Result[0] = getCopReg(2,0x13);
          iVar4 = _g_GTE_Result[0] >> 2;
          if (_g_GTE_Result[0] < 1) {
            bVar1 = true;
          }
          else {
            _g_GTE_Result[0] = iVar4;
            if (iVar4 < 4) {
              _g_GTE_Result[0] = 4;
            }
            _g_GTE_Result[0] =
                 (_g_GTE_Result[0] >> (_g_GTE_Result[0] >> 10 & 0x1fU)) + (_g_GTE_Result[0] >> 10) * 0x200;
            if (0x7fb < _g_GTE_Result[0] - 4U) {
              _g_GTE_Result[0] = -1;
            }
            bVar1 = true;
            if (-1 < _g_GTE_Result[0]) {
              uVar11 = getCopReg(2,0xe);
              *puVar7 = uVar11;
              uVar11 = getCopReg(2,0x18);
              *puVar8 = uVar11;
              bVar1 = false;
            }
          }
        }
        if (!bVar1) {
          _DAT_1f800088 = _g_GTE_Work84;
          _g_GTE_Work84 = _g_GTE_Work84 - (_g_GTE_Work84 >> 2);
          local_30 = puVar7;
          local_2c = puVar8;
          uVar16 = Entity_ProcessAnimFrame(iVar17,*(s32 *)(param_1 + 0x44));
          uVar9 = extraout_at_00;
          puVar7 = local_30;
          puVar8 = local_2c;
        }
        iVar3 = iVar3 + 1;
        uVar10 = CONCAT22((s16)((uint)uVar10 >> 0x10) + 0x300,(s16)uVar10);
      } while (iVar3 < 8);
      if (iVar15 == 3) {
        iVar14 = iVar14 + 0x200;
      }
      iVar15 = iVar15 + 1;
      iVar14 = iVar14 + 0x400;
    } while (iVar15 < 8);
    param_1->anim_data = uVar16;
    uVar19 = DAT_800102b4;
    Mem_Set(auStack_50,0,8,puVar7,uVar10,in_stack_ffffffa4,DAT_800102b4);
    local_48 = *(s32 *)(param_1 + 0x2c);
    local_44 = CONCAT22(local_44._2_2_,*(s16 *)(param_1 + 0x30));
    GTE_LoadRotMatrixFromSVec(auStack_50,0x1f800000);
    local_40 = (uVar19 & 0xff) << 2;
    local_38 = (uVar19 >> 0x10 & 0xff) << 2;
    local_3c = (uVar19 >> 8 & 0xff) << 2;
    GTE_TransformVec(0x1f800000,&local_40);
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data4 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_DataC & 0xffff);
    copFunction(2,0x49e012);
    uVar16 = getCopReg(2,0x4800);
    uVar10 = getCopReg(2,0x5000);
    uVar12 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] >> 0x10);
    setCopReg(2,0x5000,_g_GTE_Data8 & 0xffff);
    setCopReg(2,0x5800,_g_GTE_DataC >> 0x10);
    copFunction(2,0x49e012);
    uVar9 = getCopReg(2,0x4800);
    uVar11 = getCopReg(2,0x5000);
    uVar13 = getCopReg(2,0x5800);
    _g_GTE_Matrix[0] = CONCAT22((s16)uVar9,(s16)uVar16);
    _g_GTE_DataC = CONCAT22((s16)uVar13,(s16)uVar12);
    setCopReg(2,0x4800,_g_GTE_Data4 & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data8 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_Data10 & 0xffff);
    copFunction(2,0x49e012);
    uVar16 = getCopReg(2,0x4800);
    uVar9 = getCopReg(2,0x5000);
    uVar12 = getCopReg(2,0x5800);
    _g_GTE_Data4 = CONCAT22((s16)uVar10,(s16)uVar16);
    _g_GTE_Data8 = CONCAT22((s16)uVar9,(s16)uVar11);
    _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar12);
    setCopReg(2,in_zero,local_48);
    setCopReg(2,extraout_at_01,local_44);
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
    _DAT_1f800090 = 0;
    if (g_GameMode == '\x03') {
      _DAT_800a2064 = _DAT_800a2064 - 6;
    }
    else {
      _DAT_800a2064 = _DAT_800a2064 + 6;
    }
    _DAT_800a2064 = _DAT_800a2064 & 0x3f;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    Entity_SubmitQuadToOT(&DAT_800a172c,0,0,DAT_800a2064);
  }
  return;
}
