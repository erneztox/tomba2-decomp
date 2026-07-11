/**
 * @brief CD transfer setup: clamps size to 0x7EFF0, calls CD_SetupEvent, checks flag
 * @note Original: func_80099150 at 0x80099150
 */
// CD_SetupTransfer



uint CD_SetupTransfer(s32 param_1,uint param_2)

{
  if (0x7eff0 < param_2) {
    param_2 = 0x7eff0;
  }
  CD_SetupEvent(param_1,param_2);
  if (DAT_800ac63c == 0) {
    DAT_800ac638 = 0;
  }
  return param_2;
}
