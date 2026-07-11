/**
 * @brief Audio device check: if param < 0x18, calls FUN_8009a170, else returns 0
 * @note Original: func_80092E00 at 0x80092E00
 */
// Audio_CheckDevice



undefined4 FUN_80092e00(ushort param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x18) {
    FUN_8009a170((int)(short)param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
