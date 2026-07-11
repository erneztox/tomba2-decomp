// FUN_0802cd78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802cd78(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (DAT_800e806e != '\x03') {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 2;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa1c < 4) {
        return;
      }
      *(undefined1 *)(param_1 + 0x1a) = 0x80;
      *(undefined1 *)(param_1 + 0x19) = 0x80;
      *(undefined1 *)(param_1 + 0x18) = 0x80;
      *(undefined1 *)(param_1 + 6) = 1;
      _DAT_800e8076 = 0x80;
      DAT_800e806c = 1;
      _DAT_800e8078 = 0xfe00;
      _DAT_800e8074 = _DAT_801003f8 << 2;
      _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
      _DAT_800e8046 =
           *(short *)(param_1 + 0x32) -
           ((short)((ulonglong)((longlong)(int)*(short *)(param_1 + 0x84) * 0x55555556) >> 0x20) -
           (*(short *)(param_1 + 0x84) >> 0xf));
      _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
    }
  }
  else if (bVar1 == 2) {
    iVar2 = func_0x00125bd0(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

