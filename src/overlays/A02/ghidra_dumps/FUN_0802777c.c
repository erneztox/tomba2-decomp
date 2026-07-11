// FUN_0802777c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08027810) */

void FUN_0802777c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bf8c1 == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = func_0x0007778c(param_1);
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
      func_0x00040d68(param_1,0x800a3d08);
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
        func_0x00040d68(param_1,0x8012b670);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
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

