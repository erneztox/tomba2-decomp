// FUN_0801b654

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801b654(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      func_0x00040cdc(param_1,0x80141af8,0x8013c83c);
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
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

