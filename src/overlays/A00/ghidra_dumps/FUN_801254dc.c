// FUN_801254dc

void FUN_801254dc(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x8007778c(param_1);
    FUN_8012e70c(param_1);
    FUN_8012e52c();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012e52c();
      return;
    }
    if (*(byte *)(param_1 + 0x5e) == 0) {
      FUN_8012e2bc(param_1);
      FUN_8012e52c();
      return;
    }
    if (*(byte *)(param_1 + 0x5e) < 3) {
      FUN_8012e678(param_1);
      FUN_8012e52c();
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_8012e52c();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

