/**
 * @brief Plays sound effect with volume and pan (wraps Audio_PlaySoundEffect)
 * @note Original: func_8007483C at 0x8007483C
 */
// Audio_PlaySFX_VolPan



void Audio_PlaySFX_VolPan(u8 param_1,s8 param_2,s8 param_3)

{
  Audio_PlaySoundEffect(param_1,(int)param_2,(int)param_3);
  return;
}
