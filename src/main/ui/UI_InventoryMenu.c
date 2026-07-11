/**
 * @brief UI inventory menu: entity->state=1, manages inventory UI
 * @note Original: func_8004CE14 at 0x8004CE14
 */
// UI_InventoryMenu



#include "tomba.h"
#include "overlay.h"
void FUN_8004ce14(u8 *param_1)

{
  u8 bVar1;
  s32 uVar2;
  int iVar3;
  int iVar4;
  s16 *psVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (g_SubState != '\0') {
      param_1->state = STATE_DEAD;
      return;
    }
    param_1->state = 1;
    *param_1 = 1;
    uVar2 = *(s32 *)(&DAT_800a3f00 + (uint)(u8)param_1->sub_type * 4);
    *(s32 *)(param_1 + 0x74) = 0;
    *(s32 *)(param_1 + 0x6c) = uVar2;
    FUN_8004b354(param_1,0);
  }
  if (g_GameState == '\0') {
    if (param_1->sub_type == '\x01') {
      if (DAT_1f800207 < 0x1c) goto LAB_8004cf64;
    }
    else if ((param_1->sub_type != '\x02') || (0x1b < DAT_1f800207)) {
LAB_8004cf64:
      uVar7 = 0;
      pcVar8 = *(char **)(param_1 + 0x6c);
      *(s32 *)(param_1 + 0x70) = 0;
      psVar5 = (s16 *)(pcVar8 + 8);
      do {
        iVar3 = -1;
        if (*pcVar8 != -1) {
          bVar1 = *(u8 *)(psVar5 + -3);
          if ((bVar1 & 0x80) == 0) {
            iVar4 = FUN_8004d7ec((int)psVar5->flags,0);
            iVar3 = 0;
            if (iVar4 != 0) goto LAB_8004cff4;
          }
          uVar6 = 1 << (uVar7 & 0x1f);
          iVar3 = 0;
          if ((*(uint *)(param_1 + 0x74) & uVar6) == 0) {
            if ((bVar1 & 0x80) != 0) {
              iVar4 = FUN_8004d868((int)psVar5->flags,0);
              iVar3 = 0;
              if (iVar4 != 0) goto LAB_8004cff4;
            }
            iVar3 = 0;
            if ((*(uint *)(param_1 + 0x74) & uVar6) == 0) {
              iVar3 = 1;
            }
          }
        }
LAB_8004cff4:
        if (iVar3 < 0) {
          param_1->type_flags = (s16)uVar7;
          param_1->render_flags = 0x1f;
          param_1->flags = 1;
          FUN_80077efc();
          return;
        }
        if (iVar3 != 0) {
          if ((g_GameState == '\x01') && (0xe < g_LevelId)) {
            iVar3 = Overlay_80111ccc((char)psVar5->kind);
          }
          else {
            iVar3 = FUN_80077acc(param_1,(int)psVar5[-2],(int)psVar5[-1],(int)*psVar5);
          }
          if (iVar3 != 0) {
            *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1 << (uVar7 & 0x1f);
          }
        }
        uVar7 = uVar7 + 1;
        psVar5 = psVar5 + 8;
        pcVar8 = pcVar8 + 0x10;
      } while( true );
    }
  }
  else if ((g_GameState != '\x06') || (g_LevelId != 0x13)) goto LAB_8004cf64;
  return;
}
