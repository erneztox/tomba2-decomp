/**
 * @brief Audio device check: if param < 0x18, calls FUN_8009a170, else returns 0
 * @note Original: func_80092E00 at 0x80092E00
 */
// Audio_CheckDevice



s32 FUN_80092e00(u16 param_1)

{
  s32 uVar1;
  
  if (param_1 < 0x18) {
    FUN_8009a170((int)(s16)param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
