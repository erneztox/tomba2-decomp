// FUN_08034008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08034008(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xe) {
                    /* WARNING: Could not emulate address calculation at 0x0803404c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef60a8))();
    return;
  }
  if (*(byte *)(param_1 + 6) < 8) {
    _DAT_800e7ed8 = 0xff00;
  }
  return;
}

