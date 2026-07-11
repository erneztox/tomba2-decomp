// FUN_08029588

void FUN_08029588(int param_1)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080295b8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef630c))();
    return;
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  return;
}

