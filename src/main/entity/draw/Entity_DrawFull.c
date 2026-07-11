/**
 * @brief Entity full drawer: processes sprite + GTE projection
 * @note Original: func_8003791C at 0x8003791C
 */
// Entity_DrawFull



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_DrawFull(int param_1,u8 param_2)

{
  s16 *psVar1;
  s16 sVar2;
  uint uVar3;
  int iVar4;
  s32 uVar5;
  void *puVar6;
  s16 *puVar7;
  void **ppuVar8;
  int iVar9;
  int iVar10;
  u8 *puVar11;
  u8 local_38;
  u8 local_37;
  s16 local_36;
  s16 local_30;
  s16 local_2e;
  s32 local_2c;
  
  local_38 = 0;
  local_36 = 0;
  local_30 = 0x58;
  local_2c = 0;
  local_2e = (u16)*(u8 *)(param_1 + 0x2d) * 0x14 + 0x49;
  puVar11 = &DAT_800d1e68;
  local_37 = param_2;
  GPU_SpriteDrawMain(&local_30,PTR_DAT_800174c8,*(s32 *)(param_1 + 4),&local_38);
  puVar7 = &DAT_800a2698;
  do {
    if (puVar7->behavior_state == 0) {
      local_30 = *puVar7;
      local_2e = puVar7->flags;
LAB_80037a00:
      local_2c = *(s32 *)(puVar7 + 2);
    }
    else {
      if (puVar7->behavior_state == 1) {
        local_30 = *puVar7;
        local_2e = puVar7->flags + _DAT_800d1e68 * 0x14;
        goto LAB_80037a00;
      }
      local_30 = *puVar7;
      local_2e = puVar7->flags;
      local_2c = CONCAT22(puVar7->sub_type + _DAT_800d1e68 * 0x15,puVar7->kind);
    }
    psVar1 = puVar7 + 4;
    puVar7 = puVar7 + 6;
    GPU_SpriteDrawMain(&local_30,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_38);
    if (-0x7ff5d8fd < (int)puVar7) {
      iVar10 = 0;
      if (0 < _DAT_800d1e68) {
        iVar9 = 0;
        do {
          sVar2 = *(s16 *)(puVar11 + 2);
          ppuVar8 = &PTR_s_The_Starting_Beach_800a2b64 + sVar2;
          uVar3 = UI_StringParse(*ppuVar8);
          iVar4 = Game_CheckArea((int)sVar2);
          if (iVar4 == 0) {
            puVar6 = *ppuVar8;
            uVar5 = 0;
          }
          else {
            puVar6 = *ppuVar8;
            uVar5 = 8;
          }
          iVar4 = iVar9 + ((int)~uVar3 >> 0x1f & 4U) + 0x40;
          iVar9 = iVar9 + 0x14;
          GPU_RenderSprite_V2(0x24,iVar4 * 0x10000 >> 0x10,uVar5,puVar6,0);
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 0xc;
        } while (iVar10 < _DAT_800d1e68);
      }
      return;
    }
  } while( true );
}
