
void FUN_8006ae28(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[4] = 3;
        return;
      }
      if (bVar1 == 3) {
        FUN_8007ab44(param_1);
        return;
      }
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    uVar3 = 0x10;
    if (param_1[2] == '\x01') {
      uVar3 = 0x20;
    }
    param_1[0x5f] = uVar3;
    FUN_8006acac(param_1);
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x56);
    param_1[4] = param_1[4] + '\x01';
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *param_1 = 2;
    if (param_1[3] == '\0') {
      param_1[5] = 1;
      FUN_80069688(param_1);
    }
    else {
      FUN_80031558(param_1,(byte)param_1[2] - 1);
    }
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    FUN_8006a384(param_1);
    cVar2 = param_1[2];
joined_r0x8006af70:
    if (cVar2 == '\x01') goto LAB_8006af94;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        param_1[1] = 1;
        return;
      }
      FUN_8006a900(param_1);
      cVar2 = param_1[2];
      goto joined_r0x8006af70;
    }
    if (bVar1 != 2) {
      param_1[1] = 1;
      return;
    }
    FUN_8006a080(param_1);
  }
  FUN_800517f8(param_1);
LAB_8006af94:
  param_1[1] = 1;
  return;
}

