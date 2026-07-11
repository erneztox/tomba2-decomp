/**
 * @brief Entity draw main variant 5: full draw pipeline (202L)
 * @note Original: func_80030264 at 0x80030264
 */
// Entity_DrawMain5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_DrawMain5(int param_1,s32 param_2,s32 param_3,s32 param_4)

{
  s32 in_zero;
  s32 extraout_at;
  s32 extraout_at_00;
  int iVar1;
  int iVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  s16 sVar18;
  int iVar19;
  s32 uVar20;
  s32 in_stack_ffffffa4;
  s32 uVar21;
  s32 local_58;
  int local_54;
  s32 local_50;
  s16 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  s32 *local_34;
  int local_30;
  
  sVar18 = param_1->angle_offset;
  iVar19 = (int)sVar18;
  if (param_1->state == '\x01') {
    if (iVar19 < 0) {
      sVar18 = 0;
    }
    uVar21 = CONCAT22((s16)((uint)in_stack_ffffffa4 >> 0x10),*(s16 *)(param_1 + 0x30));
    uVar20 = CONCAT22(param_1->pos_y + sVar18 * -10,param_1->pos_x);
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f800090 = 0;
    GTE_LoadRotMatrixFromSVec(param_1 + 0x48,0x1f800000,0x1f800000,param_4,uVar20,uVar21);
    local_58 = (uint)DAT_800a1cd4 << 2;
    local_54 = (uint)DAT_800a1cd5 << 2;
    local_50 = (uint)DAT_800a1cd6 << 2;
    GTE_TransformVec(0x1f800000,&local_58);
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
    setCopReg(2,in_zero,uVar20);
    setCopReg(2,extraout_at,uVar21);
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
    Entity_SubmitQuadToOT(&DAT_8009f428,0,(int)*(s16 *)(param_1 + 0x32),0);
  }
  else {
    iVar13 = 0x12d687;
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    local_34 = &local_58;
    _DAT_1f800090 = 0;
    local_38 = 0;
    local_30 = 0;
    do {
      iVar16 = iVar13 + iVar19;
      uVar14 = iVar13 * 5 + 1;
      uVar9 = uVar14 & 0xfff;
      uVar14 = uVar14 * 5 + 1;
      uVar17 = uVar14 & 0xfff;
      uVar15 = uVar14 * 5 + 1;
      uVar14 = uVar15 & 0x1ff;
      iVar13 = uVar15 * 5 + 1;
      if ((int)(uVar14 - 0x100) < 0) {
        iVar10 = uVar14 - 0x140;
      }
      else {
        iVar10 = uVar14 - 0xc0;
      }
      iVar11 = iVar10 * iVar19 >> 9;
      iVar10 = Math_Cos(uVar9);
      iVar1 = Math_CosGTE(uVar9);
      iVar12 = iVar1 * iVar11 >> 0xc;
      iVar1 = Math_Cos(uVar17);
      iVar2 = Math_CosGTE(uVar17);
      local_58 = CONCAT22(param_1->pos_y +
                          ((s16)(iVar10 * iVar11 >> 0xc) - (s16)local_30),
                          param_1->pos_x + (s16)(iVar12 * iVar1 >> 0xc));
      sVar18 = (s16)iVar16;
      local_50 = CONCAT22(sVar18 * 2,sVar18);
      local_4c = (s16)(iVar16 >> 2);
      local_54 = CONCAT22(local_54._2_2_,*(s16 *)(param_1 + 0x30) + (s16)(iVar12 * iVar2 >> 0xc)
                         );
      GTE_LoadRotMatrixFromSVec(&local_50,0x1f800000);
      local_48 = (uint)DAT_800a1cd4 << 2;
      local_44 = (uint)DAT_800a1cd5 << 2;
      local_40 = (uint)DAT_800a1cd6 << 2;
      GTE_TransformVec(0x1f800000,&local_48);
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
      setCopReg(2,in_zero,*local_34);
      setCopReg(2,extraout_at_00,local_34->flags);
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
      local_30 = local_30 + 0x14;
      local_38 = local_38 + 1;
      Entity_SubmitQuadToOT(&DAT_8009f620,0,(int)*(s16 *)(param_1 + 0x32),0);
    } while (local_38 < 10);
  }
  return;
}
