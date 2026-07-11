// FUN_08026e34

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026e34(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    DAT_800bf81f = ('\x01' - *(char *)(param_1 + 0x5f)) * '\x10';
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (DAT_800e7eaa == *(char *)(param_1 + 0x2a)) {
        if (DAT_800e7e85 == '\0') {
          *(undefined1 *)(param_1 + 5) = 1;
          DAT_1f800137 = 2;
          halt_baddata();
        }
        return;
      }
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (DAT_800e7eaa == *(char *)(param_1 + 0x2a)) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
  }
  iVar2 = func_0x00073328(param_1);
  if (iVar2 != 0) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

