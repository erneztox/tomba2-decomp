/**
 * @brief CD device check: calls FUN_800982a0, sets DAT_800ac59c flag, returns status
 * @note Original: func_80098CE0 at 0x80098CE0
 */
// CD_CheckDevice



s32 FUN_80098ce0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_800982a0(DAT_800ac5a0), iVar1 == 0)) {
    DAT_800ac59c = 1;
    return 1;
  }
  DAT_800ac59c = 0;
  return 0;
}
