// FUN_00000fe0

void FUN_00000fe0(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00001014 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6f3c))();
    return;
  }
  func_0x000551c4(param_1);
  return;
}

