// FUN_0801433c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801433c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
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
        if (DAT_1f800246 == '\0') {
          if (_DAT_1f8000d6 < -0x1370) {
            *(undefined1 *)(param_1 + 0x74) = 2;
            _DAT_1f8000d6 = 0xec90;
            *(undefined2 *)(param_1 + 0x4a) = 0xec90;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x74) = 0;
        }
        return;
      }
      if (DAT_1f800246 == '\0') {
        *(undefined2 *)(param_1 + 0x68) = 0xc;
        *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
        halt_baddata();
      }
      if (DAT_1f800246 == '\x01') {
        func_0x0010d108(param_1,_DAT_1f800248,0);
        func_0x0006e3f4(param_1,_DAT_1f80024c + 0x2c);
        halt_baddata();
      }
      if (DAT_1f800246 != '\x02') {
        func_0x0006e3f4(param_1,_DAT_1f800248 + 0x2c);
        local_1e = 0x15c8;
        local_16 = 0x1701;
        local_1a = *(short *)(_DAT_1f800248 + 0x7c) + -100;
        func_0x0006cec4(&DAT_1f8000d0,auStack_20,0);
        halt_baddata();
      }
      func_0x0006e3f4(param_1,_DAT_1f80024c + 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x26) = 200;
    DAT_800bf821 = 2;
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf736;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  _DAT_1f8000d2 = 0x1600;
  _DAT_1f8000da = 0x12c0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x80;
  if (DAT_1f800246 != '\0') {
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  iVar3 = func_0x0006d960(param_1,0x800e7eac);
  if (iVar3 != 0) {
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  }
  func_0x0006d654(param_1);
  func_0x0006da54(param_1,param_1 + 8);
  func_0x0006c80c(param_1);
  if ((*(char *)(param_1 + 0x76) == '\0') && (DAT_800e7ffa == '\0')) {
    func_0x0006dcf4(param_1);
  }
  func_0x0006d02c(param_1);
  if (*(char *)(param_1 + 0x77) == '\0') {
    func_0x0006e010(param_1);
  }
  _DAT_1f800114 = _DAT_1f800114 - (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

