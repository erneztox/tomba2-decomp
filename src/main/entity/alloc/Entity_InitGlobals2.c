/**
 * @brief Entity globals init: copies 0x800FB166-167 to 0x800BFE4C-4E, sets related flags
 * @note Original: func_8007B38C at 0x8007B38C
 */
// Entity_InitGlobals2



void Entity_InitGlobals2(void)

{
  DAT_800bfe4c = DAT_800fb166;
  DAT_800bf8a3 = DAT_800fb161;
  DAT_800bfe4e = DAT_800fb162;
  DAT_800bfe4f = DAT_800fb163;
  DAT_800bf88a = DAT_800fb164;
  DAT_800bf88b = DAT_800fb165;
  DAT_800bfe4d = DAT_800fb167;
  Pad_InitConfig(DAT_800fb166);
  return;
}
