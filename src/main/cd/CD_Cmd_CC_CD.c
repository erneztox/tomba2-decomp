/**
 * @brief CD command with codes 0xCC,0xCD: calls FUN_80097e40
 * @note Original: func_80098DB0 at 0x80098DB0
 */
// CD_Cmd_CC_CD



void FUN_80098db0(s32 param_1,s32 param_2)

{
  FUN_80097e40(param_1,param_2,0xcc,0xcd);
  return;
}
