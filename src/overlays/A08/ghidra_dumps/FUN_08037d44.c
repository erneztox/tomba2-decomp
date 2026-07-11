// FUN_08037d44

undefined4 FUN_08037d44(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08037d88 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5ef8))();
    return uVar1;
  }
  return 0;
}

