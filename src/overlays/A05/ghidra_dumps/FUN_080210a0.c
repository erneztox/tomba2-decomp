// FUN_080210a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080210a0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,3);
      if ((_DAT_800bf850 & 7) == 0) {
        func_0x00040d68(param_1,0x8013e000);
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      _DAT_800bf850 = _DAT_800bf850 & 0x7fffffff;
      func_0x00040d68(param_1,0x8013dfb8);
      *(undefined1 *)(param_1 + 6) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (DAT_800bf92b != -1) {
          if (DAT_800bf92b != '\0') {
            *(undefined1 *)(param_1 + 0x7a) = 6;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x7a) = 0x11;
        func_0x00040d68(param_1,0x8013e028);
        *(undefined1 *)(param_1 + 6) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      if ((_DAT_800bf850 & 7) != 0) {
        _DAT_800bf850 = _DAT_800bf850 | 0x10;
        DAT_800bf9eb = 0;
        func_0x00040d68(param_1,0x8013e0b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((DAT_800bfa4d & 7) == 7) {
        halt_baddata();
      }
      func_0x00040d68(param_1,0x8013e1b0);
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
  }
  func_0x0004190c(param_1);
  return;
}

