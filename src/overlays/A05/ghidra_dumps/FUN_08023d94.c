// FUN_08023d94

void FUN_08023d94(int param_1)

{
  func_0x0007778c();
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08023dd8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef65cc))();
    return;
  }
  return;
}

