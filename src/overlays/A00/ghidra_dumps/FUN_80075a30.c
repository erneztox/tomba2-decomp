// FUN_80075a30

void FUN_80075a30(void)

{
  DAT_800be20a = 0x7fff;
  DAT_800be208 = 0x7fff;
  DAT_800be1fe = 0x3fff;
  DAT_800be1fc = 0x3fff;
  DAT_800be1f8 = DAT_800be1f8 | 0xc3;
  FUN_80099490();
  DAT_800be1f8 = 0;
  return;
}

