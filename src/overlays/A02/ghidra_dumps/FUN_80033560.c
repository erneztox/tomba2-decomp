// FUN_80033560

void FUN_80033560(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    *(byte *)(param_1 + 0x29) = *(char *)(param_1 + 0x29) - 1U & 0x1f;
    if (DAT_800e7ff9 == '\0') {
      *(undefined1 *)(param_1 + 4) = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 7) < '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\f';
    }
  }
  else if (bVar1 == 3) {
    FUN_8007a624();
  }
  return;
}

