// FUN_08028524

undefined4 FUN_08028524(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08028568 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6388))();
    return uVar1;
  }
  return 0;
}

