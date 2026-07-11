/**
 * @brief Audio init sequence: calls 4 init functions in order
 * @note Original: func_8008E040 at 0x8008E040
 */
// Audio_InitSequence



void Audio_InitSequence(void)

{
  CD_Dispatch0C();
  MC_Close();
  CD_SPU_Transfer(7);
  Audio_Init2();
  return;
}
