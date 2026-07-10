// FUN_8005c138

undefined4 FUN_8005c138(undefined4 param_1,int param_2)

{
  byte bVar1;
  
  if (*(char *)(param_2 + 0xc) != '\x02') {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 2);
  if (bVar1 < 0x31) {
    if ((bVar1 < 0x2e) && (bVar1 != 0xf)) {
      if (bVar1 < 0x10) {
        if (bVar1 != 1) {
          if (bVar1 != 4) {
            return 0;
          }
          *(undefined1 *)(param_2 + 4) = 2;
          *(undefined1 *)(param_2 + 5) = 0;
          *(undefined1 *)(param_2 + 6) = 0;
          return 1;
        }
      }
      else if (bVar1 != 0x14) {
        if (bVar1 < 0x14) {
          return 0;
        }
        if (0x26 < bVar1) {
          return 0;
        }
        if (bVar1 < 0x23) {
          return 0;
        }
      }
    }
  }
  else if (bVar1 != 0x47) {
    if (bVar1 < 0x48) {
      if (bVar1 < 0x3b) {
        return 0;
      }
      if ((0x3c < bVar1) && (bVar1 != 0x3f)) {
        return 0;
      }
    }
    else if (bVar1 != 0x56) {
      if (bVar1 < 0x57) {
        if (bVar1 != 0x50) {
          return 0;
        }
      }
      else if (bVar1 != 0xcf) {
        return 0;
      }
    }
  }
  *(undefined1 *)(param_2 + 4) = 2;
  *(undefined1 *)(param_2 + 5) = 3;
  *(undefined1 *)(param_2 + 6) = 0;
  return 1;
}

