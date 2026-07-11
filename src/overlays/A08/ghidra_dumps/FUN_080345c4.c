// FUN_080345c4

void FUN_080345c4(int param_1)

{
  int iVar1;
  
  func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x700,0x18);
  func_0x00074590(0xc,0,0);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 100;
  func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x800,0xffff8018);
  func_0x00074590(0xc,0,0);
  iVar1 = func_0x001238d0(param_1,5);
  if (iVar1 != 0) {
    DAT_800bfa38 = DAT_800bfa38 + '\x01';
  }
  return;
}

