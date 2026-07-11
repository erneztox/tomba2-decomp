/**
 * @brief Closes memory card file handle
 * @note Original: func_80096A70 at 0x80096A70
 */
// MC_Close



void MC_Close(void)

{
  CD_Init2(0);
  return;
}
