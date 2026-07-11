// FUN_08034c5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08034c5c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (0x15 < DAT_800bfa22) {
      *(undefined1 *)(param_1 + 6) = 2;
    }
    _DAT_1f8000c4 = 0;
    _DAT_1f8000c2 = 0;
    _DAT_1f8000c0 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (0x14 < DAT_800bfa22) {
        *(undefined1 *)(param_1 + 6) = 1;
        DAT_800e806c = 8;
        func_0x0006cba8(param_1 + 0x2c);
      }
      func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x32;
    }
  }
  else {
    if (bVar1 == 2) {
      if (0x16 < DAT_800bfa22) {
        *(undefined1 *)(param_1 + 6) = 3;
        *(undefined2 *)(param_1 + 0x40) = 0xf;
      }
      _DAT_1f8000c0 = 0;
      _DAT_1f8000c2 = 0;
      _DAT_1f8000c4 = 0xffce;
      halt_baddata();
    }
    if (bVar1 == 3) {
      sVar2 = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x40) = sVar2;
      if (sVar2 == -1) {
        *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
      if (*(char *)(param_1 + 6) != '\0') {
        func_0x0006cba8(param_1 + 0x2c);
      }
      return 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

