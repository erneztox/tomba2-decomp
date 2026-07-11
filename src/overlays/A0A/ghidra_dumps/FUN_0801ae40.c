// FUN_0801ae40

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801ae40(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  short *psVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  psVar4 = (short *)(param_1 + 0x50);
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
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x50) = 0x1000;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar3 + 0x2e);
    uVar2 = *(undefined2 *)(iVar3 + 0x36);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x4e);
    *(undefined2 *)(param_1 + 0x30) = uVar2;
  }
  if (*(byte *)(iVar3 + 4) < 2) {
    if (-0xfff < *psVar4) {
      *psVar4 = *psVar4 + -0x199;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

