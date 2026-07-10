// FUN_00003108

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003108(int param_1)

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
joined_r0x000031dc:
    if (6 < DAT_800e7eaa - 0xe) {
      DAT_800bf821 = 2;
      _DAT_1f8000ee = 0xf862;
      *(undefined2 *)(param_1 + 0x26) = 0xfce0;
      return;
    }
    DAT_800bf821 = 0;
    _DAT_1f8000ee = 0xfaec;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_800bf821 = 2;
      *(undefined2 *)(param_1 + 0x56) = 0;
      _DAT_1f8000ee = 0xf862;
      *(undefined2 *)(param_1 + 0x26) = 0xfce0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    if (DAT_1f800246 == '\0') {
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      if (DAT_800e7eaa - 0xe < 7) {
        DAT_800bf821 = 0;
        _DAT_1f8000ee = 0xfaec;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      _DAT_1f8000ee = 0xf862;
      DAT_800bf821 = bVar1;
      *(undefined2 *)(param_1 + 0x26) = 0xfce0;
      *(undefined2 *)(param_1 + 0x26) = 0xfce0;
      func_0x0006ea00();
      *(undefined2 *)(param_1 + 0x68) = 0xc;
    }
    else {
      if (DAT_1f800246 == '\x01') {
        func_0x0010be80(param_1,&DAT_800e7e80,0);
      }
      func_0x0006e3f4(param_1,param_1 + 0x38);
    }
  }
  else if (bVar1 == 3) {
    sVar2 = *(short *)(param_1 + 0x68);
    *(short *)(param_1 + 0x68) = sVar2 + -1;
    if (sVar2 == 1) {
      if (DAT_800bf841 != '\0') {
        DAT_800bf809 = 0;
        DAT_800bf841 = '\0';
      }
      *(undefined1 *)(param_1 + 3) = 1;
    }
    goto joined_r0x000031dc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

