// FUN_080429b0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080429b0(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  
  bVar1 = *(byte *)(param_1 + 4);
  psVar8 = (short *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar9 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    psVar7 = (short *)(param_1 + 0x56);
    sVar5 = *(short *)(param_1 + 0x2c);
    sVar2 = *(short *)(param_1 + 0x2e);
    sVar3 = *(short *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x4e) = 3;
    do {
      uVar4 = func_0x0009a450();
      *psVar8 = sVar5 + (uVar4 & 0x3f) + -0x20;
      uVar4 = func_0x0009a450();
      psVar7[-2] = sVar2 + (uVar4 & 0x3f) + -0x20;
      uVar4 = func_0x0009a450();
      psVar7[-1] = sVar3 + (uVar4 & 0x3f) + -0x20;
      uVar4 = func_0x0009a450();
      iVar9 = iVar9 + 1;
      *psVar7 = (uVar4 & 0xff) + 0x80;
      psVar7 = psVar7 + 4;
      psVar8 = psVar8 + 4;
    } while (iVar9 * 0x10000 >> 0x10 < 3);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  psVar8 = (short *)(param_1 + 0x50);
  iVar9 = func_0x0009a450();
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + (char)(iVar9 >> 10);
  sVar5 = func_0x0002b278(param_1);
  if (-1 < *(char *)(param_1 + 7)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else {
      if (sVar5 == 0) {
        func_0x00031780(param_1);
      }
      iVar9 = 0;
      psVar7 = (short *)(param_1 + 0x54);
      sVar5 = *(short *)(param_1 + 0x2c);
      sVar2 = *(short *)(param_1 + 0x2e);
      uVar6 = (uint)(*(byte *)(param_1 + 7) >> 1);
      sVar3 = *(short *)(param_1 + 0x30);
      *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) + 1;
      do {
        iVar9 = iVar9 + 1;
        *psVar8 = *psVar8 + (short)((int)*psVar8 - (int)sVar5 >> (uVar6 & 0x1f));
        psVar8 = psVar8 + 4;
        psVar7[-1] = psVar7[-1] + (short)((int)psVar7[-1] - (int)sVar2 >> (uVar6 & 0x1f)) + -3;
        *psVar7 = *psVar7 + (short)((int)*psVar7 - (int)sVar3 >> (uVar6 & 0x1f));
        psVar7 = psVar7 + 4;
      } while (iVar9 * 0x10000 >> 0x10 < 3);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

