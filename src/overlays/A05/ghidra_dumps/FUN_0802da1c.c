// FUN_0802da1c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802da1c(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = 10;
      if ((*(byte *)(param_1 + 0x1b) < 7) ||
         (iVar4 = 0x10 - (uint)*(byte *)(param_1 + 0x1b), 0 < iVar4)) {
        *(short *)(param_1 + 0x40) = (short)iVar4;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        func_0x00077c40(param_1,0x80142108,0);
      }
      else {
        *(undefined1 *)(param_1 + 6) = 2;
      }
    }
  }
  else if (bVar1 == 2) {
    uVar3 = func_0x00123108(param_1);
    *(undefined1 *)(param_1 + 5) = uVar3;
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

