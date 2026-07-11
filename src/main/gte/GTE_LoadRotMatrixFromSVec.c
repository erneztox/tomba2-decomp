/**
 * @brief Loads rotation matrix from SVec format into GTE registers
 * @note Original: func_80085480 at 0x80085480
 */
// GTE_LoadRotMatrixFromSVec



void FUN_80085480(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  iVar16 = *param_1;
  uVar14 = (int)(short)param_1[1] >> 0x1f;
  uVar12 = iVar16 >> 0x1f;
  uVar10 = (int)(short)iVar16 >> 0x1f;
  uVar1 = *(int *)(&DAT_800a6490 + (((int)(short)param_1[1] + uVar14 ^ uVar14) & 0xfff) * 4) *
          0x10000 + uVar14 ^ uVar14;
  uVar2 = *(int *)(&DAT_800a6490 + (((iVar16 >> 0x10) + uVar12 ^ uVar12) & 0xfff) * 4) * 0x10000 +
          uVar12 ^ uVar12;
  uVar3 = uVar2 >> 0x10;
  uVar4 = *(int *)(&DAT_800a6490 + (((int)(short)iVar16 + uVar10 ^ uVar10) & 0xfff) * 4) * 0x10000 +
          uVar10 ^ uVar10;
  iVar8 = (int)((*(int *)(&DAT_800a6490 + (((int)(short)iVar16 + uVar10 ^ uVar10) & 0xfff) * 4) >>
                0x10) << 0x10 | uVar4 >> 0x10) >> 0x10;
  setCopReg(2,0x4000,iVar8);
  iVar7 = (int)(short)(uVar2 >> 0x10);
  setCopReg(2,0x4800,iVar7);
  iVar6 = (int)(short)(uVar1 >> 0x10);
  setCopReg(2,0x5000,iVar6);
  iVar5 = (int)((*(int *)(&DAT_800a6490 + (((int)(short)param_1[1] + uVar14 ^ uVar14) & 0xfff) * 4)
                >> 0x10) << 0x10 | uVar1 >> 0x10) >> 0x10;
  setCopReg(2,0x5800,iVar5);
  copFunction(2,0x198003d);
  iVar16 = (int)((*(int *)(&DAT_800a6490 + (((iVar16 >> 0x10) + uVar12 ^ uVar12) & 0xfff) * 4) >>
                 0x10) << 0x10 | uVar3) >> 0x10;
  uVar9 = getCopReg(2,0x4800);
  iVar11 = getCopReg(2,0x5000);
  iVar13 = getCopReg(2,0x5800);
  iVar18 = (int)(short)(uVar4 >> 0x10);
  setCopReg(2,0x4000,iVar18);
  setCopReg(2,0x4800,iVar7);
  setCopReg(2,0x5000,iVar6);
  setCopReg(2,0x5800,iVar5);
  copFunction(2,0x198003d);
  *(short *)(param_2 + 4) = (short)(iVar16 * iVar8 >> 0xc);
  uVar15 = getCopReg(2,0x4800);
  iVar8 = getCopReg(2,0x5000);
  iVar17 = getCopReg(2,0x5800);
  setCopReg(2,0x4000,iVar5);
  setCopReg(2,0x4800,iVar16);
  setCopReg(2,0x5000,uVar15);
  setCopReg(2,0x5800,uVar9);
  copFunction(2,0x198003d);
  uVar1 = getCopReg(2,0x4800);
  iVar5 = getCopReg(2,0x5000);
  iVar7 = getCopReg(2,0x5800);
  setCopReg(2,0x4000,iVar6);
  setCopReg(2,0x4800,iVar16);
  setCopReg(2,0x5000,uVar15);
  setCopReg(2,0x5800,uVar9);
  copFunction(2,0x198003d);
  param_2[1] = (iVar5 + iVar11) * 0x10000 | uVar3;
  iVar5 = getCopReg(2,0x4800);
  *param_2 = iVar5 * -0x10000 | uVar1 & 0xffff;
  iVar5 = getCopReg(2,0x5000);
  iVar6 = getCopReg(2,0x5800);
  param_2[2] = (iVar16 * iVar18 >> 0xc) * -0x10000 | iVar13 - iVar5 & 0xffffU;
  param_2[3] = iVar8 - iVar7 & 0xffffU | (iVar17 + iVar6) * 0x10000;
  return;
}
