// FUN_0801b25c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801b25c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x2b) != '\x03') {
          return 0;
        }
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00042354(1,1);
        func_0x00040cdc(param_1,0x80141af8,0x8013c748);
        *(undefined1 *)(param_1 + 0x70) = 1;
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00041098(param_1);
  if (*(char *)(param_1 + 0x70) != -1) {
    return 0;
  }
  if ((DAT_800bf924 != '\0') && (DAT_800bfb18 != '\0')) {
    func_0x00040cdc(param_1,0x80141af8,0x8013c810);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

