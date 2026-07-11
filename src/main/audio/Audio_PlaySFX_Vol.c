/**
 * @brief Plays sound effect with volume only (wraps Audio_PlaySoundEffect)
 * @note Original: func_80074810 at 0x80074810
 */
// Audio_PlaySFX_Vol



void Audio_PlaySFX_Vol(u8 param_1,s8 param_2)

{
  Audio_PlaySoundEffect(param_1,(int)param_2,0);
  return;
}
