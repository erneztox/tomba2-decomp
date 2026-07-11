// FUN_080256d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080256d8(int param_1)

{
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    func_0x00040d68(param_1,0x800a3d18);
    *(undefined1 *)(param_1 + 0x70) = 1;
    func_0x00042354(1,1);
    *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_1f800137 == '\0') {
    func_0x0011ce8c(param_1);
  }
  return;
}

