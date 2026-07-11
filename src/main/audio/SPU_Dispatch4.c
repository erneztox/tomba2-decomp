/**
 * @brief SPU dispatch wrapper: calls 0x80092A30
 * @note Original: func_8008FB00 at 0x8008FB00
 */
// SPU_Dispatch4



void SPU_Dispatch4(void)

{
  u8 in_stack_00000030;
  
  Audio_CmdWithParam2(in_stack_00000030);
  return;
}
