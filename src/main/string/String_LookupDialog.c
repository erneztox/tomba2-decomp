/**
 * @brief Looks up dialog string from nested tables at 0x800A55B0/0x800A2B84
 * @note Original: func_80078798 at 0x80078798
 */
// String_LookupDialog



void * FUN_80078798(uint param_1,uint param_2)

{
  return (&PTR_s_Town_of_the_Fishermen_800a2b84)
         [(uint)(u8)(&DAT_800a55b0)[param_1] +
          ((*(u16 *)((&PTR_DAT_800a54a8)[param_1 & 0xff] + (param_2 & 0xff) * 8 + 6) & 0x600) >>
          9)];
}
