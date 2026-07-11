// FUN_08038700

undefined4 FUN_08038700(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08038734 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5e88))();
    return uVar1;
  }
  return 0;
}

