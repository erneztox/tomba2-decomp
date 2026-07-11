// FUN_0803fccc

undefined4 FUN_0803fccc(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803fd08 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5d54))();
    return uVar1;
  }
  return 0;
}

