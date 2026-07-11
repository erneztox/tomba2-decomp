/**
 * @brief GPU struct init: Mem_Copy 0x14 bytes from DAT_800a5a0c template
 * @note Original: func_80081C94 at 0x80081C94
 */
// GPU_InitStruct2



s32 GPU_InitStruct2(s32 param_1)

{
  Mem_Copy(param_1,&DAT_800a5a0c,0x14);
  return param_1;
}
