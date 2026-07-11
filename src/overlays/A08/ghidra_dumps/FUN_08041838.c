// FUN_08041838

undefined4 FUN_08041838(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08041868 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5c6c))();
    return uVar1;
  }
  return 0;
}

