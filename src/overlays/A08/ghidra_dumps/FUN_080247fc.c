// FUN_080247fc

undefined4 FUN_080247fc(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08024838 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6444))(&DAT_800e7e80);
    return uVar1;
  }
  return 0;
}

