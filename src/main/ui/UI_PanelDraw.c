/**
 * @brief UI panel drawer: renders 9-slice panel with text
 * @note Original: func_8004F514 at 0x8004F514
 */
// UI_PanelDraw



#include "tomba.h"
void UI_PanelDraw(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s32 uVar3;
  s16 sVar4;
  u8 *puVar5;
  int iVar6;
  int iVar7;
  s32 local_34;
  s32 local_30;
  s32 local_2c;
  s32 local_28;
  s32 local_24;
  s32 local_20;
  s32 local_1c;
  
  sVar2 = *(s16 *)(param_1 + 10);
  if (sVar2 == 0) {
    sVar4 = 0x1e;
    if (g_CurrentOverlay == '\x01') {
      sVar4 = 0x10;
    }
  }
  else {
    sVar4 = 1;
    if ((sVar2 < 4) && (sVar4 = 0x14, 1 < sVar2)) {
      sVar4 = 10;
    }
  }
  sVar2 = *(s16 *)(param_1 + 4) + 1;
  *(s16 *)(param_1 + 4) = sVar2;
  if (sVar4 <= sVar2) {
    iVar7 = 0;
    if (0 < *(s16 *)(param_1 + 8)) {
      puVar5 = (u8 *)(param_1 + 0x17);
      iVar6 = param_1 + 0x49;
      do {
        bVar1 = puVar5[-3] + 1;
        puVar5[-3] = bVar1;
        if (bVar1 < 3) {
          if (bVar1 < (u8)puVar5[-2]) {
            local_34 = *(s32 *)(puVar5 + 0x65);
            local_30 = *(s32 *)(puVar5 + 0x69);
            local_2c = *(s32 *)(puVar5 + 0x6d);
            local_28 = *(s32 *)(puVar5 + 0x71);
            local_24 = *(s32 *)(puVar5 + 0x75);
            local_20 = *(s32 *)(puVar5 + 0x79);
            local_1c = *(s32 *)(puVar5 + 0x7d);
            if (*(int *)(puVar5 + 0x61) == 0) {
              UI_TextParser(iVar6,&local_34,puVar5[-3]);
            }
            else {
              uVar3 = String_FindChar(*(int *)(puVar5 + 0x61),puVar5[-3]);
              String_CopyUntil(iVar6,uVar3);
            }
            puVar5[-1] = 1;
            *puVar5 = 0;
          }
        }
        else {
          puVar5[-1] = 2;
          *(s16 *)(puVar5 + 3) = 0x400;
          *(s16 *)(puVar5 + 1) = *(s16 *)(puVar5 + -7);
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 0x8c;
        iVar6 = iVar6 + 0x8c;
      } while (iVar7 < *(s16 *)(param_1 + 8));
    }
    *(s16 *)(param_1 + 4) = 8;
    param_1->flags = 3;
  }
  return;
}
