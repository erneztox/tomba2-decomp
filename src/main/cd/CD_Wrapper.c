/**
 * @brief CD wrapper: calls CD_ReadSector_2 (simple dispatch)
 * @note Original: func_8009A31C at 0x8009A31C
 */
// CD_Wrapper



void CD_Wrapper(void)

{
  CD_ReadSector_2();
  return;
}
