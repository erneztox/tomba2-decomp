/**
 * @brief CD read + seek: calls CD_Cmd1 for read, then CD_SeekCmd for seek
 * @note Original: func_800753D4 at 0x800753D4
 */
// CD_ReadSeek



void CD_ReadSeek(s16 *param_1,s32 param_2,s32 param_3)

{
  s16 sVar1;
  
  sVar1 = CD_Cmd1(param_2,0xffffffff);
  *param_1 = sVar1;
  sVar1 = CD_SeekCmd(param_3,(int)sVar1);
  *param_1 = sVar1;
  while (sVar1 = MC_GetFileSize(0), sVar1 == 0) {
    Sys_TriggerIRQ(1);
  }
  return;
}
