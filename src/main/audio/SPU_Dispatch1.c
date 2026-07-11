/**
 * @brief SPU dispatch wrapper: calls 0x80092B00
 * @note Original: func_8008FA70 at 0x8008FA70
 */
// SPU_Dispatch1



void SPU_Dispatch1(void)

{
  u8 in_stack_00000030;
  
  Audio_CalcPitch(in_stack_00000030);
  return;
}
