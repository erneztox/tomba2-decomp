// FUN_0802cc34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802cc34(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    if (DAT_800e806e == '\x03') {
      *(undefined1 *)(param_1 + 7) = 2;
      func_0x00040cdc(param_1,0,0x801478c0);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      _DAT_800e7eae = 0x45e6;
      _DAT_800e7eb2 = 0xf8b4;
      _DAT_800e7eb6 = 0x2466;
      DAT_800bf841 = 0;
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x21;
      DAT_800e7e86 = 0;
      func_0x00054d14(&DAT_800e7e80,2,0);
      DAT_800e806c = 1;
      _DAT_800e8074 = _DAT_801003f8 * 5;
      _DAT_800e8076 = 0;
      _DAT_800e8078 = 0xff00;
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

