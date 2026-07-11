/**
 * @brief Draws child entity via FUN_8007e6dc with data table at 0x800174C4
 * @note Original: func_800342EC at 0x800342EC
 */
// Entity_DrawChild2



void FUN_800342ec(int param_1,s16 param_2,s16 param_3,u8 param_4)

{
  u8 local_18;
  u8 local_17;
  s16 local_16;
  s16 local_10;
  s16 local_e;
  s32 local_c;
  
  local_18 = 0;
  local_16 = 0;
  local_c = 0;
  local_17 = param_4;
  local_10 = param_2;
  local_e = param_3;
  FUN_8007e6dc(&local_10,PTR_DAT_800174c4,*(s32 *)(param_1 + 4),&local_18);
  return;
}
