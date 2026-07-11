// FUN_08031e54

void FUN_08031e54(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08031e88 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef652c))();
    return;
  }
  func_0x0004b374(param_1,0);
  return;
}

