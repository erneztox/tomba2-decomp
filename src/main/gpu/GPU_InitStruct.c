/**
 * @brief GPU struct init: Mem_Copy 0x5C bytes from DAT_800a59b0 template
 * @note Original: func_80081768 at 0x80081768
 */
// GPU_InitStruct



s32 GPU_InitStruct(s32 param_1)

{
  Mem_Copy(param_1,&DAT_800a59b0,0x5c);
  return param_1;
}
