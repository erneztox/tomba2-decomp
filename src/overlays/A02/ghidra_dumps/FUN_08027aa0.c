// FUN_08027aa0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08027b1c) */

void FUN_08027aa0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar1 = func_0x0007778c(param_1);
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
      func_0x00040d68(param_1,0x8012b650);
      *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 6) == '\0') {
        if (DAT_800bf8c0 != -1) {
          func_0x00040d68(param_1,0x8012b994);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf8c0 == -1) {
        *(undefined2 *)(param_1 + 0x80) = 0x5a;
        *(undefined1 *)(param_1 + 0xbf) = 0;
        *(undefined2 *)(param_1 + 0x82) = 0xb4;
        func_0x00040d68(param_1,0x8012b8a8);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 6) = 3;
        *(undefined1 *)(param_1 + 5) = 1;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
  }
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
  }
  return;
}

