// FUN_0801a954

void FUN_0801a954(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x0801a984 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6bcc))();
    return;
  }
  return;
}

