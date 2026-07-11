// FUN_0804126c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0804126c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 == 0) || (*(char *)(param_1 + 0x2b) != '\x03')) goto LAB_080413e0;
    func_0x00042354(1,2);
    func_0x00040d68(param_1,0x800a3d70);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
LAB_080413e0:
      func_0x0004190c(param_1);
      return;
    }
    if (*(char *)(param_1 + 6) == '\0') {
      if ((DAT_800bfa44 & 1) == 0) {
        DAT_800bfa44 = DAT_800bfa44 | 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf8f4 != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = 9;
      if ((DAT_800bf91f == -1) && (uVar1 = 10, DAT_800bf8e4 == -1)) {
        uVar1 = 0xb;
      }
      *(undefined1 *)(param_1 + 0x7a) = uVar1;
      func_0x00040d68(param_1,0x80147434);
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      iVar2 = func_0x00041438(param_1,0x2a8,0x100);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_080413e0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

