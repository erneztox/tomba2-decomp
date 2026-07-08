
byte FUN_800138ac(uint param_1)

{
  byte bVar1;
  int unaff_s1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(unaff_s1 + 0x5515);
  bVar1 = *pbVar2;
  if (1 < *(byte *)(unaff_s1 + 0x5516)) {
    (*DAT_80025510)(&DAT_800101dc,param_1);
  }
  if (param_1 != *pbVar2) {
    (**(code **)(DAT_8002550c + 0x34))(1);
    *pbVar2 = (byte)param_1;
    FUN_800180cc(2,0);
  }
  return bVar1;
}

