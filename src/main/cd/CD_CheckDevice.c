/**
 * @brief CD device check: calls CD_AllocDMA, sets DAT_800ac59c flag, returns status
 * @note Original: func_80098CE0 at 0x80098CE0
 */
// CD_CheckDevice



s32 CD_CheckDevice(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = CD_AllocDMA(DAT_800ac5a0), iVar1 == 0)) {
    DAT_800ac59c = 1;
    return 1;
  }
  DAT_800ac59c = 0;
  return 0;
}
