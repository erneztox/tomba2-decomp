/**
 * @brief CD event setup: branches on DAT_800ac620 flag, calls CD_SPU_Cmd2 or CD_SPU_Read
 * @note Original: func_80097414 at 0x80097414
 */
// CD_SetupEvent



s32 CD_SetupEvent(s32 param_1,s32 param_2)

{
  if (DAT_800ac620 == 0) {
    CD_SPU_Cmd2(2,(uint)DAT_800ac61c << (DAT_800ac62c & 0x1f));
    CD_SPU_Cmd2(1);
    CD_SPU_Cmd2(3,param_1,param_2);
  }
  else {
    CD_SPU_Read(param_1,param_2);
  }
  return param_2;
}
