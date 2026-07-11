// FUN_08028ea0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08028ea0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if ((*(char *)(param_1 + 0x70) == -1) &&
       (iVar2 = func_0x00041438(param_1,0xc00,0x100), iVar2 != 0)) {
      *(undefined1 *)(param_1 + 5) = 0;
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = func_0x0007778c(param_1);
      if (iVar2 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        func_0x00130d80(1);
        iVar2 = func_0x00130cf8();
        if (iVar2 != 0) {
          func_0x00040d68(param_1,0x800a3d18);
          *(undefined1 *)(param_1 + 5) = 2;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 0x70) = 2;
          halt_baddata();
        }
        func_0x00040d68(param_1,0x8013f730);
        *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0802903c;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 6) == '\0') {
        if (DAT_800bf934 == -1) {
          *(undefined1 *)(param_1 + 0x7a) = 0xd;
          func_0x00040d68(param_1,0x80134354);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      iVar2 = func_0x00041438(param_1,0xc00,0x100);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
  }
  func_0x00041098(param_1);
LAB_0802903c:
  func_0x0004190c(param_1);
  return;
}

