// FUN_0802ca84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802ca84(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 6) = 3;
      DAT_800e806c = 0;
      if ((DAT_800bf9c9 != -1) &&
         ((DAT_800bf841 = 0, (DAT_800bf9c3 & 0x80) != 0 || (DAT_800bf9c3 == 0)))) {
        DAT_1f800137 = 0;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00077c40(param_1,0x80142108,0);
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x14;
  }
  sVar2 = *(short *)(param_1 + 0x40) + -1;
  *(short *)(param_1 + 0x40) = sVar2;
  if (sVar2 == 0) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    _DAT_800bf85c = _DAT_800bf85c + 1;
    if (DAT_800bf9c9 == '?') {
      DAT_800bf9c9 = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (sVar2 == 0x10) {
    func_0x00074590(0x10,3,0);
  }
  _DAT_800e8078 = 0;
  _DAT_800e8076 = 0x80;
  _DAT_800e8074 = -_DAT_1f8000ee;
  _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
  _DAT_800e8046 = *(undefined2 *)(param_1 + 0x32);
  _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

