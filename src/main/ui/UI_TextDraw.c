/**
 * @brief UI text drawer: formats text with escape codes, draws to screen
 * @note Original: func_8004EE88 at 0x8004EE88
 */
// UI_TextDraw



#include "tomba.h"
void UI_TextDraw(int param_1)

{
  s32 *puVar1;
  u16 uVar2;
  s32 *puVar3;
  s32 *puVar4;
  s32 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  s32 uVar9;
  s32 uVar10;
  s32 uVar11;
  
  uVar2 = *(s16 *)(param_1 + 8) - 1;
  *(u16 *)(param_1 + 8) = uVar2;
  iVar6 = 0;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    iVar8 = 0x8c;
    iVar7 = param_1;
    do {
      puVar4 = (s32 *)(param_1 + iVar8 + 0xc);
      puVar1 = (s32 *)(iVar7 + 0xc);
      do {
        puVar5 = puVar1;
        puVar3 = puVar4;
        uVar9 = puVar3->flags;
        uVar10 = puVar3->kind;
        uVar11 = puVar3->sub_type;
        *puVar5 = *puVar3;
        puVar5->flags = uVar9;
        puVar5->kind = uVar10;
        puVar5->sub_type = uVar11;
        puVar4 = puVar3 + 4;
        puVar1 = puVar5 + 4;
      } while (puVar4 != (s32 *)(param_1 + iVar8 + 0x8c));
      iVar8 = iVar8 + 0x8c;
      uVar9 = puVar3->behavior_state;
      uVar10 = puVar3->action_state;
      puVar5->state = *puVar4;
      puVar5->behavior_state = uVar9;
      puVar5->action_state = uVar10;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x8c;
    } while (iVar6 < *(s16 *)(param_1 + 8));
  }
  UI_ClearElement(param_1 + iVar6 * 0x8c + 0xc);
  return;
}
