// FUN_0803c8c8

void FUN_0803c8c8(int param_1)

{
  int iVar1;
  
  func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x700,0x18);
  func_0x00074590(0xc,0,0);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 100;
  func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x800,0xffff8018);
  func_0x00074590(0xc,0,0);
  iVar1 = func_0x0013aa98(param_1);
  if (iVar1 != 0) {
    DAT_800bf9c8 = DAT_800bf9c8 + '\x01';
  }
  return;
}

