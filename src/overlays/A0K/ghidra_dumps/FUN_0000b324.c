// FUN_0000b324

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000b324(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return;
    }
    if (DAT_800bfb07 != '\0') {
      func_0x00040cdc(param_1,0x8001b4dc,0x8011d190);
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x2b) != '\x03') {
          return;
        }
        if (DAT_800bfb07 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00040cdc(param_1,0x8001b4dc,0x8011d168);
        *(undefined1 *)(param_1 + 0x70) = 1;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        func_0x00042354(1,3);
      }
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
    *(undefined1 *)(param_1 + 5) = 5;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x00042310();
  return;
}

