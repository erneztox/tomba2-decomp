/**
 * @brief Plays a sound effect with volume and pan parameters.
 *        Routes to either global or level-specific sound tables.
 *        Opcodes >= 0x70 handle BGM/SE bank switching via FUN_80074bf8.
 * @note Original: func_80074590 at 0x80074590
 */
// Audio_PlaySoundEffect

#include "tomba.h"
s32 Audio_PlaySoundEffect(uint param_1,s8 param_2,s8 param_3)

{
  s16 sVar1;
  int iVar2;
  s32 uVar3;
  u8 bVar4;
  s8 cVar5;
  char *pcVar6;

  if ((int)(param_1 << 0x18) < 0) {
    if (0xe0 < (param_1 & 0xff)) {
      return 0;
    }
    // Level-specific sound table
    pcVar6 = (s8*)(*(int *)(&DAT_800a4ef8 + (uint)g_GameState * 4) + (param_1 & 0x7f) * 8);
    cVar5 = *pcVar6;
    if (cVar5 != '\x04') {
      bVar4 = 0x80;
      if (g_CurrentOverlay == '\0') goto LAB_8007472c;
      cVar5 = '\x01';
    }
    bVar4 = 0x80;
  }
  else {
    param_1 = param_1 & 0xff;
    if (0x6f < param_1) {
      switch(param_1) {
      case 0x70: FUN_80074bf8(2);  return 0;
      case 0x71: FUN_80074bf8(3);  return 0;
      case 0x72: FUN_80074bf8(4);  return 0;
      case 0x73: FUN_80074bf8(5);  return 0;
      case 0x74: FUN_80074bf8(6);  return 0;
      case 0x75: FUN_80074bf8(7);  return 0;
      case 0x76:
      case 0x7a: FUN_80074bf8(10); return 0;
      case 0x77:
      case 0x7b: FUN_80074bf8(0xb); return 0;
      case 0x78:
      case 0x7c: FUN_80074bf8(0xc); return 0;
      case 0x79: FUN_80074bf8(0xd); return 0;
      default:   return 0;
      case 0x7f: FUN_80074eec();   return 0;
      }
    }
    // Global sound table
    pcVar6 = &DAT_800a4d18 + param_1 * 8;
    cVar5 = *pcVar6;
    if (cVar5 != '\x04') {
      bVar4 = 0;
      if (g_CurrentOverlay == '\0') goto LAB_8007472c;
      cVar5 = '\x01';
    }
    bVar4 = 0;
  }
LAB_8007472c:
  if (DAT_800fb165 != 0) {
    iVar2 = ((int)((((int)pcVar6->flags + (int)param_3) * 0x10000 >> 0x10) * (uint)DAT_800fb165 *
                  0x10000) >> 0x10) / 9;
    sVar1 = (s16)iVar2;
    iVar2 = iVar2 * 0x10000 >> 0x10;
    if (-1 < iVar2) {
      if (0x7f < iVar2) {
        sVar1 = 0x7f;
      }
      goto LAB_800747b8;
    }
  }
  sVar1 = 0;
LAB_800747b8:
  uVar3 = FUN_80075e04(cVar5,pcVar6->flags,pcVar6->flags,pcVar6->flags | bVar4,(int)pcVar6->flags + (int)param_2,
                       pcVar6->flags,(int)sVar1,(int)sVar1);
  return uVar3;
}
