// FUN_080185ac

/* WARNING: Control flow encountered bad instruction data */

void FUN_080185ac(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  int iVar11;
  
  bVar1 = *(byte *)(param_1 + 4);
  psVar10 = (short *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar11 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    sVar6 = *(short *)(param_1 + 0x2c);
    psVar9 = (short *)(param_1 + 0x6c);
    sVar2 = *(short *)(param_1 + 0x2e);
    sVar3 = *(short *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x4e) = 3;
    do {
      uVar5 = func_0x0009a450();
      sVar8 = (uVar5 & 0x3f) - 0x20;
      uVar5 = func_0x0009a450();
      sVar7 = (uVar5 & 0x3f) - 0x20;
      uVar5 = func_0x0009a450();
      sVar4 = (uVar5 & 0x3f) - 0x20;
      *psVar10 = sVar6 + sVar8;
      psVar9[-0xd] = sVar2 + sVar7;
      psVar9[-0xc] = sVar3 + sVar4;
      if (*(char *)(param_1 + 3) == ',') {
        func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = func_0x0009a450();
      psVar9[-0xb] = (uVar5 & 0xff) + 0x80;
      iVar11 = iVar11 + 1;
      psVar9[-2] = sVar8 >> 2;
      psVar9[-1] = sVar7 >> 2;
      *psVar9 = sVar4 >> 2;
      psVar9 = psVar9 + 4;
      psVar10 = psVar10 + 4;
    } while (iVar11 * 0x10000 >> 0x10 < 3);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  }
  psVar10 = (short *)(param_1 + 0x50);
  sVar6 = func_0x0002b278(param_1);
  iVar11 = func_0x0009a450();
  iVar11 = (uint)*(byte *)(param_1 + 7) + (iVar11 >> 0xb) + 0x20;
  *(char *)(param_1 + 7) = (char)iVar11;
  if (iVar11 * 0x1000000 < 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined1 *)(param_1 + 4) = 2;
      halt_baddata();
    }
    if (sVar6 == 0) {
      func_0x00031780(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -0x80;
  }
  iVar11 = 0;
  psVar9 = (short *)(param_1 + 0x6a);
  do {
    iVar11 = iVar11 + 1;
    *psVar10 = *psVar10 + psVar9[-1];
    psVar10 = psVar10 + 4;
    psVar9[-0xc] = psVar9[-0xc] + *psVar9;
    *psVar9 = *psVar9 + 1;
    psVar9[-0xb] = psVar9[-0xb] + psVar9[1];
    psVar9 = psVar9 + 4;
  } while (iVar11 * 0x10000 >> 0x10 < 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

