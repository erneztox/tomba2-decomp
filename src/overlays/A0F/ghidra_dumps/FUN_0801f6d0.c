// FUN_0801f6d0

undefined4 FUN_0801f6d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 7) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0801f700 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef6d94))();
    return uVar1;
  }
  return 0;
}

