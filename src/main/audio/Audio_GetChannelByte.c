/**
 * @brief Audio channel getter: returns byte at channel[param2]+0x14 from struct ptr table
 * @note Original: func_8008E0C0 at 0x8008E0C0
 */
// Audio_GetChannelByte



undefined1 FUN_8008e0c0(int param_1,short param_2)

{
  return *(undefined1 *)
          (*(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0 + 0x14);
}
