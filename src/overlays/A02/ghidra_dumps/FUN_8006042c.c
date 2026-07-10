// FUN_8006042c

undefined4 FUN_8006042c(int param_1)

{
  byte bVar1;
  
  if (1 < DAT_1f800253) {
    return 2;
  }
  if (DAT_1f800237 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x167);
    if (bVar1 == 1) {
LAB_800604bc:
      if (*(byte *)(param_1 + 0x5f) == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x5f) & 1) != 0) {
        return 1;
      }
      return 0;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return 0;
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        return 0;
      }
      goto LAB_800604bc;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x167);
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          return 0;
        }
      }
      else if (bVar1 != 2) {
        if (bVar1 != 3) {
          return 0;
        }
        goto LAB_8006049c;
      }
      if (*(byte *)(param_1 + 0x5f) == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
LAB_8006049c:
  if (*(byte *)(param_1 + 0x5f) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
    return 1;
  }
  return 0;
}

