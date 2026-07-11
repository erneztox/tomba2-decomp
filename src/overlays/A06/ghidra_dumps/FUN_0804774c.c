// FUN_0804774c

void FUN_0804774c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08047788 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5b3c))
              (param_1,&DAT_800e7e80,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

