// FUN_0801da70

void FUN_0801da70(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801daa4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6a6c))(param_1,&DAT_800e7e80);
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

