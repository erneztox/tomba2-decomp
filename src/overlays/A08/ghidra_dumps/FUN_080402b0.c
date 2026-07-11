// FUN_080402b0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080402b0(int param_1)

{
  byte bVar1;
  
  if (DAT_800bf8de == -1) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0012e168(param_1);
    if (*(char *)(param_1 + 0x2b) != '\x03') {
LAB_08040498:
      func_0x0004190c(param_1);
      return;
    }
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
    if (*(char *)(param_1 + 0x70) != -1) goto LAB_08040498;
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      if (DAT_800bf8df == -1) {
        *(undefined1 *)(param_1 + 0x7a) = 0xc;
      }
      else {
        if (DAT_800bfa3a == '\0') {
          func_0x00040d68(param_1,0x80146ee0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (DAT_800bfadb == '\0') {
          *(undefined1 *)(param_1 + 0x7a) = 6;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00040d68(param_1,0x80146ea8);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      if (DAT_800bfadb != '\0') {
        halt_baddata();
      }
      func_0x00040d68(param_1,0x800a3e38);
      *(undefined1 *)(param_1 + 6) = 3;
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
    else if (bVar1 == 3) {
      *(undefined1 *)(param_1 + 5) = 0;
      goto LAB_08040498;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

