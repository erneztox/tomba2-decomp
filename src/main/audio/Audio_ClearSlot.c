/**
 * @brief Audio slot clearer: zeros word at DAT_800ac448 + index*0x10 if index < 3
 * @note Original: func_80090B98 at 0x80090B98
 */
// Audio_ClearSlot



s32 Audio_ClearSlot(uint param_1)

{
  param_1 = param_1 & 0xffff;
  if (param_1 < 3) {
    *(s16 *)(param_1 * 0x10 + DAT_800ac448) = 0;
  }
  return param_1 < 3;
}
