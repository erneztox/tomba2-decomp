/**
 * @brief Draws child entity via FUN_8007e1b8 with data table at 0x800A239C
 * @note Original: func_8003393C at 0x8003393C
 */
// Entity_DrawChild1



void FUN_8003393c(int param_1,u8 param_2)

{
  u8 local_18;
  u8 local_17;
  s16 local_16;
  s16 local_10;
  s16 local_e;
  s16 local_c;
  s16 local_a;
  
  local_a = DAT_800a23a2;
  local_18 = 0;
  local_16 = 0;
  local_e = DAT_800a239e;
  local_10 = DAT_800a239c;
  local_c = DAT_800a23a0;
  local_17 = param_2;
  FUN_8007e1b8(&local_10,PTR_DAT_800174ac,*(s32 *)(param_1 + 4),&local_18);
  return;
}
