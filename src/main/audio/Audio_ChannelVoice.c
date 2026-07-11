/**
 * @brief Audio channel voice handler: sets voice params from struct
 * @note Original: func_8008EC60 at 0x8008EC60
 */
// Audio_ChannelVoice



#include "tomba.h"
void FUN_8008ec60(s16 param_1,s16 param_2,s8 param_3)

{
  u8 bVar1;
  s32 uVar2;
  s32 *puVar3;
  
  puVar3 = (s32 *)(*(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0);
  if (param_3 == '\x14') {
    *(u8 *)((int)puVar3 + 0x1b) = 0x14;
    puVar3->flags = 1;
    uVar2 = FUN_80090160();
    puVar3[0x24] = uVar2;
    puVar3->flags = *puVar3;
  }
  else {
    if (param_3 == '\x1e') {
      bVar1 = *(u8 *)((int)puVar3 + 0x1d);
      *(u8 *)((int)puVar3 + 0x1b) = 0x1e;
      if (bVar1 != 0) {
        if (0x7e < bVar1) {
          FUN_80090160();
          puVar3[0x24] = 0;
          *puVar3 = puVar3->flags;
          return;
        }
        *(u8 *)((int)puVar3 + 0x1d) = bVar1 - 1;
        uVar2 = FUN_80090160();
        puVar3[0x24] = uVar2;
        if (*(s8*)((int)puVar3 + 0x1d) != '\0') {
          *puVar3 = puVar3->flags;
          return;
        }
        *(u8 *)((int)puVar3 + 0x15) = 0;
        return;
      }
      *(u8 *)((int)puVar3 + 0x15) = 0;
    }
    else {
      *(s8*)((int)puVar3 + 0x1b) = param_3;
      *(s8*)((int)puVar3 + 0x1f) = *(s8*)((int)puVar3 + 0x1f) + '\x01';
    }
    uVar2 = FUN_80090160((int)param_1,(int)param_2);
    puVar3[0x24] = uVar2;
  }
  return;
}
