// FUN_8004e808

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004e808(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 5) == '\0') {
      if (DAT_800e7ec6 == 'r') {
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
    else if (*(char *)(param_1 + 5) == '\x01') {
      FUN_8004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
      if ((DAT_800e7ff4 & 4) == 0) {
        sVar2 = *(short *)(param_1 + 0x32) + -100;
      }
      else {
        sVar2 = *(short *)(param_1 + 0x32) + -0x46;
      }
      *(short *)(param_1 + 0x32) = sVar2;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xb) = 0x10;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007a624(param_1);
  }
  return;
}

