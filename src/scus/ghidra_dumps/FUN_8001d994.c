
void FUN_8001d994(void)

{
  if (DAT_80026d78 == 0) {
    DAT_80026d78 = 1;
    FUN_80017cec();
    FUN_8001dd6c(0x8001d66c);
    DAT_80026d10 = FUN_8001d20c(0xf0000009,0x20,0x2000,0);
    FUN_8001d21c();
    FUN_80017cfc();
  }
  return;
}

