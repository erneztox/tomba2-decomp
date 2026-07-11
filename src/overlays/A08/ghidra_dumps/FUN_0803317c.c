// FUN_0803317c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803317c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 6) = 2;
      if (DAT_800bf938 != '\0') {
        func_0x00040cdc(param_1,0x8001b4dc,0x80145d08);
        *(undefined1 *)(param_1 + 0x70) = 1;
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return;
    }
LAB_08033344:
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00042310();
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (DAT_800bf8f4 == -1) {
        *(undefined1 *)(param_1 + 5) = 1;
        DAT_800bf871 = 0x12;
        halt_baddata();
      }
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        *(undefined1 *)(param_1 + 6) = 2;
        halt_baddata();
      }
      if (1 < bVar1) {
        if (bVar1 != 2) {
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) != -1) {
          halt_baddata();
        }
        goto LAB_08033344;
      }
    }
    else {
      if (bVar1 != 2) {
        halt_baddata();
      }
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        *(undefined1 *)(param_1 + 6) = 2;
        func_0x00040cdc(param_1,0x8001b4dc,0x80145d50);
        *(undefined1 *)(param_1 + 0x70) = 1;
        halt_baddata();
      }
      if (1 < bVar1) {
        if (bVar1 != 2) {
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) != -1) {
          return;
        }
        *(undefined1 *)(param_1 + 4) = 3;
        return;
      }
    }
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00042354(1,3);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

