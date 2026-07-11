// FUN_08025c0c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025c0c(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      if (param_1[0x29] == '\0') {
        return;
      }
      if (DAT_800e7ea9 == '\0') {
        return;
      }
      if (DAT_800e7ffb != '\0') {
        return;
      }
      if (DAT_800bf80d != '\0') {
        return;
      }
      if (DAT_800bf839 != '\0') {
        return;
      }
      param_1[5] = 3;
      if (DAT_1f800137 == '\0') {
        DAT_1f800137 = '\x02';
      }
      func_0x00054198();
      *param_1 = 2;
      DAT_1f800236 = 1;
      DAT_800bf80f = 2;
      DAT_800bf839 = 1;
      _DAT_800bf83a = 0x1300;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[5] = 1;
    *param_1 = 2;
  }
  if (DAT_800bf80f != '\0') {
    return;
  }
  *param_1 = 1;
  param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

