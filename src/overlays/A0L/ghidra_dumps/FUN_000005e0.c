// FUN_000005e0

/* WARNING: Control flow encountered bad instruction data */

void FUN_000005e0(int param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    func_0x0005082c(0,0,0);
    func_0x0001d71c(0xb);
    DAT_800bfa55 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    func_0x0010d030();
    *(undefined2 *)(param_1 + 0x6a) = 0x1f;
    func_0x0007e9c8(0xffffff,0,0);
  }
  else if (*(char *)(param_1 + 2) == '\x01') {
    if (5 < *(byte *)(param_1 + 3)) {
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x00000688 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef7048))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

