/**
 * @brief Sets entity rotation angle: entity[0x56] = entity[0x2A] << 4
 * @note Original: func_8003FC78 at 0x8003FC78
 */
// Entity_SetAngleFromState



void FUN_8003fc78(int param_1)

{
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(ushort *)(param_1 + 0x56) = (ushort)*(byte *)(param_1 + 0x2a) << 4;
  return;
}
