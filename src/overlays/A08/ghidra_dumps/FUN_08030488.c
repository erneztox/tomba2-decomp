// FUN_08030488

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08030488(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
    if ((DAT_800bfa30 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x2e) = 0x40c9;
      *(undefined2 *)(param_1 + 0x32) = 0xf148;
      *(undefined2 *)(param_1 + 0x36) = 0x10ed;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  func_0x000517f8(param_1);
  func_0x0007778c(param_1);
  return;
}

