// FUN_08022d2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022d2c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
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
    *(undefined2 *)(param_1 + 0x32) = 0xffa6;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined2 *)(param_1 + 0x2c) = 0x2687;
  *(undefined2 *)(param_1 + 0x2e) = 0xf1ec;
  *(undefined2 *)(param_1 + 0x30) = 0x16fc;
  if (*(byte *)(*(int *)(param_1 + 0x10) + 5) < 4) {
    sVar2 = *(short *)(iVar3 + 0x32);
    *(undefined1 *)(param_1 + 1) = 1;
    *(int *)(param_1 + 0x50) = (0x140 - sVar2) * 0xd;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

