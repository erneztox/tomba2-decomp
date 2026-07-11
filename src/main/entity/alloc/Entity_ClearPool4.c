/**
 * @brief Clears entity memory pool at 0x800ED058 (0x40 bytes) with memset
 * @note Original: func_8007AD14 at 0x8007AD14
 */
// Entity_ClearPool4



void FUN_8007ad14(void)

{
  FUN_8009a420(0x800ed058,0,0x40);
  return;
}
