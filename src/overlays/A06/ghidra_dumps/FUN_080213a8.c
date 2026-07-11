// FUN_080213a8

void FUN_080213a8(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007778c();
  if (iVar1 != 0) {
    func_0x000517f8(param_1);
  }
  if (DAT_800bf9d3 == '\x06') {
    DAT_800bf9d3 = '\a';
    func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x700,0x24);
    func_0x00074590(0xc,0,0);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

