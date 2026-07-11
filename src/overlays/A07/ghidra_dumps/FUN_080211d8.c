// FUN_080211d8

void FUN_080211d8(int param_1)

{
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802120c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6968))(param_1,&DAT_800e7e80);
    return;
  }
  return;
}

