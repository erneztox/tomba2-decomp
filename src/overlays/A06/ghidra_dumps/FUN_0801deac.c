// FUN_0801deac

void FUN_0801deac(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801dedc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef65d0))();
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8(param_1);
  return;
}

