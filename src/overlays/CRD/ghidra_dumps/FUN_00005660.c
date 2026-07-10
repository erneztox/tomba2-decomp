// FUN_00005660

void FUN_00005660(int param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x41) != -1) && (uVar1 = *(byte *)(param_1 + 0x3f) - 1, uVar1 < 0x11)) {
                    /* WARNING: Could not emulate address calculation at 0x000056ac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar1 * 4 + -0x7fe75ed4))();
    return;
  }
  return;
}

