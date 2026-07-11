// FUN_08043594

/* WARNING: Control flow encountered bad instruction data */

void FUN_08043594(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 == 0) || (*(char *)(param_1 + 0x2b) != '\x03')) goto LAB_080436fc;
    func_0x00042354(1,2);
    func_0x00040d68(param_1,0x800a3d90);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
LAB_080436fc:
      func_0x0004190c(param_1);
      return;
    }
    if (*(char *)(param_1 + 6) == '\0') {
      if ((((DAT_800bf8de != -1) || (DAT_800bf8e1 != -1)) || (DAT_800bf8e3 == '\0')) ||
         (DAT_800bf8e3 != -1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = 0xd;
      if (DAT_800bf8e4 == -1) {
        uVar1 = 0xe;
      }
      *(undefined1 *)(param_1 + 0x7a) = uVar1;
      func_0x00040d68(param_1,0x80147c2c);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 5) = 0;
      goto LAB_080436fc;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

