// FUN_080289ac

/* WARNING: Control flow encountered bad instruction data */

void FUN_080289ac(int param_1)

{
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    if (*(byte *)(param_1 + 0x5e) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080289f4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fef6830))();
      return;
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    if (DAT_800bf9da != '\x01') {
      if (DAT_800bf9da == '\x02') {
        func_0x00040d68(param_1,0x8012bfc8);
        *(undefined1 *)(param_1 + 0x70) = 1;
        *(undefined1 *)(param_1 + 5) = 1;
      }
      return;
    }
    func_0x00040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fed3db8));
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 2;
    DAT_800bf9da = '\x02';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

