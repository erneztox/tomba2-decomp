// FUN_08041fcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08041fcc(int param_1)

{
  undefined4 uVar1;
  
  func_0x0007addc();
  func_0x000519e0(param_1,0xd,_DAT_800ecf94,0x80142028);
  uVar1 = _DAT_800ecfd8;
  *(undefined4 *)(param_1 + 0x7c) = 0x8014d798;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x00077c40(param_1,0x8014d798,0);
  return 1;
}

