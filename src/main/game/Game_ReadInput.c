/**
 * @brief Reads combined input state: checks 0x800E7E68 against 0x1F800172/0x1F800174
 * @note Original: func_80055864 at 0x80055864
 */
// Game_ReadInput



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Game_ReadInput(void)

{
  uint uVar1;
  
  if (g_State230 != '\0') {
    return 0;
  }
  uVar1 = (uint)((_g_PadState & _g_InputMask) != 0) << 1;
  if ((_g_PadState & _DAT_1f800174) != 0) {
    uVar1 = uVar1 | 1;
  }
  return uVar1;
}
