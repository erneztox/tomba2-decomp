
void FUN_8006bb6c(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[1] = 0;
        param_1[4] = param_1[4] + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(short *)(param_1 + 0x6e) == 0) {
        DAT_1f800231 = DAT_1f800231 + -1;
      }
      FUN_8007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1[0x5f] = 0x40;
    FUN_8006acac(param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    param_1[4] = param_1[4] + '\x01';
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x56);
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x66) = 1;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x54) = 0x400;
    param_1[0x2b] = 0;
    if (param_1[3] == '\0') {
      param_1[5] = 1;
      FUN_80069688(param_1);
    }
    else {
      FUN_80031558(param_1,(byte)param_1[2] - 1);
    }
  }
  param_1[1] = 1;
  if (param_1[5] == '\0') {
    FUN_8006b9dc(param_1);
  }
  else if (param_1[5] == '\x01') {
    FUN_8006b494(param_1);
    if (*(short *)(param_1 + 0x66) == 0) {
      if (param_1[2] == '\x06') {
        FUN_80051844(param_1);
      }
      else {
        FUN_800517f8(param_1);
      }
    }
    FUN_8006afc4(param_1);
  }
  return;
}

