/**
 * @brief Clears entity memory pool at 0x800ED018 (0x3C bytes) with memset
 * @note Original: func_8007AC98 at 0x8007AC98
 */
// Entity_ClearPool3



void Entity_ClearPool3(void)

{
  Mem_Set(0x800ed018,0,0x3c);
  return;
}
