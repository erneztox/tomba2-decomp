// FUN_08029fec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08029fec(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if ((*(char *)(param_1 + 0x70) == -1) &&
       (iVar2 = func_0x00041438(param_1,0x578,0x100), iVar2 != 0)) {
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
      goto LAB_0802a2d4;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        uVar3 = func_0x00122e90(param_1);
        if ((uVar3 & 0xff) == 0xff) {
          if ((_DAT_800bfe56 & 0x80) != 0) {
            func_0x00040d68(param_1,0x80134738);
            *(undefined1 *)(param_1 + 6) = 3;
            *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)((uVar3 & 3) * 2 + -0x7fecb8b0);
        if (((uVar3 & 0x80) != 0) && ((_DAT_800bfe56 & 0x80) != 0)) {
          func_0x00040d68(param_1,0x80134710);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x7a) = 0;
        if ((_DAT_800bfe56 & 0x80) != 0) {
          func_0x00040d68(param_1,0x801346f8);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 == 2) {
        if ((_DAT_800bfe56 & 0x80) != 0) {
          func_0x00040d68(param_1,0x80134738);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(undefined1 *)(param_1 + 6) = 3;
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  func_0x00041098(param_1);
LAB_0802a2d4:
  func_0x0004190c(param_1);
  return;
}

