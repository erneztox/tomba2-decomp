/**
 * @brief Texture uploader: sends texture data to VRAM via DMA
 * @note Original: func_800452C0 at 0x800452C0
 */
// Texture_Upload



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800452c0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  u8 uVar5;
  
  if (_g_CurrentEntity->sprite_param1 == '\0') {
    uVar2 = 1 << (_g_CurrentEntity->sprite_param2 & 0x1f);
    if (((uint)DAT_1f8001ff == (uint)_g_CurrentEntity->sprite_param2) &&
       ((_DAT_800bfe56 & uVar2) == (_DAT_1f800278 & uVar2))) {
      FUN_80045258((_DAT_800bf89e & 0xf) << 1,0x2f);
      DAT_1f800206 = 0;
      g_DMAFlag = 1;
      FUN_80051fb4();
    }
  }
  FUN_8001cf2c();
  while (_DAT_801fe0e0 != 0) {
    FUN_80051f80(1);
  }
  _g_CurrentEntity->sprite_param1 = 2;
  DAT_1f8001ff = _g_CurrentEntity->sprite_param2;
  _DAT_1f800278 = _DAT_800bfe56;
  DAT_800bf872 = _g_CurrentEntity->sprite_param2;
  g_GameState = _g_CurrentEntity->sprite_param2;
  FUN_80045080(0x80108f9c,g_GameState + '\x03');
  FUN_8007566c(g_GameState,_DAT_1f80022c);
  FUN_80044f58();
  DAT_800a3ec8 = _DAT_800ef480 >> 0xb;
  FUN_8001dc40(0x8018a000,DAT_800be100 + DAT_800a3ec8,_DAT_800ef484 - _DAT_800ef480);
  if (DAT_800bf89c == '\x02') {
    FUN_80045558(0);
  }
  FUN_80045258((_DAT_800bf89e & 0xf) << 1,0x2f);
  iVar1 = _DAT_800ef488;
  puVar4 = (uint *)&DAT_800ef48c;
  iVar3 = 0;
  if (0 < _DAT_800ef488) {
    do {
      iVar3 = iVar3 + 1;
      *(uint *)(&g_OT_Data + (*puVar4 >> 0x18) * 4) = (*puVar4 & 0xffffff) + 0x8018a000;
      puVar4 = puVar4 + 1;
    } while (iVar3 < iVar1);
  }
  if (g_GameState == '\b') {
    _DAT_800ecf94 = _DAT_800ecf94 + 0x11000;
    uVar5 = 0x22;
    if (((8 < g_LevelId) && (uVar5 = 0x26, 0xf < g_LevelId)) &&
       (uVar5 = 0x28, g_LevelId < 0x15)) {
      uVar5 = 0x24;
    }
    FUN_80045258(uVar5,8);
    DAT_800bfe60 = uVar5;
  }
  DAT_1f800206 = 1;
  g_DMAFlag = 1;
  FUN_80051fb4();
  return;
}
