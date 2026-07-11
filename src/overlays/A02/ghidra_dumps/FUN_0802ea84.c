// FUN_0802ea84

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ea84(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802eabc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5b54))();
    return;
  }
  if (*(char *)(param_1 + 6) == '\0') {
    if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
      return;
    }
    func_0x00074590(0x1c,0xfffffff0,0x2a);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

