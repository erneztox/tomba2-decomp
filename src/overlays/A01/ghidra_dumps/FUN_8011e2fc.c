// FUN_8011e2fc

void FUN_8011e2fc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    FUN_8012702c(param_1);
    FUN_8012739c();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012739c();
      return;
    }
    iVar2 = func_0x80051b70(param_1,0xc,3);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x40;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
    *(undefined1 *)(param_1 + 0x47) = 0;
    iVar2 = func_0x80072ddc(param_1,1,4,0x15);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x80127af8;
      *(int *)(param_1 + 0x3c) = iVar2;
    }
    FUN_80126608(param_1);
    func_0x800517f8(param_1);
    FUN_8012739c();
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_8012739c();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

