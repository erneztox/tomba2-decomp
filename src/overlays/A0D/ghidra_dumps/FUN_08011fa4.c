// FUN_08011fa4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011fa4(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 1) {
    if (DAT_1f800246 != '\0') {
      *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x80;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_0801212c:
    if (-0x7d1 < _DAT_1f8000d6) {
      *(undefined1 *)(param_1 + 0x74) = 2;
      _DAT_1f8000d6 = -2000;
      *(undefined2 *)(param_1 + 0x4a) = 0xf830;
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x77) = 1;
    DAT_800bf821 = 2;
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf60a;
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
      goto LAB_0801212c;
    }
    if (DAT_1f800246 != '\0') {
      if (DAT_1f800246 == '\x01') {
        func_0x0010ad1c(param_1,&DAT_800e7e80,0);
      }
      func_0x0006e3f4(param_1,param_1 + 0x38);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    DAT_800bf821 = bVar1;
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf60a;
    func_0x0006ea00();
    *(undefined2 *)(param_1 + 0x68) = 0xc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

