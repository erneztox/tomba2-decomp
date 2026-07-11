// FUN_08027810

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027810(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      return;
    }
    if (DAT_800bf817 != '\a') {
      return;
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
        *(undefined1 *)(param_1 + 5) = 3;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 0x70) = 2;
        halt_baddata();
      }
      func_0x00040d68(param_1,0x8013f730);
      *(undefined1 *)(param_1 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x157c;
      *(undefined2 *)(param_1 + 0x36) = 12000;
      if ((_DAT_800bfe56 & 0x80) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x32) = 0xf2d4;
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *(undefined1 *)(param_1 + 0x7b) = 0x17;
      func_0x00041718(param_1,0x17,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 5) = 1;
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        if (*(char *)(param_1 + 6) == '\0') {
          if ('\0' < DAT_800bf937) {
            *(undefined1 *)(param_1 + 0x7a) = 6;
            func_0x00040d68(param_1,0x80133ed4);
            *(undefined1 *)(param_1 + 0x70) = 2;
            *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (DAT_800bf8dc != -1) {
            *(undefined1 *)(param_1 + 0x7a) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 0x7a) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(char *)(param_1 + 6) != '\x01') {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

