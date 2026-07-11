// FUN_0804119c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804119c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  if (*(char *)(param_1 + 0x71) != -1) {
    if ((*(char *)(param_1 + 0x5e) == '\x04') && (*(char *)(param_1 + 6) == '\x01')) {
      uVar2 = func_0x00085690((int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164,
                              (int)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e));
      *(ushort *)(param_1 + 0x56) = uVar2 & 0xfff;
    }
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 != 2) {
    if (bVar1 < 3) {
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 5) = 0;
        halt_baddata();
      }
      DAT_800bf939 = DAT_800bf939 | 0x80;
    }
    else if (bVar1 != 4) {
      *(undefined1 *)(param_1 + 5) = 0;
      halt_baddata();
    }
  }
  *(char *)(param_1 + 0x5e) = *(char *)(param_1 + 0x5e) + '\x01';
  *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

