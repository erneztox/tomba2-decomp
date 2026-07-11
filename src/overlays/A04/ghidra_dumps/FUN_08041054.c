// FUN_08041054

/* WARNING: Control flow encountered bad instruction data */

void FUN_08041054(int param_1)

{
  if (*(char *)(param_1 + 0x2b) != '\x03') {
    if (DAT_800bfa51 == '\x02') {
      func_0x00040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7febdbac));
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined1 *)(param_1 + 5) = 2;
    }
    return;
  }
  func_0x00042354(1,1);
  if ((*(byte *)(param_1 + 0x5e) & 1) != 0) {
    func_0x00040d68(param_1,0x800a3d70);
    *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7febdbac));
  *(undefined1 *)(param_1 + 5) = 2;
  DAT_800bfa51 = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

