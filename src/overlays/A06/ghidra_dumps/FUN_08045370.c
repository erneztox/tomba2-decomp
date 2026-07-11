// FUN_08045370

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045370(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  short extraout_var;
  short extraout_var_00;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  short *psVar11;
  int iVar12;
  undefined2 *puVar13;
  short *psVar14;
  int iVar15;
  
  bVar5 = *(byte *)(param_1 + 4);
  iVar12 = *(int *)(param_1 + 0x10);
  if (bVar5 != 1) {
    if (1 < bVar5) {
      if (bVar5 == 2) {
        if ((*(char *)(param_1 + 5) == '\0') || (*(char *)(param_1 + 5) != '\x01')) {
          uVar7 = func_0x0009a450();
          *(ushort *)(param_1 + 0x4a) = -7 - (uVar7 & 0xf);
          *(undefined1 *)(param_1 + 5) = 1;
          *(undefined1 *)(param_1 + 7) = 0;
        }
        psVar14 = (short *)(param_1 + 0x50);
        iVar12 = 0;
        psVar11 = (short *)(param_1 + 0x52);
        do {
          func_0x00083f50(iVar12 << 9);
          *psVar14 = *psVar14 + extraout_var;
          func_0x00083e80(iVar12 << 9);
          iVar12 = iVar12 + 1;
          psVar11[1] = psVar11[1] + extraout_var_00;
          psVar14 = psVar14 + 4;
          *psVar11 = *psVar11 + *(short *)(param_1 + 0x4a);
          psVar11 = psVar11 + 4;
        } while (iVar12 < 7);
        bVar5 = *(char *)(param_1 + 7) + 1;
        *(byte *)(param_1 + 7) = bVar5;
        *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 2;
        if (0xe < bVar5) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      if (bVar5 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    puVar13 = (undefined2 *)(param_1 + 0x50);
    if (bVar5 != 0) {
      halt_baddata();
    }
    iVar15 = 0;
    puVar10 = (undefined2 *)(param_1 + 0x56);
    do {
      *puVar13 = *(undefined2 *)(iVar12 + 0x2e);
      iVar15 = iVar15 + 1;
      puVar10[-2] = *(undefined2 *)(iVar12 + 0x32);
      puVar13 = puVar13 + 4;
      puVar10[-1] = *(undefined2 *)(iVar12 + 0x36);
      iVar8 = func_0x0009a450();
      *puVar10 = (short)((uint)(iVar8 * 3) >> 0xe);
      puVar10 = puVar10 + 4;
    } while (iVar15 < 7);
    *(undefined4 *)(param_1 + 0x34) = 0x8014c1b4;
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(char *)(param_1 + 3) == -0x7d) {
      *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
  psVar14 = (short *)(param_1 + 0x80);
  iVar15 = 6;
  psVar11 = (short *)(param_1 + 0x86);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar12 + 1);
  do {
    sVar1 = psVar11[-6];
    sVar6 = psVar11[-2];
    sVar2 = psVar11[-5];
    sVar3 = psVar11[-1];
    *psVar14 = *psVar14 + (short)((int)psVar11[-7] - (int)*psVar14 >> 1);
    psVar11[-2] = psVar11[-2] + (short)((int)sVar1 - (int)sVar6 >> 1);
    psVar11[-1] = psVar11[-1] + (short)((int)sVar2 - (int)sVar3 >> 1);
    uVar9 = func_0x0009a450();
    if ((uVar9 & 1) != 0) {
      sVar1 = *psVar11;
      sVar6 = sVar1 + 1;
      *psVar11 = sVar6;
      if (6 < sVar6) {
        *psVar11 = sVar1 + -6;
      }
    }
    iVar15 = iVar15 + -1;
    psVar11 = psVar11 + -4;
    psVar14 = psVar14 + -4;
  } while (0 < iVar15);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(iVar12 + 0x2e);
  sVar1 = *(short *)(param_1 + 0x56);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(iVar12 + 0x32);
  uVar4 = *(undefined2 *)(iVar12 + 0x36);
  sVar6 = sVar1 + 1;
  *(short *)(param_1 + 0x56) = sVar6;
  *(undefined2 *)(param_1 + 0x54) = uVar4;
  if (6 < sVar6) {
    *(short *)(param_1 + 0x56) = sVar1 + -6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

