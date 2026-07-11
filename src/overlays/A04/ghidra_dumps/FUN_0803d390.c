// FUN_0803d390

undefined4 FUN_0803d390(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803d3c4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5d30))();
    return uVar1;
  }
  return 0;
}

