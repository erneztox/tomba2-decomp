// FUN_0802a408

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a408(int param_1)

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
        if ((*(char *)(param_1 + 0x70) == -1) &&
           (iVar3 = func_0x00041438(param_1,0,0x100), iVar3 != 0)) {
          *(undefined1 *)(param_1 + 5) = 0;
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
          bVar1 = *(byte *)(param_1 + 6);
          if (bVar1 == 1) {
            *(undefined1 *)(param_1 + 0xbf) = 0;
            if ((DAT_800bfa39 & 1) == 0) {
              if (DAT_800bf91c == '\0') {
                *(undefined1 *)(param_1 + 0x7a) = 2;
              }
              else if (DAT_800bf91c == -1) {
                if (DAT_800bf91d == '\0') {
                  *(undefined1 *)(param_1 + 0x7a) = 4;
                }
                else if (DAT_800bf91d == -1) {
                  if (DAT_800bf91e == '\0') {
                    *(undefined1 *)(param_1 + 0x7a) = 6;
                  }
                  else {
                    if (DAT_800bf91e == -1) {
                      DAT_800bfa39 = DAT_800bfa39 | 1;
                      *(undefined1 *)(param_1 + 0xbf) = 1;
                      if (*(char *)(param_1 + 0xbf) != '\0') {
                        func_0x00040d68(param_1,0x801347c0);
                        *(undefined1 *)(param_1 + 6) = 2;
                        *(undefined1 *)(param_1 + 0x70) = 2;
                        halt_baddata();
                      }
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined1 *)(param_1 + 0x7a) = 7;
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 0x7a) = 5;
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x7a) = 3;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x7a) = 8;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (bVar1 < 2) {
            if (bVar1 == 0) {
              *(undefined1 *)(param_1 + 0x7a) = 1;
              *(undefined1 *)(param_1 + 6) = 1;
              func_0x00040d68(param_1,0x801347b8);
              *(undefined1 *)(param_1 + 0x70) = 2;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (bVar1 != 2) {
            halt_baddata();
          }
          iVar3 = func_0x00041438(param_1,0,0x100);
          if (iVar3 != 0) {
            *(undefined1 *)(param_1 + 5) = 1;
          }
        }
      }
      func_0x00041098(param_1);
      goto LAB_0802a6d8;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x1a9a;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
    uVar2 = 0xf560;
    if ((_DAT_800bfe56 & 0x80) == 0) {
      uVar2 = 0xf580;
    }
    *(undefined2 *)(param_1 + 0x32) = uVar2;
    *(undefined2 *)(param_1 + 0x36) = 0x243a;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
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
LAB_0802a6d8:
  func_0x0004190c(param_1);
  return;
}

