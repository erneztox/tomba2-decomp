// FUN_080378d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080378d4(int param_1)

{
  if ((_DAT_800bfe56 & 0x20) != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf8ce != -1) {
    *(undefined2 *)(param_1 + 0x32) = 0xd4a4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 5) = 2;
  func_0x00051b70(param_1,0xc,0x14);
  return;
}

