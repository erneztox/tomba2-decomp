// FUN_08026514

void FUN_08026514(int param_1)

{
  if (DAT_800e7ef8 == '\a') {
    if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802655c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6454))();
      return;
    }
  }
  else {
    func_0x00073328(param_1);
  }
  return;
}

