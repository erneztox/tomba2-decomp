
void FUN_8008cd40(void)

{
  FUN_80080890();
  if (DAT_800abfdc == 1) {
    FUN_8009d06c(0);
    FUN_8009d044(0);
  }
  else {
    FUN_80089fc8(0);
    FUN_80089b98(0);
  }
  *DAT_800ac334 = 0;
  *DAT_800ac340 = 0;
  FUN_800808a0();
  return;
}

