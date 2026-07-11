// FUN_080279a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080279a4(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080279e8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef60e8))();
    return;
  }
  if ((1 < *(byte *)(param_1 + 6)) && ((uint)_DAT_1f80017c % 10 == 0)) {
    func_0x00074590(0x36,0xfffffff7,0xffffffc4);
  }
  return;
}

