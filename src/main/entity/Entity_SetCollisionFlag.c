/**
 * @brief Entity collision flag: builds u8 from param, stores at param_2
 * @note Original: func_80052198 at 0x80052198
 */
// Entity_SetCollisionFlag



s32 FUN_80052198(u8 param_1,u8 *param_2)

{
  u8 bVar1;
  s32 uVar2;
  
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
