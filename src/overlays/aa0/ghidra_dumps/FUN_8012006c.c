// FUN_8012006c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012006c(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x80040cdc(param_1,0x8001b860,*(undefined4 *)((uint)DAT_800bf830 * 4 + -0x7feb61b0));
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)(param_1 + 0x70) == -1) {
      if (DAT_800bfad8 != '\0') {
        func_0x80040cdc(param_1,0x8001b860,_DAT_80149e70);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 0xbf) = 0xd;
        *(undefined1 *)(param_1 + 6) = 1;
        goto LAB_801290d4;
      }
      func_0x80070798(param_1);
    }
    func_0x80041098(param_1);
    func_0x80070e60(param_1);
    func_0x8004190c(param_1);
    return;
  }
LAB_801290d4:
  FUN_801323f0();
  return;
}

