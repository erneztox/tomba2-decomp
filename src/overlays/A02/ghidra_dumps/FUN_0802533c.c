// FUN_0802533c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802533c(int param_1)

{
  if (*(char *)(param_1 + 0x71) == -1) {
    if (*(short *)(param_1 + 0x40) != 0) {
      if (DAT_800bf901 == -1) {
        *(undefined1 *)(param_1 + 0x5e) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bfafb != '\0') {
        *(undefined1 *)(param_1 + 0x5e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 0;
      func_0x00040d68(param_1,0x8012ad54);
      *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fed519c));
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}

