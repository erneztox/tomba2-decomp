/**
 * @brief CD command with codes 0xCC,0xCD: calls CD_SPU_Cmd
 * @note Original: func_80098DB0 at 0x80098DB0
 */
// CD_Cmd_CC_CD



void CD_Cmd_CC_CD(s32 param_1,s32 param_2)

{
  CD_SPU_Cmd(param_1,param_2,0xcc,0xcd);
  return;
}
