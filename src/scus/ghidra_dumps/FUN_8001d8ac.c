
void FUN_8001d8ac(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  FUN_8001806c();
  FUN_8001d22c(param_1);
  if (param_1 == 0) {
    iVar2 = 0x17;
    puVar1 = &DAT_80026d72;
    do {
      *puVar1 = 0xc000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  FUN_8001d194();
  DAT_80026d1c = 0;
  DAT_80026d20 = 0;
  DAT_80026d2c = 0;
  DAT_80026d30 = 0;
  DAT_80026d32 = 0;
  DAT_80026d34 = 0;
  DAT_80026d38 = 0;
  DAT_80026d24 = DAT_800271f8;
  FUN_8001db38(0xd1,DAT_800271f8,0);
  DAT_80026de8 = 0;
  DAT_80026dec = 0;
  DAT_80026df0 = 0;
  DAT_80026d18 = 0;
  DAT_80026da4 = 0;
  DAT_80026d14 = 0;
  DAT_80026d40 = 0;
  DAT_80026d3c = 0;
  DAT_80026d74 = 0;
  return;
}

