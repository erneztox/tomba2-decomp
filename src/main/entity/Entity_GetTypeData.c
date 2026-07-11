/**
 * @brief Reads entity type data from table at 0x800A33C9 (12 bytes/entry, 16 types)
 * @note Original: func_80040A58 at 0x80040A58
 */
// Entity_GetTypeData



s32 Entity_GetTypeData(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (int)(uint)(u8)(&DAT_800a33c9)[param_1 * 0xc] >> 4;
  }
  else {
    uVar1 = (u8)(&DAT_800a33c9)[param_1 * 0xc] & 0xf;
  }
  return *(s32 *)(&DAT_800a3b38 + uVar1 * 4);
}
