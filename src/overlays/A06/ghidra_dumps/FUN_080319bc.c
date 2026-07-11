// FUN_080319bc

undefined4 FUN_080319bc(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080319ec */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef6170))();
    return uVar1;
  }
  return 0;
}

