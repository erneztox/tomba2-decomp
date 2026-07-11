/**
 * @brief Resets audio system: clears flag 0x800BE22A, calls reset if channels active
 * @note Original: func_80074EEC at 0x80074EEC
 */
// Audio_ResetSystem



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_ResetSystem(void)

{
  DAT_800be22a = 0;
  if (3 < _DAT_800bed80) {
    Audio_ReleaseChannel();
  }
  return;
}
