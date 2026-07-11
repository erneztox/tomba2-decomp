// A09_SequenceCheck - Sequence completion check: DAT_800bf80f flag

/* WARNING: Control flow encountered bad instruction data */

undefined4 A09_SequenceCheck(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (DAT_800bf80f == '\0') {
          *(undefined1 *)(param_1 + 6) = 1;
          *(undefined1 *)(param_1 + 7) = 0;
          DAT_1f800137 = 2;
          halt_baddata();
        }
        return 0;
      }
    }
    else {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 6) = 3;
        func_0x00042354(1,4);
        func_0x00040cdc(param_1,0,0x8010e28c);
        *(undefined1 *)(param_1 + 0x70) = 1;
        halt_baddata();
      }
      if (bVar1 == 3) {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) != -1) {
          return 0;
        }
        DAT_800bf873 = 1;
        func_0x00042310();
        *(undefined1 *)(param_1 + 6) = 0;
        DAT_800bf9db = DAT_800bf9db | 0x1e;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 7) == '\0') {
    DAT_800bf80e = '\0';
    DAT_800e7e84 = 4;
    DAT_800e7e85 = 0x3b;
    DAT_800e7e86 = 0;
    DAT_800e7e87 = 0;
    func_0x00054198(&DAT_800e7e80);
    func_0x00054d14(&DAT_800e7e80,2,5);
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 7) != '\x01') {
      halt_baddata();
    }
    if (DAT_800bf80e == '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 2;
    *(undefined1 *)(param_1 + 7) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

