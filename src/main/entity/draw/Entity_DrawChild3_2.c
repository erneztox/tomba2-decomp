/**
 * @brief Draws child entity variant from data table at 0x800A23A4
 * @note Original: func_800339A4 at 0x800339A4
 */
// Entity_DrawChild3



void FUN_800339a4(int param_1,u8 param_2)

{
  u8 local_18;
  u8 local_17;
  s16 local_16;
  s16 local_10;
  s16 local_e;
  s16 local_c;
  s16 local_a;
  
  local_a = DAT_800a23aa;
  local_18 = 0;
  local_16 = 0;
  local_e = DAT_800a23a6;
  local_10 = DAT_800a23a4;
  local_c = DAT_800a23a8;
  local_17 = param_2;
  FUN_8007e1b8(&local_10,PTR_DAT_800174b0,*(s32 *)(param_1 + 4),&local_18);
  return;
}
