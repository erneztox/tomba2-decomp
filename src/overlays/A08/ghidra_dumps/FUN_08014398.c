// FUN_08014398

void FUN_08014398(undefined4 param_1,int param_2)

{
  if (*(byte *)(param_2 + 3) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080143d8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_2 + 3) * 4 + -0x7fef7060))();
    return;
  }
  return;
}

