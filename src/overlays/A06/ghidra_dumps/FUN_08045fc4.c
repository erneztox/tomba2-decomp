// FUN_08045fc4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08045fc4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  short extraout_var;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  pcVar7 = (char *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    uVar4 = 0;
    pcVar6 = pcVar7;
    if (bVar1 != 0) {
      halt_baddata();
    }
    do {
      bVar1 = func_0x0009a450();
      pcVar6[1] = bVar1 | 0x20;
      bVar1 = func_0x0009a450();
      pcVar6[2] = bVar1 & 0x1f;
      if ((uVar4 & 3) == 0) {
        func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((uVar4 & 3) == 1) {
        func_0x0009a450();
        halt_baddata();
      }
      bVar1 = func_0x0009a450();
      *pcVar6 = (bVar1 & 0x7f) + 0x60;
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar6 + 4;
    } while ((int)uVar4 < 0xe);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 7) = 0x14;
    uVar3 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x48) = uVar3;
    uVar3 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x4a) = uVar3;
    uVar3 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x4c) = uVar3;
    iVar5 = _DAT_800ecf88;
    *(int *)(param_1 + 0x3c) = _DAT_800ecf88 + *(int *)(_DAT_800ecf88 + 0x15c);
    *(int *)(param_1 + 0x38) = iVar5 + *(int *)(iVar5 + 0x160);
    *(int *)(param_1 + 0x34) = iVar5 + *(int *)(iVar5 + 0x164);
  }
  cVar2 = *(char *)(param_1 + 7) + -1;
  *(char *)(param_1 + 7) = cVar2;
  iVar5 = 0;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    do {
      iVar5 = iVar5 + 1;
      pcVar7[2] = pcVar7[2] + '\x04';
      pcVar7 = pcVar7 + 4;
    } while (iVar5 < 0xe);
    iVar5 = func_0x0009a450();
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + (short)(iVar5 >> 7);
    func_0x0009a450();
    *(undefined1 *)(param_1 + 1) = 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + extraout_var;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

