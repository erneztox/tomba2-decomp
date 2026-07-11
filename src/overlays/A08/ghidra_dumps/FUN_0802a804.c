// FUN_0802a804

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802a804(int param_1)

{
  byte bVar1;
  
  func_0x0007778c();
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (DAT_800bfa43 == 3) {
      *(undefined1 *)(param_1 + 5) = 2;
      halt_baddata();
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800bfa43 < 7) {
      *(undefined1 *)(param_1 + 5) = 1;
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
      halt_baddata();
    }
    if (DAT_800bfa43 == 3) {
      if (*(char *)(param_1 + 3) != '\x01') {
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x10;
        *(ushort *)(param_1 + 0x56) = *(ushort *)(param_1 + 0x56) & 0xfff;
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined1 *)(param_1 + 5) = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

