/**
 * @brief GPU queue depth setter: DAT_800a59a2 = param, calls callback if non-zero
 * @note Original: func_80080D64 at 0x80080D64
 */
// GPU_SetQueueDepth



u8 FUN_80080d64(s8 param_1)

{
  u8 uVar1;
  
  uVar1 = DAT_800a59a2;
  DAT_800a59a2 = param_1;
  if (param_1 != '\0') {
    (*(code *)PTR_FUN_800a599c)
              (s_SetGraphDebug_level__d_type__d_r_8001be6c,param_1,DAT_800a59a0,DAT_800a59a3);
  }
  return uVar1;
}
