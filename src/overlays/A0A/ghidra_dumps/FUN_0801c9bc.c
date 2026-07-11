// FUN_0801c9bc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801c9bc(int param_1)

{
  if (*(char *)(param_1 + 0x5e) == '\x02') {
    if (0xf7f < *(short *)(param_1 + 0x4a)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    if (*(short *)(param_1 + 0x50) < *(short *)(param_1 + 0x4a)) {
      func_0x00074590(0x8f,0,0);
    }
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0801ca48 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6db8))();
    return;
  }
  if (*(short *)(param_1 + 0x4a) != 0) {
    func_0x00115700(param_1);
  }
  return;
}

