// FUN_08027740

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08027740(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined2 *)(param_1 + 0x40) = 0x28;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (DAT_800bf871 != '\x06') {
        return 1;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined2 *)(param_1 + 0x40) = 8;
      *(short *)(*(int *)(param_1 + 0xc0) + 2) = *(short *)(*(int *)(param_1 + 0xc0) + 2) + -400;
      _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
      _DAT_800e7eb2 =
           (*(short *)(param_1 + 0x32) + *(short *)(*(int *)(param_1 + 0xc0) + 2)) - _DAT_800e7f04;
      _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
      func_0x0006cba8(&DAT_800e7eac);
      _DAT_800e8074 = 0x6d6;
      _DAT_800e8076 = 0x40;
      DAT_800e806c = 1;
      _DAT_800e8078 = 0x400;
      func_0x0006e294(0x800e8008,&DAT_800e8040);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_800e7e85 = 0x24;
      DAT_800e7e84 = 4;
      DAT_800e7e86 = 4;
      DAT_800e7e87 = 0;
      DAT_1f800137 = 0;
      *(undefined1 *)(param_1 + 0x29) = 0;
      DAT_800bf871 = 5;
      func_0x00074590(0x10,0xe,0xffffffec);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 2) = *(short *)(*(int *)(param_1 + 0xc0) + 2) + 10;
    _DAT_800e7eb2 = _DAT_800e7eb2 + 10;
    func_0x0006cba8(&DAT_800e7eac);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      _DAT_800e8012 = _DAT_800e7eae;
      _DAT_800e8016 = _DAT_800e7eb2;
      _DAT_800e801a = _DAT_800e7eb6;
      DAT_800e806c = 0;
      halt_baddata();
    }
  }
  if (*(char *)(param_1 + 6) != '\0') {
    if ((uint)_DAT_1f80017c % 10 != 0) {
      return 0;
    }
    func_0x00074590(0x36,0xfffffff7,0xffffffc4);
  }
  return 0;
}

