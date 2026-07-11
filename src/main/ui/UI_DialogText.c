/**
 * @brief UI dialog text handler: parses 48-u8 buffer, draws text
 * @note Original: func_8004F184 at 0x8004F184
 */
// UI_DialogText



#include "tomba.h"
void UI_DialogText(int param_1,int *param_2)

{
  s8 cVar1;
  u16 uVar2;
  u8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  s16 *psVar7;
  int *piVar8;
  u8 auStack_50 [48];
  u16 local_20->state;
  
  psVar7 = (s16 *)(param_1 + *(s16 *)(param_1 + 8) * 0x8c + 0xc);
  UI_ClearElement(psVar7);
  puVar3 = (u8 *)*param_2;
  local_20->type = 0;
  if (puVar3 == (u8 *)0x0) {
    puVar3 = auStack_50;
    piVar8 = param_2 + 1;
    *(u8 *)((int)psVar7 + 9) = 0;
    local_20->type = UI_TextParser(puVar3,piVar8,2);
    if (local_20->type != 0) {
      *(s8*)((int)psVar7 + 9) = *(s8*)((int)psVar7 + 9) + '\x01';
    }
    uVar2 = UI_TextParser(puVar3,piVar8,1);
    if ((s16)local_20->type < (s16)uVar2) {
      local_20->type = uVar2;
    }
    if (uVar2 != 0) {
      *(s8*)((int)psVar7 + 9) = *(s8*)((int)psVar7 + 9) + '\x01';
    }
    uVar2 = UI_TextParser(puVar3,piVar8,0);
    if ((s16)local_20->type < (s16)uVar2) {
      local_20->type = uVar2;
    }
    if (uVar2 == 0) goto LAB_8004f2b8;
    cVar1 = *(s8*)((int)psVar7 + 9) + '\x01';
  }
  else {
    cVar1 = UI_DrawTextLine(puVar3,local_20);
  }
  *(s8*)((int)psVar7 + 9) = cVar1;
LAB_8004f2b8:
  String_CopyUntil(psVar7 + 8,puVar3);
  iVar4 = param_2->flags;
  iVar5 = param_2->kind;
  iVar6 = param_2->sub_type;
  *(int *)(psVar7 + 0x36) = *param_2;
  psVar7->anim_data = iVar4;
  *(int *)(psVar7 + 0x3a) = iVar5;
  psVar7->sprite_data = iVar6;
  iVar4 = param_2->behavior_state;
  iVar5 = param_2->action_state;
  iVar6 = param_2->sub_action;
  *(int *)(psVar7 + 0x3e) = param_2->state;
  *(int *)(psVar7 + 0x40) = iVar4;
  *(int *)(psVar7 + 0x42) = iVar5;
  *(int *)(psVar7 + 0x44) = iVar6;
  iVar4 = (uint)local_20->type << 0x10;
  if ((local_20->type & 1) != 0) {
    iVar4 = local_20->type + 1;
    local_20->type = (u16)iVar4;
    iVar4 = iVar4 * 0x10000;
  }
  *psVar7 = 0xa0 - (s16)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
  psVar7->flags = 0x8c;
  psVar7->kind = local_20->type;
  psVar7->sub_type = 8;
  *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) + 1;
  return;
}
