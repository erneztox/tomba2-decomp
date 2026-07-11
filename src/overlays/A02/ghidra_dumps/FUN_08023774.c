// FUN_08023774

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023774(undefined1 *param_1)

{
  byte bVar1;
  
  if (param_1[0x71] != -1) {
LAB_08023828:
    if (param_1[0x5e] == '\x02') {
      _DAT_800e7ed6 =
           func_0x00085690((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36),
                           (int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160);
      _DAT_800e7ed6 = _DAT_800e7ed6 & 0xfff;
    }
    return;
  }
  bVar1 = param_1[0x5e];
  if (bVar1 == 1) {
    param_1[5] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bfafd != '\0') {
      *param_1 = 2;
      param_1[0x5e] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x5e] = 1;
    func_0x00040d68(param_1,0x800a3e58);
    param_1[0x70] = 1;
  }
  else if (bVar1 == 2) {
    param_1[4] = 3;
    goto LAB_08023828;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

