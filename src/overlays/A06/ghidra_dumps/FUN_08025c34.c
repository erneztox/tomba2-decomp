// FUN_08025c34

undefined4 FUN_08025c34(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08025c6c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef64a4))();
    return uVar1;
  }
  return 0;
}

