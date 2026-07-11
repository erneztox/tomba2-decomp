/**
 * @brief Sends raw 32-bit command to GPU register and stores shadow copy
 * @note Original: func_80082BF0 at 0x80082BF0
 */
// GPU_SendCommand



void FUN_80082bf0(uint param_1)

{
  *DAT_800a5aa8 = param_1;
  *(char *)((param_1 >> 0x18) + 0x80100b28) = (char)param_1;
  return;
}
