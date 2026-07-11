// FUN_0801a784

undefined4 FUN_0801a784(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0801a7b8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6b94))();
    return uVar1;
  }
  return 0;
}

