/**
 * @brief Audio init sequence: calls 4 init functions in order
 * @note Original: func_8008E040 at 0x8008E040
 */
// Audio_InitSequence



void FUN_8008e040(void)

{
  FUN_80085b20();
  FUN_80096a70();
  FUN_80098de0(7);
  FUN_8008dfa0();
  return;
}
