/**
 * @brief Returns file size for memory card file handle
 * @note Original: func_80096A40 at 0x80096A40
 */
// MC_GetFileSize



int MC_GetFileSize(s16 param_1)

{
  s16 sVar1;
  
  sVar1 = CD_SyncCheck((int)param_1);
  return (int)sVar1;
}
