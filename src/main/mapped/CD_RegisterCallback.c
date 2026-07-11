/**
 * @brief CD event callback register: calls FUN_80085b80(2, FUN_80082fb4)
 * @note Original: func_80083AD0 at 0x80083AD0
 */
// CD_RegisterCallback



void FUN_80083ad0(void)

{
  FUN_80085b80(2,FUN_80082fb4);
  return;
}
