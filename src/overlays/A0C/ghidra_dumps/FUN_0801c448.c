// FUN_0801c448

undefined4 FUN_0801c448(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 7) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0801c478 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef6de0))();
    return uVar1;
  }
  return 0;
}

