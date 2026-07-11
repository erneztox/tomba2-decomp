/**
 * @brief Entity ladder state: entity->action_state dispatch, climb movement
 * @note Original: func_800624B4 at 0x800624B4
 */
// Entity_State_Ladder



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Ladder(u8 *param_1)

{
  s32 uVar1;
  s8 cVar2;
  int iVar3;
  
  param_1->flag_17B = 1;
  g_ActionMode = 2;
  switchparam_1->action_state {
  case 0:
    g_ActionTrigger = 0;
    *param_1 = 6;
    DAT_800bf809 = 1;
    if (param_1->kind == '\0') {
      Entity_StateSwitch(param_1);
      Entity_State_Physics(param_1);
    }
    g_SpriteParam4 = param_1->sprite_param3;
    Entity_SpriteMode2(param_1);
    Pad_InitReset();
    if (param_1->kind == '\0') {
      Entity_PhysicsStep2(param_1);
    }
    param_1->action_state = param_1->action_state + '\x01';
    Entity_AnimFrame(param_1);
    iVar3 = Entity_SpawnNoPos(0x1e,0);
    if (iVar3 != 0) {
      iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    }
    Audio_PlaySoundEffect(0x37,0x16,0x1e);
    param_1->parent = iVar3;
    param_1->timer1 = 5;
    break;
  case 1:
    if (param_1->timer1 != 0) {
      param_1->timer1 = param_1->timer1 + -1;
      return;
    }
    cVar2 = param_1->action_state;
    param_1->flags = 0;
    goto code_r0x8006266c;
  case 2:
    if (_DAT_801fe0e0 != 0) {
      Pad_InitReset();
      return;
    }
    goto LAB_80062664;
  case 3:
    iVar3 = Texture_TransferToVRAM(_DAT_800ed014,
                         *(uint *)(&DAT_800fb170 + (param_1->entity_flags & 0xf) * 8) >> 0xb,
                         *(int *)(&DAT_800fb170 + ((param_1->entity_flags & 0xf) << 3 | 4)) -
                         *(uint *)(&DAT_800fb170 + (param_1->entity_flags & 0xf) * 8));
    if (iVar3 == 0) {
      return;
    }
LAB_80062664:
    cVar2 = param_1->action_state;
code_r0x8006266c:
    param_1->action_state = cVar2 + '\x01';
    break;
  case 4:
    if (g_DMAFlag != '\0') {
      iVar3 = param_1->parent;
      if (iVar3 != 0) {
        iVar3->state = STATE_FINISH;
        iVar3->behavior_state = 0;
      }
      Entity_StateMain3(param_1);
      param_1->flags = 1;
      if (g_CurrentOverlay != '\x01') {
        Engine_DispatchOverlay(g_GameState);
      }
      *param_1 = 3;
      uVar1 = _DAT_1f80023c;
      param_1->timer_172 = 0x1e;
      *(s32 *)(param_1 + 4) = uVar1;
      if (g_CurrentOverlay == '\x02') {
        g_CurrentOverlay = '\0';
      }
      DAT_800bf809 = 0;
    }
  }
  return;
}
