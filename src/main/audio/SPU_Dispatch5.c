/**
 * @brief SPU dispatch wrapper: calls 0x80092A30
 * @note Original: func_8008FB30 at 0x8008FB30
 */
// SPU_Dispatch5



void SPU_Dispatch5(void)

{
  u8 in_stack_00000030;
  
  Audio_CmdWithParam2(in_stack_00000030);
  return;
}
