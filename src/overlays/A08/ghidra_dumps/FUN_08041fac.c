// FUN_08041fac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041fac(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    if (DAT_800bf80f != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00042354(1,2);
    if (((_DAT_800bf89e & 0x200) != 0) || ((DAT_800bf881 & 4) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040cdc(param_1,0x80148790,0x8014767c);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00042310();
      DAT_1f800137 = 2;
      _DAT_800bf854 = 1;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

