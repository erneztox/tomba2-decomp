// FUN_08040534

undefined4 FUN_08040534(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0804056c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef5d0c))();
    return uVar1;
  }
  return 0;
}

