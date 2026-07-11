/**
 * @brief Audio callback chain: calls DAT_800ac430 then DAT_800ac42c function ptrs
 * @note Original: func_800909C0 at 0x800909C0
 */
// Audio_CallCallbacks



void FUN_800909c0(void)

{
  if (DAT_800ac430 != (code *)0x0) {
    (*DAT_800ac430)();
  }
  (*(code *)PTR_FUN_800ac42c)();
  return;
}
