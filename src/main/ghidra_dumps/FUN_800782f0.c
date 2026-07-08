
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800782f0(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  if (param_1 < 9) {
    _DAT_800bfe50 =
         _DAT_800bfe50 |
         1 << ((uint)(byte)(&DAT_800a55b0)[param_1] +
               ((*(ushort *)((&PTR_DAT_800a54a8)[param_1] + (param_2 & 0xff) * 8 + 6) & 0x600) >> 9)
              & 0x1f);
  }
  if (DAT_800bf870 == '\x05') {
    DAT_800bf9db = DAT_800bf9db | 2;
    return;
  }
  if (DAT_800bf870 == '\x06') {
    DAT_800bf9db = DAT_800bf9db | 4;
    return;
  }
  if (DAT_800bf870 == '\a') {
    DAT_800bf9db = DAT_800bf9db | 8;
    return;
  }
  if (DAT_800bf870 == '\b') {
    DAT_800bf9db = DAT_800bf9db | 0x10;
  }
  return;
}

