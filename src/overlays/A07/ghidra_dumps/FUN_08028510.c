// FUN_08028510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08028510(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08028548 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef66e0))();
    return uVar1;
  }
  return 0;
}

