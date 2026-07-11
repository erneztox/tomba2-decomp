// FUN_08038e3c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08038e3c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x40) != 0) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -4;
    }
    *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + 0x40;
    *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + 0x40;
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x40;
    if (*(ushort *)(param_1 + 0xb8) < 0x1000) {
      if (*(char *)(param_1 + 0xbe) == '\0') {
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) -
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) -
           (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
      func_0x0006cba8(param_1 + 0x2c);
    }
    else {
      *(undefined2 *)(param_1 + 0x40) = 0x28;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      _DAT_800bf854 = 0xff;
      _DAT_800bf860 = param_1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x40) = 0x10;
      *(undefined2 *)(param_1 + 0x44) = 0xc00;
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined2 *)(param_1 + 0xb8) = 0x100;
      *(undefined2 *)(param_1 + 0xba) = 0x100;
      *(undefined2 *)(param_1 + 0xbc) = 0x100;
      DAT_800e806c = 1;
      _DAT_800e8076 = 0x100;
      _DAT_800e8078 = 0x100;
      func_0x00074590(0x8f,0,0);
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00040b48(0x1d);
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
  }
  else if (bVar1 == 3) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_1f800137 = 0;
      DAT_800bf841 = 0;
      func_0x0006ea00();
      DAT_800e806c = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

