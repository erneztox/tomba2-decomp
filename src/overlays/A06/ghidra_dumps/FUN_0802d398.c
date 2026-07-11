// FUN_0802d398

void FUN_0802d398(int param_1)

{
  if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802d3d8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef62b8))();
    return;
  }
  return;
}

