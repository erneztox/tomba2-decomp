/**
 * @brief SPU dispatch wrapper: calls 0x80092BB0
 * @note Original: func_8008FAD0 at 0x8008FAD0
 */
// SPU_Dispatch3



void SPU_Dispatch3(void)

{
  u8 in_stack_00000030;
  
  Audio_CmdWithParam(in_stack_00000030);
  return;
}
