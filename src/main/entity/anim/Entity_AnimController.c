/**
 * @brief Entity animation controller: manages anim state machine
 * @note Original: func_80072898 at 0x80072898
 */
// Entity_AnimController



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80072898(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  undefined1 *puVar7;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  short local_28->state;
  undefined1 local_20;
  undefined1 local_1f;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    puVar7 = (undefined1 *)(param_1 + 0x44);
    if (*(char *)(param_1->parent + 0x5e) == '\x02') {
      param_1->state = 3;
    }
    else {
      iVar3 = (uint)param_1->anim_timer << 0x10;
      param_1->input_flags = (char)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      local_2f = 0;
      local_30 = 0;
      local_2e = param_1->draw_y;
      local_28->kind = 0;
      local_28->sub_type = 0;
      iVar3 = 0;
      if (0 < param_1->anim_timer) {
        sVar6 = 0;
        do {
          iVar3 = iVar3 + 1;
          local_28->flags = 100;
          local_28->type = sVar6 - (param_1->input_flags - 0xa0);
          local_20 = *puVar7;
          sVar6 = sVar6 + 9;
          local_1f = 0;
          iVar4 = FUN_8009a1f0(&local_20);
          FUN_8007e1b8(local_28,*(undefined4 *)
                                 ((int)&PTR_DAT_80017334 + ((iVar4 + 0x69) * 0x10000 >> 0xe)),
                       param_1->sprite_data,&local_30);
          puVar7 = puVar7 + 1;
        } while (iVar3 < param_1->anim_timer);
      }
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && (*(char *)(param_1->parent + 0x5e) == '\x01')) {
      param_1->state = 1;
      iVar3 = (uint)param_1->anim_timer << 0x10;
      uVar5 = (iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1;
      param_1->input_flags = (char)uVar5;
      if ((param_1->anim_timer & 1) == 0) {
        cVar2 = param_1->input_flags * '\b' + -4;
      }
      else {
        cVar2 = (char)((uVar5 & 0xff) << 3);
      }
      param_1->input_flags = cVar2;
      param_1->sprite_data = _DAT_800ecf58;
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007a624(param_1);
  }
  return;
}
