/**
 * @brief GPU status bit getter: calls GPU func via ptr table, returns top bit
 * @note Original: func_80081CC8 at 0x80081CC8
 */
// GPU_GetStatusBit



uint FUN_80081cc8(void)

{
  uint uVar1;
  
  uVar1 = (*PTR_PTR_800a5998->anim_data)();
  return uVar1 >> 0x1f;
}
