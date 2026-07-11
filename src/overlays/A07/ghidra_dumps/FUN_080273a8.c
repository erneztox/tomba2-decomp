// FUN_080273a8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080273a8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 1) = 1;
        func_0x00077e7c(param_1);
        if (*(char *)(param_1 + 6) == '\0') {
          if (*(char *)(param_1 + 0x70) == -1) {
            *(undefined1 *)(param_1 + 6) = 1;
            halt_baddata();
          }
        }
        else {
          if (*(char *)(param_1 + 6) != '\x01') {
            halt_baddata();
          }
          iVar2 = func_0x00041438(param_1,0x400,0x100);
          if (iVar2 != 0) {
            *(undefined1 *)(param_1 + 5) = 0;
            halt_baddata();
          }
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802756c */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6718))();
          return;
        }
      }
      goto LAB_080277ec;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x157c;
    *(undefined2 *)(param_1 + 0x32) = 0xf2f4;
    *(undefined2 *)(param_1 + 0x36) = 12000;
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    *(undefined1 *)(param_1 + 0x7b) = 0x31;
    func_0x00041718(param_1,0x31,0);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
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
    func_0x00130d80(3);
    if (DAT_800bf8d8 != -1) {
      func_0x00040d68(param_1,0x8013f730);
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    DAT_800bfa45 = DAT_800bfa45 | 1;
    func_0x00040d68(param_1,0x80133d7c);
    *(undefined1 *)(param_1 + 5) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080277ec:
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

