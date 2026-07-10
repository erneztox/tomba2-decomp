// FUN_0000bf30

undefined4 FUN_0000bf30(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 7) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0000bf60 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef6df8))();
    return uVar1;
  }
  return 0;
}

