
undefined4 FUN_8008b2d8(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_8009b9b0(s_CD_init__8001c350);
  FUN_8009a730(s_addr__08x_8001c35c,&PTR_DAT_800ac29c);
  DAT_800abfd9 = 0;
  DAT_800abfd8 = 0;
  DAT_800abfc0 = 0;
  DAT_800abfbc = 0;
  DAT_800abfcc = 0;
  DAT_800abfc8 = 0;
  FUN_80085b20();
  FUN_80085b50(2,FUN_8008b818);
  *DAT_800ac280 = 1;
  bVar1 = *DAT_800ac28c;
  while ((bVar1 & 7) != 0) {
    *DAT_800ac280 = 1;
    *DAT_800ac28c = 7;
    *DAT_800ac288 = 7;
    bVar1 = *DAT_800ac28c;
  }
  DAT_800ac29a = 0;
  DAT_800ac299 = 0;
  DAT_800ac298 = 2;
  *DAT_800ac280 = 0;
  *DAT_800ac28c = 0;
  *DAT_800ac290 = 0x1325;
  FUN_8008ac34(1,0,0,0);
  if ((DAT_800abfc8 & 0x10) != 0) {
    FUN_8008ac34(1,0,0,0);
  }
  iVar2 = FUN_8008ac34(10,0,0,0);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    iVar2 = FUN_8008ac34(0xc,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_8008a6ec(0,0);
      uVar3 = 0xffffffff;
      if (iVar2 == 2) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

