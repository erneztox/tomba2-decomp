/**
 * @brief CD read + seek: calls CD_Cmd1 for read, then FUN_80096980 for seek
 * @note Original: func_800753D4 at 0x800753D4
 */
// CD_ReadSeek



void FUN_800753d4(s16 *param_1,s32 param_2,s32 param_3)

{
  s16 sVar1;
  
  sVar1 = FUN_80096480(param_2,0xffffffff);
  *param_1 = sVar1;
  sVar1 = FUN_80096980(param_3,(int)sVar1);
  *param_1 = sVar1;
  while (sVar1 = FUN_80096a40(0), sVar1 == 0) {
    FUN_80051f80(1);
  }
  return;
}
