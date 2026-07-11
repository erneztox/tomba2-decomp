// FUN_0802c39c

void FUN_0802c39c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802c3cc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef62d8))();
    return;
  }
  return;
}

