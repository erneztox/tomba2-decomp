// FUN_0803947c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803947c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x08039660 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6048))();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(byte *)(param_1 + 3) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x080394f4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6070))();
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    if ((*(char *)(param_1 + 3) == '\a') && (*(int *)(param_1 + 0x10) != 0)) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
    }
    func_0x0007a624(param_1);
  }
  return;
}

