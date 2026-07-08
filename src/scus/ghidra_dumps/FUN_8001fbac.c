
void FUN_8001fbac(int param_1)

{
  if (param_1 == 0) {
    *DAT_8002741c = 0x80000000;
    *DAT_800273f0 = 0;
    *DAT_800273fc = 0;
    *DAT_8002741c = 0x60000000;
    FUN_8001f49c(&DAT_800272d8,0x20);
    FUN_8001f49c(&DAT_8002735c,0x20);
    FUN_8001f48c();
    return;
  }
  if (param_1 != 1) {
    FUN_8001f480();
    return;
  }
  *DAT_8002741c = 0x80000000;
  *DAT_800273f0 = 0;
  *DAT_800273fc = 0;
  *DAT_8002741c = 0x60000000;
  FUN_8001f48c();
  return;
}

