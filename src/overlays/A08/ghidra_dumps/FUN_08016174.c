// FUN_08016174

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016174(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
  if (iVar1 != 0) {
    _DAT_1f80019e = _DAT_1f8001a4;
  }
  if (DAT_1f800137 == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if (*(char *)(param_1 + 5) == '*') {
    *(undefined1 *)(param_1 + 0x181) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(char *)(param_1 + 0x78) == '\0') || (*(char *)(param_1 + 5) != '\x03')) {
    if (*(char *)(param_1 + 0x144) == '\x01') {
      *(undefined1 *)(param_1 + 0x144) = 0;
    }
    if (*(char *)(param_1 + 5) != '\x06') {
      *(undefined1 *)(param_1 + 5) = 0x1d;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      if ((*(char *)(param_1 + 0x146) != '\0') || (*(char *)(param_1 + 0x145) == '\0')) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
      *(undefined1 *)(param_1 + 0x145) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0x32;
    *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x149) & 1 | 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x29) = 1;
    *(undefined1 *)(param_1 + 0x181) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

