// FUN_08025710

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025710(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    if (*(char *)(param_1 + 0x29) == '\0') {
      return;
    }
    if (DAT_800bf80d != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    DAT_1f800137 = 2;
    DAT_800bf841 = 1;
    func_0x0005082c(0,0,0);
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 2;
    _DAT_800bf83a = 0x817;
    DAT_800bf839 = 1;
    DAT_800bf80f = 2;
    DAT_1f800236 = 4;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

