// FUN_80070830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80070830(void)

{
  bool bVar1;
  
  bVar1 = *(char *)(_DAT_1f800214 + 0x70) < '\x01';
  if (bVar1) {
    FUN_80041718(_DAT_1f800214,0,2);
  }
  return bVar1;
}

