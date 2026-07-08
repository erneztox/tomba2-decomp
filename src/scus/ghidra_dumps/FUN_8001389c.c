
byte FUN_8001389c(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_80025515;
  if (1 < DAT_80025516) {
    (*DAT_80025510)(&DAT_800101dc,param_1);
  }
  if (param_1 != DAT_80025515) {
    (**(code **)(DAT_8002550c + 0x34))(1);
    DAT_80025515 = (byte)param_1;
    FUN_800180cc(2,0);
  }
  return bVar1;
}

