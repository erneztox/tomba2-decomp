// FUN_080298d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080298d8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
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
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar3 = func_0x00041438(param_1,0xc00,0x100);
          if (iVar3 != 0) {
            *(undefined1 *)(param_1 + 5) = 1;
            halt_baddata();
          }
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
            if (DAT_800bf9d7 != 0) {
              if (DAT_800bf9d7 < 5) {
                *(undefined1 *)(param_1 + 0x7a) = 8;
              }
              func_0x00040d68(param_1,0x801346d8);
              *(undefined1 *)(param_1 + 0x70) = 2;
              *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(char *)(param_1 + 6) != '\x01') {
            halt_baddata();
          }
          *(undefined1 *)(param_1 + 5) = 1;
        }
      }
      func_0x00041098(param_1);
      goto LAB_08029b04;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x56) = 0xc00;
    *(undefined2 *)(param_1 + 0x2e) = 0xcac;
    *(undefined2 *)(param_1 + 0x36) = 0x14c6;
    uVar2 = 0xf560;
    if ((_DAT_800bfe56 & 0x80) == 0) {
      uVar2 = 0xf580;
    }
    *(undefined2 *)(param_1 + 0x32) = uVar2;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  if (DAT_800bf816 == '\0') {
    return;
  }
  if (DAT_800bf817 != '\x06') {
    return;
  }
  iVar3 = func_0x0007778c(param_1);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    func_0x00130d80(1);
    iVar3 = func_0x00130cf8();
    if (iVar3 != 0) {
      func_0x00040d68(param_1,0x800a3d18);
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,0x8013f730);
    *(undefined1 *)(param_1 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08029b04:
  func_0x0004190c(param_1);
  return;
}

