// FUN_080124b4

void FUN_080124b4(int param_1)

{
  DAT_1f80027e = 1;
  func_0x0006f0e4();
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00055d5c(param_1);
  *(undefined2 *)(param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  func_0x00054198(param_1);
  func_0x00055284(param_1);
  func_0x00054d14(param_1,2,0);
  func_0x0003315c(param_1);
  if ((DAT_800bfa1a & 0x10) == 0) {
    func_0x00042354(1,5);
    func_0x0001cf2c();
    *(undefined1 *)(param_1 + 4) = 4;
  }
  return;
}

