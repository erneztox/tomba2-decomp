// FUN_80131e20

void FUN_80131e20(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar2 = func_0x8007778c(param_1);
    if (iVar2 != 0) {
      FUN_8013ac98(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    FUN_8013aeb0();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8013aeb0();
      return;
    }
    *(undefined2 *)(param_1 + 0x80) = 0x50;
    *(undefined2 *)(param_1 + 0x82) = 0xa0;
    *(undefined2 *)(param_1 + 0x84) = 200;
    *(undefined2 *)(param_1 + 0x86) = 400;
    param_1[4] = 1;
    *param_1 = 1;
    param_1[0xb] = 0;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    param_1[0x5e] = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    FUN_8013aeb0();
    return;
  }
  if (bVar1 == 2) {
    if (param_1[5] == '\0') {
      param_1[4] = 1;
      *param_1 = 1;
      param_1[0x29] = 1;
      param_1[5] = param_1[0x5e];
    }
    FUN_8013ac98(param_1);
    FUN_8013aeb0();
    return;
  }
  if (bVar1 != 3) {
    FUN_8013aeb0();
    return;
  }
  func_0x8007a624(param_1);
  return;
}

