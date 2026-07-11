/**
 * @brief Opens memory card file by name
 * @note Original: func_80097498 at 0x80097498
 */
// MC_Open



s32 MC_Open(s32 param_1,s32 param_2)

{
  CD_SPU_Cmd2(2,(uint)DAT_800ac61c << (DAT_800ac62c & 0x1f));
  CD_SPU_Cmd2(0);
  CD_SPU_Cmd2(3,param_1,param_2);
  return param_2;
}
