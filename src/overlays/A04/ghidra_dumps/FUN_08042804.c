// FUN_08042804

/* WARNING: Control flow encountered bad instruction data */

void FUN_08042804(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  short extraout_var;
  short extraout_var_00;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 *puVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  
  bVar1 = *(byte *)(param_1 + 4);
  puVar8 = (undefined4 *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x4e) = 7;
    uVar3 = func_0x0009a450();
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    sVar11 = *(short *)(param_1 + 0x30);
    iVar10 = 0;
    *(undefined2 *)(param_1 + 0x4c) = uVar3;
    do {
      *puVar8 = uVar6;
      uVar4 = func_0x0009a450();
      iVar10 = iVar10 + 1;
      puVar8[1] = (int)sVar11 | ((uVar4 & 0x1f) - 0x50) * 0x10000;
      puVar8 = puVar8 + 2;
    } while (iVar10 * 0x10000 >> 0x10 < 7);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  psVar9 = (short *)(param_1 + 0x50);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    sVar11 = *(short *)(param_1 + 0x4c);
    iVar10 = 0;
    psVar7 = (short *)(param_1 + 0x56);
    do {
      iVar5 = (int)sVar11;
      func_0x00083f50(iVar5);
      sVar11 = sVar11 + 0x249;
      *psVar9 = *psVar9 + extraout_var;
      func_0x00083e80(iVar5);
      iVar10 = iVar10 + 1;
      psVar9 = psVar9 + 4;
      sVar2 = *psVar7;
      psVar7[-1] = psVar7[-1] + extraout_var_00;
      *psVar7 = sVar2 + 4;
      psVar7[-2] = psVar7[-2] + sVar2;
      psVar7 = psVar7 + 4;
    } while (iVar10 * 0x10000 >> 0x10 < 7);
    iVar10 = func_0x0002b278(param_1);
    if (iVar10 != 0) {
      return;
    }
    func_0x00031780(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

