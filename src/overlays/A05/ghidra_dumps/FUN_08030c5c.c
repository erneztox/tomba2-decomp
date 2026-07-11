// FUN_08030c5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08030c5c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(short *)(*(int *)(param_1 + 0xc0) + 2) = *(short *)(*(int *)(param_1 + 0xc0) + 2) + 10;
    _DAT_800e7eb2 = _DAT_800e7eb2 + 10;
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 != -1) {
      halt_baddata();
    }
LAB_08030e24:
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (((((DAT_800e7eaa == '\x01') &&
          (sVar2 = *(short *)(param_1 + 0x36), _DAT_800e7eb6 < *(short *)(param_1 + 0x36))) &&
         (_DAT_800e7eb6 = sVar2, DAT_800bf873 == '\0')) &&
        ((DAT_800e7ea9 != '\0' && (DAT_800e7ffb == '\0')))) &&
       ((DAT_800bf80d == '\0' && (DAT_800bf839 == '\0')))) {
      DAT_1f800137 = 2;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x0006cba8(0x800e7eac);
      _DAT_800e8074 = 0x6d6;
      DAT_800e806c = 1;
      _DAT_800e8076 = 0x40;
      _DAT_800e8078 = 0xc00;
      *(undefined2 *)(param_1 + 0x40) = 0xf;
      func_0x00054d14(&DAT_800e7e80,2,6);
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x21;
      DAT_800e7e86 = 0;
      _DAT_800e7ed6 = 0xc00;
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      DAT_1f800236 = 4;
      DAT_800bf839 = '\x01';
      _DAT_800bf83a = 0x406;
      DAT_800bf80f = 2;
      goto LAB_08030e24;
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 2) = *(short *)(*(int *)(param_1 + 0xc0) + 2) + 10;
    _DAT_800e7eb2 = _DAT_800e7eb2 + 10;
  }
  if ((*(char *)(param_1 + 6) != '\0') && ((uint)_DAT_1f80017c % 10 == 0)) {
    func_0x00074590(0x36,0xfffffff7,0xffffffc4);
  }
  return;
}

