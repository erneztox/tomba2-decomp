// FUN_0803e1ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803e1ac(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803e1e4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5df4))();
    return uVar1;
  }
  return 0;
}

