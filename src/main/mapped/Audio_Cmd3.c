/**
 * @brief Audio command 3: calls FUN_80095a9c with combined channel ID
 * @note Original: func_80092048 at 0x80092048
 */
// Audio_Cmd3



void FUN_80092048(ushort param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_80095a9c((int)(short)(param_1 | param_2 << 8),param_3,param_4);
  return;
}
