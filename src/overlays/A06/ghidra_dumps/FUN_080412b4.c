// FUN_080412b4

undefined4 FUN_080412b4(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 7) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080412e4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef5c7c))();
    return uVar1;
  }
  return 0;
}

