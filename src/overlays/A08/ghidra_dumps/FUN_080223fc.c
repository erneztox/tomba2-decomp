// FUN_080223fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080223fc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
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
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      _DAT_801485e8 = 0x7fff7fff;
    } while (iVar2 < 0x20);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if ((_DAT_800bfe56 & 0x100) == 0) {
    if (DAT_800bf816 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
      *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -0xc;
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 0x38;
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x65;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 0;
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        _DAT_801485e8 = 0x7fff7fff;
      } while (iVar2 < 0x20);
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

