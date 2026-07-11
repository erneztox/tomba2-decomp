/**
 * @brief Entity physics state: entity[0x29]=0, checks entity[0x147] dir, sets angle
 * @note Original: func_800551C4 at 0x800551C4
 */
// Entity_State_Physics



void FUN_800551c4(int param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (*(char *)(param_1 + 0x147) != '\0') {
      *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
      return;
    }
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x140);
  }
  else if (*(char *)(param_1 + 0x147) == '\0') {
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x140);
    if (*(char *)(param_1 + 0x145) == '\0') {
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x142) >> 1;
      return;
    }
  }
  else {
    *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
    if (*(char *)(param_1 + 0x145) == '\0') {
      *(ushort *)(param_1 + 0x58) = 0x1000U - (*(short *)(param_1 + 0x142) >> 1) & 0xfff;
      return;
    }
  }
  return;
}
