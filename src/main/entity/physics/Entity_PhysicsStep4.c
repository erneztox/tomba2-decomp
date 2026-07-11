/**
 * @brief Entity physics step variant 4: different collision path
 * @note Original: func_8005AEE4 at 0x8005AEE4
 */
// Entity_PhysicsStep4



#include "tomba.h"
void Entity_PhysicsStep4(int param_1)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  Entity_PhysicsUpdate(param_1,1);
  Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
  Entity_ApplyVelocity(param_1,1);
  Entity_PhysicsStep2(param_1);
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar2 = Entity_AnimFrame(param_1);
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
        Entity_CollisionGround(param_1);
        iVar3 = Entity_StateDispatch3(param_1);
        if (((iVar3 == 0) && (iVar4 = Entity_StateControl(param_1), iVar4 == 0)) &&
           (iVar3 = Entity_Behavior_Jump_2(param_1), iVar3 == 0)) {
          bVar1 = param_1->behavior_flags & 0xe;
          param_1->behavior_flags = bVar1;
          param_1->behavior_flags = bVar1 | param_1->direction;
          if ((*(u8 *)(param_1 + 0x149) & 2) == 0) {
            param_1->behavior_state = 1;
            param_1->action_state = 0;
            Entity_StateMain(param_1,1);
            Entity_Behavior_SpawnAtOffset(param_1,param_1 + 0x2c,0);
          }
          else if (iVar2 == 1) {
            param_1->behavior_state = 0;
            param_1->action_state = 0;
            param_1->sub_action = 0;
            if (param_1->state_165 == '\0') {
              Entity_LoadAnimIfChanged(param_1,2,6);
            }
            else {
              Entity_LoadAnimIfChanged(param_1,0x11,2);
            }
          }
        }
        if ((((param_1->collision_state & 0x80) != 0) &&
            (iVar2 = Entity_CheckActionTrigger(param_1), iVar2 == 0)) && (iVar4 == 0)) {
          Entity_Behavior_Swing(param_1);
        }
        Entity_PhysicsMove(param_1,0);
      }
      goto LAB_8005b110;
    }
    if (bVar1 != 0) goto LAB_8005b110;
    Audio_PlaySoundEffect(0x1d,0,0);
    param_1->rot_z = 0;
    Entity_LoadAnimIfChanged(param_1,0x14,2);
    if (*(s8*)(param_1 + 0x181) == '\0') {
      Entity_Behavior_SpawnAtOffset(param_1,param_1 + 0x2c,0);
    }
    else {
      *(u8 *)(param_1 + 0x181) = 0;
    }
    param_1->action_state = param_1->action_state + '\x01';
  }
  Entity_AnimFrame(param_1);
  Entity_State_Combo(param_1,0);
  Entity_State_Ground(param_1,0);
LAB_8005b110:
  Entity_State_Physics(param_1);
  return;
}
