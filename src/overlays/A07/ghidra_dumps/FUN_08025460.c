// FUN_08025460

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08025460(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x00041098(param_1);
    uVar2 = 0;
    if (*(char *)(param_1 + 0x70) == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00042354(1,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = 0;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) != -1) {
          return 0;
        }
        func_0x00042310();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041098(param_1);
    uVar2 = 0;
    if ((*(char *)(param_1 + 0x70) == -1) && (uVar2 = 2, DAT_800bfaea == '\0')) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00040cdc(param_1,0x8014005c,0x801337e0);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar2;
}

