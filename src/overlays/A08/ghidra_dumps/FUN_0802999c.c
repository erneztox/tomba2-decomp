// FUN_0802999c

void FUN_0802999c(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077ebc();
  if ((DAT_800bfa3f & 0x20) != 0) {
    func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x800,8);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

