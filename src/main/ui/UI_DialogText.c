/**
 * @brief UI dialog text handler: parses 48-byte buffer, draws text
 * @note Original: func_8004F184 at 0x8004F184
 */
// UI_DialogText



#include "tomba.h"
void FUN_8004f184(int param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int *piVar8;
  undefined1 auStack_50 [48];
  ushort local_20->state;
  
  psVar7 = (short *)(param_1 + *(short *)(param_1 + 8) * 0x8c + 0xc);
  FUN_8004ee50(psVar7);
  puVar3 = (undefined1 *)*param_2;
  local_20->type = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = auStack_50;
    piVar8 = param_2 + 1;
    *(undefined1 *)((int)psVar7 + 9) = 0;
    local_20->type = FUN_8004f058(puVar3,piVar8,2);
    if (local_20->type != 0) {
      *(char *)((int)psVar7 + 9) = *(char *)((int)psVar7 + 9) + '\x01';
    }
    uVar2 = FUN_8004f058(puVar3,piVar8,1);
    if ((short)local_20->type < (short)uVar2) {
      local_20->type = uVar2;
    }
    if (uVar2 != 0) {
      *(char *)((int)psVar7 + 9) = *(char *)((int)psVar7 + 9) + '\x01';
    }
    uVar2 = FUN_8004f058(puVar3,piVar8,0);
    if ((short)local_20->type < (short)uVar2) {
      local_20->type = uVar2;
    }
    if (uVar2 == 0) goto LAB_8004f2b8;
    cVar1 = *(char *)((int)psVar7 + 9) + '\x01';
  }
  else {
    cVar1 = FUN_8004efc0(puVar3,local_20);
  }
  *(char *)((int)psVar7 + 9) = cVar1;
LAB_8004f2b8:
  FUN_8004ef54(psVar7 + 8,puVar3);
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
    local_20->type = (ushort)iVar4;
    iVar4 = iVar4 * 0x10000;
  }
  *psVar7 = 0xa0 - (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
  psVar7->flags = 0x8c;
  psVar7->kind = local_20->type;
  psVar7->sub_type = 8;
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  return;
}
