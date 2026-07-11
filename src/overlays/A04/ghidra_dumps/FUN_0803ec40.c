// FUN_0803ec40

void FUN_0803ec40(int param_1)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0803ec80 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5c98))(0x800e8008);
    return;
  }
  func_0x0007778c(param_1);
  func_0x000517f8(param_1);
  return;
}

