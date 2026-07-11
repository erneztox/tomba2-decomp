// FUN_08028ab4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08028ab4(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x00040cdc(param_1,0x80140f7c,0x8013eac0);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf80f != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00042354(1,1);
      if (DAT_800bf9ca < 9) {
        DAT_800bf9ca = DAT_800bf9ca + 1;
      }
      DAT_800bf9c3 = 0;
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return;
    }
    if (DAT_800bfb02 == '\0') {
      *(undefined1 *)(param_1 + 5) = 6;
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x00042310();
    }
    else {
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if (bVar1 == 3) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(undefined1 *)(param_1 + 5) = 6;
      *(undefined1 *)(param_1 + 6) = 1;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

