/**
 * @brief Triggers collectible/event: marks as collected, updates global counters
 * @note Original: func_80040B48 at 0x80040B48
 */
// Event_TriggerCollectible



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 Event_TriggerCollectible(int param_1)

{
  s32 uVar1;
  int iVar2;
  
  if (_g_FrameCounter == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if (*(s8*)(param_1 + -0x7ff4074c) == '\0') {
      *(u8 *)(param_1 + -0x7ff4074c) = 1;
      _DAT_800bf8a8 = _DAT_800bf8a8 + 1;
      iVar2 = Entity_GetTypeData(param_1,0);
      _DAT_800bf874 = _DAT_800bf874 + iVar2;
      (&DAT_800ed06e)[DAT_800ed06d] = (char)param_1;
      (&DAT_800ed074)[DAT_800ed06d] = 0;
      uVar1 = 1;
      DAT_800ed06d = DAT_800ed06d + 1;
    }
  }
  return uVar1;
}
