// FUN_0803368c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803368c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    _DAT_800e7eb2 = _DAT_800e7eb2 + 10;
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 != -1) {
      halt_baddata();
    }
LAB_08033818:
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if ((DAT_800e7eaa == '\n') && (0x4dc0 < _DAT_800e7eb6)) {
      _DAT_800e7eae = 0x2b7a;
      _DAT_800e7eb6 = 0x4dc0;
      if ((DAT_800e7ea9 != '\0') &&
         (((DAT_800e7ffb == '\0' && (DAT_800bf80d == '\0')) && (DAT_800bf839 == '\0')))) {
        DAT_1f800137 = 2;
        *(undefined2 *)(param_1 + 0x40) = 0xf;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        func_0x00054d14(&DAT_800e7e80,2,6);
        DAT_800e7e80 = 2;
        DAT_800e7e84 = 4;
        DAT_800e7e85 = 0x21;
        DAT_800e7e86 = 0;
        _DAT_800e7ed6 = 0x281;
        halt_baddata();
      }
    }
  }
  else {
    if (bVar1 == 2) {
      DAT_1f800236 = 4;
      DAT_800bf839 = '\x01';
      _DAT_800bf83a = 0x600;
      DAT_800bf80f = 2;
      goto LAB_08033818;
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    _DAT_800e7eb2 = _DAT_800e7eb2 + 10;
  }
  if ((*(char *)(param_1 + 6) != '\0') && ((uint)_DAT_1f80017c % 10 == 0)) {
    func_0x00074590(0x27,0xfffffff0,0xffffffd8);
  }
  return;
}

