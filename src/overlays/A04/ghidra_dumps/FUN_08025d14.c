// FUN_08025d14

undefined4 FUN_08025d14(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08025d4c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6120))();
    return uVar1;
  }
  return 0;
}

