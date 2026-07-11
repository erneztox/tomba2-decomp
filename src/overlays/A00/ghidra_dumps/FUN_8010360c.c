// FUN_8010360c

void FUN_8010360c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Jumptable at 0x8010364c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef7000))();
    return;
  }
  return;
}

