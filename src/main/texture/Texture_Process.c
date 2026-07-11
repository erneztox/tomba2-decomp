/**
 * @brief Texture processor: reads texture flags, dispatches upload/decode
 * @note Original: func_80044F58 at 0x80044F58
 */
// Texture_Process



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80044f58(void)

{
  s32 *puVar1;
  uint uVar2;
  s32 *puVar3;
  int iVar4;
  u8 *puVar5;
  
  if (_g_CurrentEntity->sprite_param1 == '\x02') {
    uVar2 = 4;
    if (((int)(uint)_DAT_800bfe56 >> (_g_CurrentEntity->sprite_param2 & 0x1f) & 1U) != 0) {
      uVar2 = 0x1a;
    }
    iVar4 = DAT_800be0f0 + (uint)_g_CurrentEntity->sprite_param2;
  }
  else {
    uVar2 = (uint)_g_CurrentEntity->sprite_param2;
    iVar4 = DAT_800be0f0;
  }
  FUN_8001dc40(&DAT_800ef478,iVar4 + uVar2,0x800);
  puVar5 = &DAT_800ef478;
  FUN_8001dc40(0x8018a000,DAT_800be0f8 + (_DAT_800ef478 >> 0xb),_DAT_800ef47c - _DAT_800ef478);
  FUN_80044e84(0x8018a000,0x1fd000);
  iVar4 = 0;
  puVar3 = (s32 *)&DAT_800fb170;
  do {
    puVar1 = (s32 *)(puVar5 + 0x100);
    puVar5 = puVar5 + 4;
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 < 0x2a);
  if (_g_CurrentEntity->sprite_param1 == '\0') {
    g_DMAFlag = 1;
    FUN_80051fb4();
  }
  return;
}
