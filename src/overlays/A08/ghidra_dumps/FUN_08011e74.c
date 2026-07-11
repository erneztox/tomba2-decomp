// FUN_08011e74

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_08011e74(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x2a);
  if (3 < bVar1) {
    if (bVar1 < 6) {
      if (*(short *)(param_1 + 0x2e) < 0x3472) {
        if ((-0xf14 < *(short *)(param_1 + 0x32)) &&
           ((*(char *)(param_1 + 0x17b) == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0')) {
          DAT_800bf839 = '\a';
          _DAT_800bf83a = 0x802;
        }
        if (*(short *)(param_1 + 0x32) < -0x4000) {
          *(undefined2 *)(param_1 + 0x32) = 0xc000;
        }
        *(undefined2 *)(param_1 + 0x2e) = 0x3471;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 0x14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((0x1152 < *(short *)(param_1 + 0x36)) && (-0x22ce < *(short *)(param_1 + 0x32))) {
        if ((*(char *)(param_1 + 0x17b) == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0') {
          DAT_800bf839 = '\a';
          _DAT_800bf83a = 0x812;
        }
        *(undefined2 *)(param_1 + 0x2e) = 0x3680;
        *(undefined2 *)(param_1 + 0x36) = 0x1167;
        func_0x00054198();
      }
    }
  }
  return DAT_800bf839;
}

