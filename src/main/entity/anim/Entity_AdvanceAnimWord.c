/**
 * @brief Advances an animation data pointer by 4 bytes (word step).
 *        Checks if byte at offset 3 has bit 0x80 (terminator flag).
 *        If set, clears entity[0x40] and entity[0x3C].
 * @note Original: func_80031708 at 0x80031708
 */
// Entity_AdvanceAnimWord

void Entity_AdvanceAnimWord(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 3) & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
    *(int *)(param_1 + 0x40) = iVar1 + 4;
  }
  return;
}
