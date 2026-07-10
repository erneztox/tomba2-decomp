// FUN_00000c84

void FUN_00000c84(int param_1)

{
  if (*(byte *)(param_1 + 3) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x00000cbc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fe75fbc))();
    return;
  }
  return;
}

