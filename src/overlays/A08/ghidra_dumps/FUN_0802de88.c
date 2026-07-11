// FUN_0802de88

void FUN_0802de88(int param_1)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802dec0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6104))(&DAT_800e7e80);
    return;
  }
  func_0x0007778c(param_1);
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  return;
}

