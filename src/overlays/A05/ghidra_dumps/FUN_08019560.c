// FUN_08019560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019560(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08019598 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6804))();
    return;
  }
  func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077efc();
  return;
}

