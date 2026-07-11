// FUN_0803dde8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803dde8(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803de24 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5e0c))();
    return uVar1;
  }
  return 0;
}

