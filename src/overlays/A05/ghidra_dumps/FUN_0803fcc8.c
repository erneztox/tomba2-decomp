// FUN_0803fcc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803fcc8(int param_1)

{
  byte bVar1;
  char cVar2;
  short extraout_var;
  short extraout_var_00;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined2 *puVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  puVar6 = (undefined2 *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 7) = 0x14;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    iVar3 = _DAT_800ecf88;
    iVar7 = 0;
    *(int *)(param_1 + 0x3c) = _DAT_800ecf88 + *(int *)(_DAT_800ecf88 + 0x150);
    psVar5 = (short *)(param_1 + 0x5a);
    *(int *)(param_1 + 0x34) = iVar3 + *(int *)(iVar3 + 0x154);
    do {
      *puVar6 = *(undefined2 *)(param_1 + 0x2c);
      psVar5[-4] = *(short *)(param_1 + 0x2e);
      psVar5[-3] = *(short *)(param_1 + 0x30);
      psVar5[-1] = (short)(*(short *)(param_1 + 0x2c) + -0x2c02 >> 4);
      iVar7 = iVar7 + 1;
      psVar5[1] = (short)(*(short *)(param_1 + 0x2e) + 0x3140 >> 4);
      puVar6 = puVar6 + 8;
      *psVar5 = (short)(*(short *)(param_1 + 0x30) + -0x4c6b >> 4);
      iVar3 = func_0x0009a450();
      psVar5[-1] = psVar5[-1] + (short)((uint)(iVar3 + -0x4000) >> 8);
      iVar3 = func_0x0009a450();
      psVar5[1] = psVar5[1] + (short)((uint)(iVar3 + -0x4000) >> 8);
      iVar3 = func_0x0009a450();
      *psVar5 = *psVar5 + (short)((uint)(iVar3 + -0x4000) >> 8);
      psVar5 = psVar5 + 8;
    } while (iVar7 < 3);
  }
  psVar5 = (short *)(param_1 + 0x50);
  cVar2 = *(char *)(param_1 + 7) + -1;
  *(char *)(param_1 + 7) = cVar2;
  iVar3 = 0;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    psVar4 = (short *)(param_1 + 0x5a);
    do {
      iVar3 = iVar3 + 1;
      *psVar5 = *psVar5 + psVar4[-1];
      psVar5 = psVar5 + 8;
      psVar4[-4] = psVar4[-4] + *psVar4;
      *psVar4 = *psVar4 + 6;
      psVar4[-3] = psVar4[-3] + psVar4[1];
      psVar4 = psVar4 + 8;
    } while (iVar3 < 3);
    func_0x0009a450();
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + extraout_var;
    func_0x0009a450();
    *(undefined1 *)(param_1 + 1) = 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + extraout_var_00;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

