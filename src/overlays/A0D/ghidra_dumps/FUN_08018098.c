// FUN_08018098

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018098(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  short extraout_var;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  bVar2 = *(byte *)(param_1 + 4);
  pcVar7 = (char *)(param_1 + 0x50);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    uVar5 = 0;
    pcVar6 = pcVar7;
    if (bVar2 != 0) {
      halt_baddata();
    }
    do {
      cVar1 = func_0x0009a450();
      pcVar6[1] = cVar1;
      bVar2 = func_0x0009a450();
      pcVar6[2] = bVar2 & 7;
      if ((uVar5 & 3) == 0) {
        func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((uVar5 & 3) == 1) {
        func_0x0009a450();
        halt_baddata();
      }
      bVar2 = func_0x0009a450();
      *pcVar6 = (bVar2 & 0x3f) + 0x20;
      uVar5 = uVar5 + 1;
      pcVar6 = pcVar6 + 4;
    } while ((int)uVar5 < 0xe);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 7) = 0xf;
    uVar3 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x48) = uVar3;
    uVar3 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x4a) = uVar3;
    uVar3 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x4c) = uVar3;
    iVar4 = _DAT_800ecf88;
    if (*(char *)(param_1 + 3) == -0x7b) {
      iVar4 = _DAT_800ecf88 + *(int *)(_DAT_800ecf88 + 0x44);
      *(int *)(param_1 + 0x38) = iVar4;
      *(int *)(param_1 + 0x34) = iVar4;
      *(int *)(param_1 + 0x3c) = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_1 + 0x3c) = _DAT_800ecf88 + *(int *)(_DAT_800ecf88 + 0x44);
    *(int *)(param_1 + 0x34) = iVar4 + *(int *)(iVar4 + 0x40);
    *(int *)(param_1 + 0x38) = iVar4 + *(int *)(iVar4 + 0x3c);
  }
  cVar1 = *(char *)(param_1 + 7) + -1;
  *(char *)(param_1 + 7) = cVar1;
  iVar4 = 0;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    do {
      iVar4 = iVar4 + 1;
      pcVar7[2] = pcVar7[2] + '\x05';
      pcVar7 = pcVar7 + 4;
    } while (iVar4 < 0xe);
    iVar4 = func_0x0009a450();
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + (short)(iVar4 >> 7);
    func_0x0009a450();
    *(undefined1 *)(param_1 + 1) = 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + extraout_var;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

