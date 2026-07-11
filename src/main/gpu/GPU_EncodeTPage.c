/**
 * @brief Encodes texture page parameters: (y<<11)|(x)|0xE5000000 for GPU TPAGE command
 * @note Original: func_80082370 at 0x80082370
 */
// GPU_EncodeTPage



uint GPU_EncodeTPage(uint param_1,uint param_2)

{
  return (param_2 & 0x7ff) << 0xb | param_1 & 0x7ff | 0xe5000000;
}
