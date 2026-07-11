// FUN_80108f30

void FUN_80108f30(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_80111d74(param_1);
      FUN_80111f84();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_80111f84();
        return;
      }
      if (*(char *)(param_1 + 0x5e) == '\0') {
        func_0x8004bef4(param_1);
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      FUN_80111f84();
      return;
    }
    if (bVar1 == 2) {
      func_0x8004b9c8(param_1);
      FUN_80111f84();
      return;
    }
    if (bVar1 != 3) {
      FUN_80111f84();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

