// FUN_08019d6c

undefined4 FUN_08019d6c(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08019da0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6c30))();
    return uVar1;
  }
  return 0;
}

