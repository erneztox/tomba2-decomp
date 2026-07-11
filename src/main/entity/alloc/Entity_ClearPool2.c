/**
 * @brief Clears entity memory pool at 0x80100660 (0x30 bytes) with memset
 * @note Original: func_8007AC6C at 0x8007AC6C
 */
// Entity_ClearPool2



void FUN_8007ac6c(void)

{
  FUN_8009a420(&DAT_80100660,0,0x30);
  return;
}
