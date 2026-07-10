// FUN_000042a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000042a0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf871 == 4) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        DAT_800bf80f = 2;
        DAT_800bf839 = 3;
        _DAT_800bf83a = 0x1505;
        *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (DAT_800bf871 < 5) {
        if (DAT_800bf871 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((*(char *)(param_1 + 5) == '\0') &&
           (func_0x00041098(param_1), *(char *)(param_1 + 0x70) == -1)) {
          DAT_800bf839 = 3;
          _DAT_800bf83a = 0x1503;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        }
        func_0x0010d0c0(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf871 != 5) {
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
    }
    _DAT_800bf854 = _DAT_800bf854 + 1;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      DAT_800bf9eb = 0;
      DAT_800bfa56 = 0;
      DAT_800bfa57 = 0;
      _DAT_800bf854 = 0;
      if (DAT_800bf871 == 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf871 < 5) {
        if (DAT_800bf871 == 2) {
          _DAT_800bf854 = 0;
          DAT_800bf9eb = 0;
          DAT_800bfa56 = 0;
          DAT_800bfa57 = 0;
          halt_baddata();
        }
      }
      else if (DAT_800bf871 == 5) {
        func_0x00040cdc(param_1,0,0x80115a14);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

