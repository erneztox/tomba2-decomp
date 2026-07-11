/**
 * @brief Sends GPU command with bit 28 set, returns GPU read response
 * @note Original: func_80082CB0 at 0x80082CB0
 */
// GPU_SendCommandAndRead



uint GPU_SendCommandAndRead(uint param_1)

{
  *DAT_800a5aa8 = param_1 | 0x10000000;
  return *DAT_800a5aa4 & 0xffffff;
}
