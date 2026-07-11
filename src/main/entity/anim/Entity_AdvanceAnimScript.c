/**
 * @brief Advances an animation script pointer by scanning for a terminator.
 *        Walks entity[0x34] forward by 8-byte steps until finding a word
 *        with bit 0x40000000 or 0x80000000 set (terminator marker).
 *        If 0x40000000 found, resets entity[0x38]=0 (end of animation).
 * @note Original: func_80031780 at 0x80031780
 */
// Entity_AdvanceAnimScript

void Entity_AdvanceAnimScript(int param_1)

{
  uint *puVar1;
  int iVar2;

  iVar2 = param_1->scale_y;
  if (iVar2 != 0) {
    do {
      puVar1 = (uint *)(iVar2 + 4);
      iVar2 = iVar2 + 8;
    } while ((*puVar1 & 0xc0000000) == 0);
    if ((*puVar1 & 0x40000000) != 0) {
      // End of animation reached
      param_1->anim_data = 0;
      param_1->scale_y = 0;
      return;
    }
    param_1->anim_data = iVar2;
  }
  return;
}
