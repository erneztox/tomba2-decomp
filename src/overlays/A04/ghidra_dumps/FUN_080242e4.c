// FUN_080242e4

void FUN_080242e4(int param_1)

{
  int iVar1;
  
  func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0xa00,0x24);
  func_0x00074590(0xc,0,0);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x96;
  func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0xa00,0x2c);
  func_0x00074590(0xc,0,0);
  iVar1 = func_0x00040b48(0x7f);
  if (-1 < iVar1) {
    DAT_800bf9cc = DAT_800bf9cc | 0x40;
    DAT_800bfa31 = DAT_800bfa31 + 1;
    if (9 < DAT_800bfa31) {
      func_0x0004ed94(0x6e,0x41);
    }
  }
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

