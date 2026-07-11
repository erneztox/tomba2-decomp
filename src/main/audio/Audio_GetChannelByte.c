/**
 * @brief Audio channel getter: returns u8 at channel[param2]+0x14 from struct ptr table
 * @note Original: func_8008E0C0 at 0x8008E0C0
 */
// Audio_GetChannelByte



u8 FUN_8008e0c0(int param_1,s16 param_2)

{
  return *(u8 *)
          (*(int *)(&g_AudioChannels + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0 + 0x14);
}
