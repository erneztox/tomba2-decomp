// FUN_8011c11c

void FUN_8011c11c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x42) + -1;
    *(short *)(param_1 + 0x42) = sVar2;
    if (sVar2 == -1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x24;
      DAT_800e7e86 = 0;
      DAT_1f800137 = 0;
      DAT_800bf81f = *(char *)(param_1 + 0x5f) << 4;
      FUN_80125204();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_80125204();
      return;
    }
    if ((DAT_800e7eaa == *(char *)(param_1 + 0x2a)) &&
       ((DAT_800e7e85 == '\0' || (*(char *)(param_1 + 0x29) != '\0')))) {
      *(undefined2 *)(param_1 + 0x42) = 8;
      *(undefined1 *)(param_1 + 5) = 1;
      DAT_1f800137 = 2;
      func_0x80054198(&DAT_800e7e80);
      DAT_800e7e85 = 0;
      DAT_800e7e86 = 0;
      DAT_800e7e87 = 0;
      func_0x8004ed94(0x2b,0x41);
      func_0x80074590(0x19,0,0);
      FUN_80125204();
      return;
    }
  }
  else {
    if (bVar1 != 2) {
      FUN_80125204();
      return;
    }
    if (DAT_800e7eaa != *(char *)(param_1 + 0x2a)) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  return;
}

