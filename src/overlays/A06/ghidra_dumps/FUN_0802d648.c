// FUN_0802d648

void FUN_0802d648(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0005308c();
  if (iVar1 != 0) {
    if (DAT_800e7fe4 == '\0') {
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x21;
      DAT_800e7e86 = 0;
      func_0x00054d14(&DAT_800e7e80,2,6);
    }
    func_0x00042354(1,1);
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  return;
}

