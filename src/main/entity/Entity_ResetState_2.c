/**
 * @brief Resets entity state to default/clear
 * @note Original address: 0x80039F4C
 */
// Entity_ResetState

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_ResetState(int param_1)

{
  uint *puVar1;
  s16 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  s16 local_68;
  s16 local_66;
  s16 local_64;
  s16 local_60;
  s16 local_5e;
  s16 local_5c;
  s16 local_58;
  s16 local_56;
  s16 local_54;
  s16 local_50;
  s16 local_4e;
  s16 local_4c;
  s8 local_48 [32];
  u8 auStack_28->counter1;
  
  Entity_ProcessAnimation(param_1,1);
  local_66 = 0xfff9;
  local_5e = 0xfff9;
  local_68 = 0xfffd;
  local_64 = 0xffff;
  local_60 = 5;
  local_5c = 0xffff;
  local_58 = 0xfffd;
  local_56 = 9;
  local_54 = 0xffff;
  local_50 = 5;
  local_4e = 9;
  local_4c = 0xffff;
  if (param_1->sub_type == '\x02') {
    pcVar6 = local_48;
    String_Copy(pcVar6,PTR_s_Clear_800a3a8c);
    String_FindChar2(pcVar6,&DAT_80014a1c);
  }
  else {
    pcVar6 = (&PTR_DAT_800a33cc)[param_1->draw_x * 3];
  }
  iVar5 = 0;
  if ((param_1->counter2 != '\0') && (iVar7 = param_1, param_1->counter1 != '\0')) {
    while (*pcVar6 != '\0') {
      iVar3 = Font_BuildChar(pcVar6,_g_OT_Buffer);
      puVar1 = _g_OT_Buffer;
      if (iVar3 != -1) {
        _g_OT_Buffer = _g_OT_Buffer + 10;
        GTE_LoadMatrix5(iVar7->sprite_ptr1 + 0x18);
        GTE_LoadTranslation(iVar7->sprite_ptr1 + 0x18);
        iVar3 = GTE_RTPS(puVar1,&local_68,auStack_28);
        if (((-1 < iVar3 + -1) &&
            (((((u16)puVar1->kind < 0x140 || ((u16)puVar1->state < 0x140)) ||
              ((u16)puVar1->action_state < 0x140)) || ((u16)puVar1->counter1 < 0x140)))) &&
           (((*(u16 *)((int)puVar1 + 10) < 0xf0 || (*(u16 *)((int)puVar1 + 0x12) < 0xf0)) ||
            ((*(u16 *)((int)puVar1 + 0x1a) < 0xf0 || (*(u16 *)((int)puVar1 + 0x22) < 0xf0)))))
           ) {
          *(u8 *)((int)puVar1 + 7) = 0x2d;
          *(s16 *)((int)puVar1 + 0x16) = 0x1f;
          uVar2 = 0x7dff;
          if (param_1->sub_type == '\x02') {
            uVar2 = 0x7c7f;
          }
          *(s16 *)((int)puVar1 + 0xe) = uVar2;
          puVar4 = (uint *)(_g_EntityBuffer + (iVar3 + -1) * 4);
          *puVar1 = *puVar4 | 0x9000000;
          *puVar4 = (uint)puVar1;
        }
      }
      iVar5 = iVar5 + 1;
      pcVar6 = pcVar6 + 1;
      if ((int)(uint)param_1->counter2 <= iVar5) {
        return;
      }
      iVar7 = iVar7 + 4;
      if ((int)(uint)param_1->counter1 <= iVar5) {
        return;
      }
    }
  }
  return;
}

