// FUN_0801f29c

void FUN_0801f29c(int param_1)

{
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0801f2dc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6780))();
    return;
  }
  func_0x0004190c(param_1);
  return;
}

