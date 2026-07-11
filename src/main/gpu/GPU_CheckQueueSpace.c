/**
 * @brief GPU queue space check: validates param vs DAT_800a59a4 capacity
 * @note Original: func_80082240 at 0x80082240
 */
// GPU_CheckQueueSpace



uint FUN_80082240(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < (short)param_1) &&
     (uVar1 = DAT_800a59a4 - 1, (int)(short)param_1 <= (short)DAT_800a59a4 + -1)) {
    uVar1 = param_1;
  }
  if ((short)param_2 < 0) {
    param_2 = 0;
  }
  else if ((short)DAT_800a59a6 + -1 < (int)(short)param_2) {
    param_2 = DAT_800a59a6 - 1;
  }
  return (param_2 & 0x3ff) << 10 | uVar1 & 0x3ff | 0xe3000000;
}
