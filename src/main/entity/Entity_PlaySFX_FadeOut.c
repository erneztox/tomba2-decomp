/**
 * @brief Plays SFX from 2-element table at 0x80015368, sets fade flag 0x800BF84B=0
 * @note Original: func_80042354 at 0x80042354
 */
// Entity_PlaySFX_FadeOut



s32 Entity_PlaySFX_FadeOut(u8 param_1,s8 param_2)

{
  uint uVar1;
  s32 local_20;
  s32 local_1c;
  
  local_20 = DAT_80015368;
  local_1c = DAT_8001536c;
  Sys_SetFlag10();
  DAT_800bf84b = 0;
  uVar1 = 0;
  if (param_2 != '\0') {
    uVar1 = (uint)(u8)(param_2 - 1);
  }
  Audio_PlaySoundEffect(*(u8 *)((int)&local_20 + uVar1),0,0);
  g_CurrentOverlay = param_1;
  return 1;
}
