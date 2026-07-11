// FUN_08032fc0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032fc0(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0007778c(param_1);
    if ((DAT_800bfa46 & 0x40) == 0) goto LAB_08033060;
    func_0x00040d68(param_1,0x80145b34);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
    }
LAB_08033060:
    func_0x0004190c(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

