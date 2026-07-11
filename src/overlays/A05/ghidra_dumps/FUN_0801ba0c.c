// FUN_0801ba0c

undefined4 FUN_0801ba0c(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801ba3c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef67c0))();
    return uVar1;
  }
  return 0;
}

