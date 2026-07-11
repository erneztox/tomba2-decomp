// FUN_08038b7c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08038b7c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined1 *)(param_1 + 5) = 1;
          func_0x00074590(0x92,0,0);
        }
      }
      func_0x001124ac(param_1);
      func_0x000517f8(param_1);
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00131988(param_1);
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_08038c8c;
    *(undefined1 *)(param_1 + 5) = 1;
    DAT_800bf841 = 0;
    func_0x00074bf8(0xc);
  }
  if (DAT_800e7e85 == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    func_0x00054d14(&DAT_800e7e80,0xe2,4);
    DAT_800e7e84 = 4;
    DAT_800e7e85 = 0x21;
    DAT_800e7e86 = 0;
    _DAT_800e7ed8 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800e7ef8 != '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
LAB_08038c8c:
  func_0x001124ac(param_1);
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

