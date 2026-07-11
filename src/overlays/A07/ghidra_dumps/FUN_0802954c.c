// FUN_0802954c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802954c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    iVar1 = func_0x00130cf8();
    if (iVar1 == 0) {
      func_0x00040d68(param_1,0x80134664);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,0x8013439c);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

