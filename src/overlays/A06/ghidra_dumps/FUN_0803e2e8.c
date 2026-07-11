// FUN_0803e2e8

undefined4 FUN_0803e2e8(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803e330 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5dd4))();
    return uVar1;
  }
  return 0;
}

