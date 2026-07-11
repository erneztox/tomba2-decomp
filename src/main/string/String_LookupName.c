/**
 * @brief Looks up name/label string from table at 0x800A2B64 by type index
 * @note Original: func_800787F8 at 0x800787F8
 */
// String_LookupName



void * String_LookupName(int param_1)

{
  return (&PTR_s_The_Starting_Beach_800a2b64)[(u8)(&DAT_800a55c8)[param_1]];
}
