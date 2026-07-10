// FUN_8006b1fc

void FUN_8006b1fc(int param_1)

{
  short sVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 7);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          return;
        }
        *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - *(short *)(param_1 + 0x76);
        *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -0x80;
        if ((*(char *)(param_1 + 0x2b) == '\x01') &&
           (sVar1 = *(short *)(param_1 + 0x42), *(short *)(param_1 + 0x42) = sVar1 + -1, sVar1 == 1)
           ) {
          *(undefined1 *)(param_1 + 0x2b) = 0;
          *(undefined2 *)(param_1 + 0x42) = 2;
        }
        if ((-1 < *(short *)(param_1 + 0x44)) && (*(byte *)(param_1 + 0x2b) < 2)) {
          return;
        }
        *(undefined1 *)(param_1 + 0x2b) = 2;
        *(undefined2 *)(param_1 + 0x44) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        bVar2 = *(byte *)(param_1 + 0x46) >> 1 & 3;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        if (bVar2 == 2) {
          *(undefined2 *)(param_1 + 0x6a) = 0x980;
          return;
        }
        if (2 < bVar2) {
          if (bVar2 != 3) {
            return;
          }
          *(undefined2 *)(param_1 + 0x6a) = 0x700;
          return;
        }
        *(undefined2 *)(param_1 + 0x6a) = 0xc00;
        return;
      }
      if (*(byte *)(param_1 + 0x2b) == 1) {
        *(undefined2 *)(param_1 + 0x42) = 2;
        *(undefined1 *)(param_1 + 0x2b) = 0;
      }
      else if (1 < *(byte *)(param_1 + 0x2b)) {
        *(undefined2 *)(param_1 + 0x44) = 0;
      }
      goto LAB_8006b264;
    }
    if (bVar2 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (1 < *(byte *)(param_1 + 0x2b)) {
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 7) = 3;
    return;
  }
LAB_8006b264:
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  return;
}

