// FUN_0801c1d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801c1d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 4);
  if (bVar3 == 1) {
    if (DAT_1f800137 != '\0') {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        if (*(byte *)(iVar1 + 4) < 2) {
          *(undefined1 *)(iVar1 + 4) = 3;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      func_0x0006f04c();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0006f04c();
    if (DAT_800e7e81 == '\0') {
      return;
    }
    bVar3 = DAT_800bf840 & 0xf;
    if (((DAT_800bf840 & 0x40) == 0) || (iVar1 = func_0x0006eff4(bVar3), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        if (*(byte *)(iVar1 + 4) < 2) {
          *(undefined1 *)(iVar1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_0801c320;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        uVar2 = func_0x0007e038(bVar3,0);
        *(undefined4 *)(param_1 + 0x10) = uVar2;
        func_0x0006f02c(bVar3);
        *(byte *)(param_1 + 0x46) = bVar3;
        halt_baddata();
      }
      if (1 < *(byte *)(iVar1 + 4)) {
LAB_0801c320:
        *(undefined4 *)(param_1 + 0x10) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(byte *)(param_1 + 0x46) != bVar3) {
        *(undefined1 *)(iVar1 + 4) = 3;
        halt_baddata();
      }
    }
  }
  else {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        *(undefined1 *)(param_1 + 1) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined1 *)(param_1 + 0x46) = 0xff;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        halt_baddata();
      }
      DAT_800bf840 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar3 == 2) {
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
    if (bVar3 != 3) {
      DAT_800bf840 = 0;
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  DAT_800bf840 = 0;
  return;
}

