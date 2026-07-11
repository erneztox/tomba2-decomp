/**
 * @brief Entity globals save: reverses InitGlobals2, writes back 0x800BFE4C-F to 0x800FB160-7
 * @note Original: func_8007B3F4 at 0x8007B3F4
 */
// Entity_SaveGlobals



void FUN_8007b3f4(void)

{
  DAT_800fb166 = DAT_800bfe4c;
  DAT_800fb161 = DAT_800bf8a3;
  DAT_800fb162 = DAT_800bfe4e;
  DAT_800fb163 = DAT_800bfe4f;
  DAT_800fb164 = DAT_800bf88a;
  DAT_800fb165 = DAT_800bf88b;
  DAT_800fb167 = DAT_800bfe4d;
  FUN_8007b2c0(DAT_800bfe4c);
  return;
}
