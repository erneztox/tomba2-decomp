/**
 * @brief Updates entity[0x56] angle: conditional wraparound based on entity[0x147] flag
 * @note Original: func_80055284 at 0x80055284
 */
// Entity_UpdateAngle



void FUN_80055284(int param_1)

{
  if (*(char *)(param_1 + 0x147) != '\0') {
    *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
    return;
  }
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x140);
  return;
}
