// FUN_08023420

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023420(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar3 = func_0x00051b70(param_1,0xc,0x32);
    if (iVar3 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x32) + 0xcd;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar4 + 0x36);
  }
  if (DAT_800bf816 == '\0') {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x32) + 0xcd;
    uVar2 = *(undefined2 *)(iVar4 + 0x36);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    func_0x000517f8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

