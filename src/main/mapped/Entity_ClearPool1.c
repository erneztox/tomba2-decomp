/**
 * @brief Clears entity memory pool at 0x800F2418 (0x20C bytes) with memset
 * @note Original: func_8007AC40 at 0x8007AC40
 */
// Entity_ClearPool1



void FUN_8007ac40(void)

{
  FUN_8009a420(0x800f2418,0,0x20c);
  return;
}
