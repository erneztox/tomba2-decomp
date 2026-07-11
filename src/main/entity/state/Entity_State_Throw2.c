/**
 * @brief Entity throw state variant 2: spawns+throws object
 * @note Original: func_80067A40 at 0x80067A40
 */
// Entity_State_Throw2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Throw2(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  u16 uVar3;
  s32 uVar4;
  u8 auStack_20->kind;
  s16 local_1e;
  s16 local_1a;
  s16 local_16;
  
  Entity_AnimFrame();
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (DAT_800bf80f == '\0') {
      Pad_Init();
      g_TimerFlag = 3;
      param_1->action_state = param_1->action_state + '\x01';
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    param_1->action_state = 1;
    g_TimerFlag = 2;
    DAT_800bf80f = '\x02';
    Entity_OverlayDispatch(param_1,0);
  }
  bVar1 = param_1->sub_action;
  if (bVar1 == 1) {
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
    Entity_CollisionGround();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar2 = param_1->velocity_y + 0x360;
      param_1->velocity_y = sVar2;
      if (0x3e00 < sVar2) {
        param_1->velocity_y = 0x3e00;
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      Entity_CollisionGround(param_1);
      if (param_1->collision_state == '\0') {
        uVar3 = param_1->type_flags & 0xf00;
        if ((((int)param_1->type_flags & 0x8000U) != 0) &&
           ((uVar3 == 0x100 || (uVar3 == 0x200)))) {
          param_1->sub_action = 2;
          Entity_ResetState_2(param_1);
          Entity_LoadAnimIfChanged(param_1,0x71,0);
          Entity_State_Physics(param_1);
          local_1a = _DAT_1f80019e;
          local_1e = param_1->pos_y;
          param_1->velocity_y = 0x2400;
          param_1->rot_z = 0;
          local_16 = param_1->pos_z;
          if (g_GameState == '\0') {
            Entity_SpawnWithPos(0x10d,auStack_20,0xfffffff6);
          }
          else {
            if (g_GameState == '\x06') {
              uVar4 = 0x704;
            }
            else if (g_GameState == '\b') {
              uVar4 = 0x909;
            }
            else {
              if (g_GameState != '\x0e') {
                return;
              }
              uVar4 = 0xf06;
            }
            Entity_SpawnWithFlag(uVar4,auStack_20,0xfffffff6);
          }
        }
      }
      else {
        Entity_ResetState_2(param_1);
        Entity_LoadAnimIfChanged(param_1,0xd2,3);
        param_1->sub_action = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    Entity_State_Shoot(param_1);
  }
  return;
}
