/**
 * @brief Sends MDEC set bitstream command (0x4B)
 * @note Original: func_80088AE8 at 0x80088AE8
 */
// MDEC_CmdSetBS



void FUN_80088ae8(int param_1)

{
  *(u8 *)(param_1 + 0x37) = 0x4b;
  *(s32 *)(param_1 + 0x2c) = 0;
  *(u8 *)(param_1 + 0x36) = 0;
  return;
}
