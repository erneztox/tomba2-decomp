/**
 * @brief Audio voice allocator variant 2: finds free voice slot
 * @note Original: func_8008FC10 at 0x8008FC10
 */
// Audio_VoiceAlloc2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_VoiceAlloc2(s16 param_1,s16 param_2,u8 param_3)

{
  u8 uVar1;
  code *pcVar2;
  s32 uVar3;
  int iVar4;
  int iVar5;
  s32 *puVar6;
  
  iVar5 = (int)param_1;
  iVar4 = (int)param_2;
  puVar6 = (s32 *)(*(int *)(&g_AudioChannels + iVar5 * 4) + iVar4 * 0xb0);
  uVar1 = *(u8 *)*puVar6;
  *puVar6 = (u8 *)*puVar6 + 1;
  pcVar2 = _DAT_80104bb8;
  if (param_3 != 0x40) {
    if (param_3 < 0x41) {
      pcVar2 = _DAT_80104bac;
      if (param_3 != 7) {
        if (param_3 < 8) {
          if (param_3 == 0) {
            *(u8 *)((int)puVar6 + 0x26) = uVar1;
          }
          else {
            pcVar2 = _DAT_80104ba8;
            if (param_3 == 6) goto LAB_8008fde8;
          }
        }
        else {
          pcVar2 = _DAT_80104bb0;
          if ((param_3 == 10) || (pcVar2 = _DAT_80104bb4, param_3 == 0xb)) goto LAB_8008fde8;
        }
LAB_8008fe20:
        uVar3 = Audio_AllocVoice((int)param_1,(int)param_2);
        puVar6[0x24] = uVar3;
        return;
      }
    }
    else {
      pcVar2 = _DAT_80104bc0;
      if (param_3 != 99) {
        if (param_3 < 100) {
          pcVar2 = _DAT_80104bcc;
          if ((param_3 != 0x5b) && (pcVar2 = _DAT_80104bbc, param_3 != 0x62)) goto LAB_8008fe20;
        }
        else {
          pcVar2 = _DAT_80104bc8;
          if ((param_3 != 0x65) && (pcVar2 = _DAT_80104bc4, 100 < param_3)) {
            if (param_3 == 0x79) {
              (*_DAT_80104bd0)(iVar5,iVar4);
              return;
            }
            goto LAB_8008fe20;
          }
        }
      }
    }
  }
LAB_8008fde8:
  (*pcVar2)(iVar5,iVar4,uVar1);
  return;
}
