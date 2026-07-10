// FUN_8008831c

void FUN_8008831c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    FUN_80088aa8(param_1,*(undefined1 *)(param_1 + 0x47));
  }
  else if (bVar1 < 4) {
    if (bVar1 == 2) {
      FUN_80088a88(param_1,*(undefined1 *)(param_1 + 0x47));
    }
  }
  else if (bVar1 == 4) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FUN_80088ac8(param_1,*(undefined1 *)(param_1 + 0x47));
    }
    else {
      FUN_80088ae8();
    }
  }
  return;
}

