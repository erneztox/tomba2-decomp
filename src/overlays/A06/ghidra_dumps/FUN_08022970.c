// FUN_08022970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022970(int param_1)

{
  if (_DAT_800bf854 == 0xff) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 2;
    if (*(char *)(param_1 + 3) == '\0') {
      func_0x00074590(0x94,0xfffffff6,0xffffffe2);
    }
  }
  return;
}

