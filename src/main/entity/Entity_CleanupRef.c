/**
 * @brief Cleans up entity reference: deallocs if ref exists, clears pointer
 * @note Original: func_80034634 at 0x80034634
 */
// Entity_CleanupRef



void Entity_CleanupRef(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    Entity_Dealloc();
    *(s32 *)(param_1 + 0x28) = 0;
  }
  return;
}
