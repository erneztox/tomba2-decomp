// FUN_80075d58

void FUN_80075d58(void)

{
  DAT_800be220 = (undefined2)(((uint)DAT_800fb164 * 0x7fff) / 9);
  if (DAT_800fb163 == '\0') {
    DAT_800bed7c = 0x80;
    DAT_800bed7d = 0;
    DAT_800bed7e = 0x80;
    DAT_800bed7f = 0;
    FUN_80096390();
  }
  else {
    DAT_800bed7c = 0x40;
    DAT_800bed7d = 0x40;
    DAT_800bed7e = 0x40;
    DAT_800bed7f = 0x40;
    FUN_80096380();
  }
  FUN_80089f68(&DAT_800bed7c);
  return;
}

