// FUN_0804078c

undefined4 FUN_0804078c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(byte *)(param_1 + 0x78) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080407bc */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5cdc))();
    return uVar1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x40);
  func_0x0007e9c8(uVar2 << 0x10 | uVar2 << 8 | uVar2,1,4);
  return 0;
}

