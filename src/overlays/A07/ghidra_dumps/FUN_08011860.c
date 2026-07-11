// FUN_08011860

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011860(int param_1)

{
  if (DAT_800bf816 == '\0') {
    if (((DAT_800bf873 == '\0') && (*(short *)(param_1 + 0x6a) == 0x2000)) &&
       (*(short *)(param_1 + 0x2e) < 0x10fb)) {
      DAT_1f800236 = 1;
      DAT_1f800137 = 2;
      DAT_800bf80f = 2;
      DAT_800bf839 = 1;
      _DAT_800bf83a = 0x610;
    }
  }
  else if (DAT_800bf817 == '\f') {
    if (17000 < *(short *)(param_1 + 0x36)) {
      *(undefined2 *)(param_1 + 0x36) = 17000;
    }
    if (*(short *)(param_1 + 0x6a) == 0x200d) {
      func_0x00054198();
      DAT_1f800236 = 1;
      DAT_1f800137 = 2;
      DAT_800bf80f = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

