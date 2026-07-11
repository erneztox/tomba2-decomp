// FUN_080184e4

void FUN_080184e4(int param_1)

{
  if (*(byte *)(param_1 + 3) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08018510 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6994))(param_1,&DAT_800e7e80);
    return;
  }
  return;
}

