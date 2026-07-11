// FUN_0801bfec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801bfec(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 6) = 2;
      func_0x00040cdc(param_1,0x80140f7c,0x8013ca80);
      *(undefined1 *)(param_1 + 0x70) = 1;
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar2 = 1;
      if (((DAT_800bfaee == '\0') && (iVar2 = 2, DAT_800bfaf1 == '\0')) &&
         (iVar2 = 3, DAT_800bfaef == '\0')) {
        iVar2 = (uint)(DAT_800bfaf0 != '\0') << 2;
      }
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 5) = 2;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 1;
      halt_baddata();
    }
    if (bVar1 == 2) {
      iVar2 = func_0x001149a8(param_1);
      if (iVar2 == 0) {
        return;
      }
      if (DAT_800bf925 == -1) {
        *(undefined1 *)(param_1 + 5) = 3;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 1;
      halt_baddata();
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 6) = 2;
      func_0x00040cdc(param_1,0x80140f7c,0x8013cab0);
      *(undefined1 *)(param_1 + 0x70) = 1;
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00042354(1,1);
        halt_baddata();
      }
      return;
    }
  }
  if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00041098(param_1);
  if (*(char *)(param_1 + 0x70) == -1) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00042310();
  }
  return;
}

