// FUN_00005594

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005594(int param_1)

{
  *(undefined2 *)(param_1 + 0x56) = 0x1bc;
  _DAT_800e7ed6 = 0x309;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
  func_0x00041718(param_1,3,0);
  func_0x00040d68(param_1,0x8011605c);
  *(undefined1 *)(param_1 + 0x70) = 2;
  return;
}

