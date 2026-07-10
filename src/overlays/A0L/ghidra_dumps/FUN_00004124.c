// FUN_00004124

void FUN_00004124(int param_1)

{
  if (*(byte *)(param_1 + 7) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00004154 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef6f88))();
    return;
  }
  return;
}

