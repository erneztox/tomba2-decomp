// FUN_08029788

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08029788(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x29) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00054198(&DAT_800e7e80);
      _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
      _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
      DAT_1f800137 = 2;
      func_0x00074590(0x1a,10,0);
      *(undefined2 *)(param_1 + 0x40) = 8;
      DAT_800bfa1d = DAT_800bfa1d | 4;
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_1f800137 = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

