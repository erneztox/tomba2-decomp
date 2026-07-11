// FUN_80122388

void FUN_80122388(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[5] == '\0') {
      if (param_1[0x29] != '\0') {
        iVar2 = func_0x8007e038(0x4a,2);
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 != 0) {
          param_1[5] = param_1[5] + '\x01';
          FUN_8012b43c();
          return;
        }
      }
    }
    else {
      if (param_1[5] != '\x01') {
        FUN_8012b43c();
        return;
      }
      if (param_1[0x29] == '\0') {
        if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
          *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
        }
        param_1[5] = 0;
      }
    }
    func_0x8007778c(param_1);
    param_1[0x29] = 0;
    FUN_8012b454();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012b454();
      return;
    }
    *(undefined2 *)(param_1 + 0x80) = 200;
    *(undefined2 *)(param_1 + 0x82) = 400;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 1;
    param_1[0xb] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x84) = 500;
    *(undefined2 *)(param_1 + 0x86) = 500;
    param_1[4] = param_1[4] + '\x01';
    FUN_8012b454();
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_8012b454();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

