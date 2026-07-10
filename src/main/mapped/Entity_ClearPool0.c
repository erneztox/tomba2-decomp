/**
 * @brief Clears entity memory pool at 0x800E8008 (0x90 bytes) with memset
 * @note Original: func_8007AC14 at 0x8007AC14
 */
// Entity_ClearPool0



void FUN_8007ac14(void)

{
  FUN_8009a420(0x800e8008,0,0x90);
  return;
}
