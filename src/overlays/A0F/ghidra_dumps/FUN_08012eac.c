// FUN_08012eac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012eac(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 1) {
    if (DAT_1f800246 != '\0') {
      *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x80;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_080130b8:
    if (_DAT_1f8000d6 < -0x3366) {
      *(undefined1 *)(param_1 + 0x74) = 2;
      _DAT_1f8000d6 = 0xcc9a;
      *(undefined2 *)(param_1 + 0x4a) = 0xcc9a;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x26) = 0xfc18;
    DAT_800bf821 = 2;
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf92a;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x68);
      *(short *)(param_1 + 0x68) = sVar2 + -1;
      if (sVar2 == 1) {
        if (DAT_800bf841 != '\0') {
          DAT_800bf809 = 0;
          DAT_800bf841 = '\0';
        }
        *(undefined1 *)(param_1 + 3) = 1;
      }
      goto LAB_080130b8;
    }
    if (DAT_1f800246 != '\0') {
      if (DAT_1f800246 == '\x01') {
        func_0x0010bc78(param_1,_DAT_1f800248,0);
        func_0x0006e3f4(param_1,_DAT_1f80024c + 0x2c);
      }
      else {
        if (DAT_1f800246 == '\x02') {
          func_0x0006e3f4(param_1,_DAT_1f80024c + 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x0006e3f4(param_1,_DAT_1f800248 + 0x2c);
        local_1e = *(undefined2 *)(_DAT_1f800248 + 0x2e);
        local_16 = 0xaf0;
        local_1a = *(short *)(_DAT_1f800248 + 0x7c) + -100;
        func_0x0006cec4(&DAT_1f8000d0,auStack_20,0);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    DAT_800bf821 = bVar1;
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf736;
    func_0x0006ea00();
    *(undefined2 *)(param_1 + 0x68) = 0xc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

