/**
 * @brief Plays sound effect with volume only (wraps Audio_PlaySoundEffect)
 * @note Original: func_80074810 at 0x80074810
 */
// Audio_PlaySFX_Vol



void FUN_80074810(u8 param_1,s8 param_2)

{
  FUN_80074590(param_1,(int)param_2,0);
  return;
}
