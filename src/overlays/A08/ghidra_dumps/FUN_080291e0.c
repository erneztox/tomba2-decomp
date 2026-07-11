// FUN_080291e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080291e0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x00040cdc(param_1,0,0x8014549c);
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x29) == '\0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00054198(&DAT_800e7e80);
      _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
      _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
      _DAT_800bf850 = 1;
      func_0x00042354(1,2);
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00042310();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

