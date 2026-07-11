/**
 * @brief Audio device check: if param < 0x18, calls CD_ReadReg, else returns 0
 * @note Original: func_80092E00 at 0x80092E00
 */
// Audio_CheckDevice



s32 Audio_CheckDevice(u16 param_1)

{
  s32 uVar1;
  
  if (param_1 < 0x18) {
    CD_ReadReg((int)(s16)param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
