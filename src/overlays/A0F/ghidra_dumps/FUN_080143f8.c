// FUN_080143f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080143f8(int param_1)

{
  if (*(byte *)(param_1 + 3) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08014430 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6fdc))();
    return;
  }
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 3) == '\x05') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0xb8) = 0x1800;
  *(undefined2 *)(param_1 + 0xba) = 0x1800;
  *(undefined2 *)(param_1 + 0xbc) = 0x1800;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  func_0x0004766c(param_1);
  func_0x00049760(param_1);
  return;
}

