// FUN_08021904

/* WARNING: Control flow encountered bad instruction data */

void FUN_08021904(int param_1)

{
  if (DAT_800bf871 == '\x06') {
    *(undefined1 *)(param_1 + 0xbf) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xbf) = 1;
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08021954 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6218))();
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8(param_1);
  return;
}

