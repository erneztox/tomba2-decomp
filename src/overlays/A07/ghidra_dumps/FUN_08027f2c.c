// FUN_08027f2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027f2c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    iVar1 = func_0x00130cf8();
    if (iVar1 == 0) {
      func_0x00040d68(param_1,0x80133fb8);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,0x80133ef8);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

