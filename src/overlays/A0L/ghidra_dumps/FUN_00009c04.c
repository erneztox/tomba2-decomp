// FUN_00009c04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009c04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((uint)*(byte *)(_DAT_1f800138 + 0x69) * 0xc + -0x7fee5950);
  func_0x0009c620(0);
  func_0x0009c8bc(param_2);
  func_0x00089870(iVar1 + 0x28000,0x20);
  func_0x0008ceb0(0,1,0xffffffff,0,0);
  func_0x00112d98(param_1);
  return;
}

