// FUN_08040948

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08040948(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    if (DAT_800bfae5 == '\0') {
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      func_0x00040cdc(param_1,0x8014d014,0x80149f58);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else if (bVar1 == 3) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

