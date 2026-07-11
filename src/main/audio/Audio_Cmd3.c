/**
 * @brief Audio command 3: calls Audio_LookupChannel with combined channel ID
 * @note Original: func_80092048 at 0x80092048
 */
// Audio_Cmd3



void Audio_Cmd3(u16 param_1,s16 param_2,s32 param_3,s32 param_4)

{
  Audio_LookupChannel((int)(s16)(param_1 | param_2 << 8),param_3,param_4);
  return;
}
