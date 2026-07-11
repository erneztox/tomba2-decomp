/**
 * @brief Clears render queue buffer at 0x800BF548 (700 bytes) with memset
 * @note Original: func_8004FB20 at 0x8004FB20
 */
// Render_ClearQueue



void Render_ClearQueue(void)

{
  Mem_Set(&DAT_800bf548,0,700);
  return;
}
