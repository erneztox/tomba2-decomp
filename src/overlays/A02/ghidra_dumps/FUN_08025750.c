// FUN_08025750

/* WARNING: Control flow encountered bad instruction data */

void FUN_08025750(int param_1)

{
  if (*(char *)(param_1 + 0x71) == -1) {
    func_0x00040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fed5104));
    if (*(char *)(param_1 + 0x5e) == '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041768(param_1,10,4);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}

