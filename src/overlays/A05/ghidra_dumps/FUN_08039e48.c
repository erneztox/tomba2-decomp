// FUN_08039e48

undefined4 FUN_08039e48(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08039e90 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6024))();
    return uVar1;
  }
  return 0;
}

