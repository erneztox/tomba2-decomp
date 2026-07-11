// FUN_08041100

undefined4 FUN_08041100(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 7) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08041130 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef5c94))();
    return uVar1;
  }
  return 0;
}

