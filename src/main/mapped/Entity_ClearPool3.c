/**
 * @brief Clears entity memory pool at 0x800ED018 (0x3C bytes) with memset
 * @note Original: func_8007AC98 at 0x8007AC98
 */
// Entity_ClearPool3



void FUN_8007ac98(void)

{
  FUN_8009a420(0x800ed018,0,0x3c);
  return;
}
