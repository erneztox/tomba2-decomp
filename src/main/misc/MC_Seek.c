/**
 * @brief Seeks to position in memory card file
 * @note Original: func_80097E10 at 0x80097E10
 */
// MC_Seek



void MC_Seek(s32 param_1,s32 param_2)

{
  CD_SPU_Cmd(param_1,param_2,0xca,0xcb);
  return;
}
