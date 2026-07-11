/**
 * @brief Calculates MDEC frame size from header fields (e3, e9, ec)
 * @note Original: func_80088210 at 0x80088210
 */
// MDEC_CalcFrameSize



int FUN_80088210(int param_1)

{
  return ((int)(*(u8 *)(param_1 + 0xe3) + 1) >> 1) * 4 +
         ((uint)param_1->state * 5 + 3 & 0xffc) + 4 + (uint)param_1->state;
}
