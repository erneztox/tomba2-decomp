/**
 * @brief Advances an animation data pointer by 1 byte.
 *        Checks if first byte has bit 0x80 (terminator flag).
 *        If set, clears entity[0x40] and entity[0x3C].
 * @note Original: func_80031744 at 0x80031744
 */
// Entity_AdvanceAnimByte

void Entity_AdvanceAnimByte(int param_1)

{
  byte *pbVar1;

  pbVar1 = *(byte **)(param_1 + 0x3c);
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
    *(byte **)(param_1 + 0x40) = pbVar1 + 1;
  }
  return;
}
