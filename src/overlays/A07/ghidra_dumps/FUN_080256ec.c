// FUN_080256ec

undefined4 FUN_080256ec(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0802571c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef683c))();
    return uVar1;
  }
  return 0;
}

