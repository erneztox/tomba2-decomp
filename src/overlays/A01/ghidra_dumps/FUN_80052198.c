// FUN_80052198

undefined4 FUN_80052198(byte param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = param_1 + 0x80;
  *param_2 = bVar1;
  if (-1 < (int)((uint)param_1 << 0x18)) {
    bVar1 = 0x7f - param_1;
  }
  uVar2 = 0;
  if (bVar1 < 0x29) {
    *param_2 = 0;
  }
  else {
    uVar2 = 1;
    if ((0x43 < bVar1) && (uVar2 = 3, bVar1 < 0x62)) {
      uVar2 = 2;
    }
  }
  return uVar2;
}

