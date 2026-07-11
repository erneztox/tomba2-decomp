// FUN_80115388

void FUN_80115388(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          FUN_8011e3f4();
          return;
        }
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      FUN_8011e3f4();
      return;
    }
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    *(undefined1 *)(param_1 + 0x7b) = 1;
    func_0x80051b04(*(undefined4 *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0),0x1a,4);
    func_0x80077c40(param_1,0x801393c0,1);
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  FUN_8011e1d4(param_1);
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x800518fc(param_1);
  }
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_8011e3f4();
  return;
}

