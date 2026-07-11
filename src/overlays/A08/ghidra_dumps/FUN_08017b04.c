// FUN_08017b04

void FUN_08017b04(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xf) {
                    /* WARNING: Could not emulate address calculation at 0x08017b38 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6b70))();
    return;
  }
  return;
}

