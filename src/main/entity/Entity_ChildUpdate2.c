/**
 * @brief Entity child update variant 2: entity->state=1, processes
 * @note Original: func_80070018 at 0x80070018
 */
// Entity_ChildUpdate2



#include "tomba.h"
void Entity_ChildUpdate2(int param_1,int param_2)

{
  u8 bVar1;
  s8 cVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if ((param_1->gte_flags != '\0') && (g_ActionFlag == '\0')) {
      param_1->state = STATE_FINISH;
      return;
    }
    iVar3 = param_1->parent;
    if (param_1->behavior_state == '\0') {
      Entity_State_Follow(param_1);
    }
    else if (param_1->behavior_state == '\x01') {
      Entity_OffsetX(param_1);
    }
    cVar2 = iVar3->flags;
    param_1->flags = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    bVar1 = param_1->input_flags;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->state = 1;
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (param_1->event_param == 0) {
      if ((param_1->input_flags & 1) != 0) {
        if ((param_1->input_flags & 2) != 0) {
          switch(param_1->sub_type) {
          case 0:
            param_2 = UI_ElementUpdate(param_1,1);
            break;
          case 1:
            param_2 = UI_ElementUpdate(param_1,2);
            break;
          case 4:
            param_2 = Game_AddScore(param_1,100);
            break;
          case 5:
            param_2 = Game_AddScore(param_1,200);
            break;
          case 6:
            param_2 = Game_AddScore(param_1,500);
            break;
          case 7:
            param_2 = Game_AddScore(param_1,1000);
            break;
          case 0xb:
            param_2 = Game_AddScore(param_1,100000);
            break;
          case 0xf:
            param_2 = Entity_SpawnItem2(param_1);
            break;
          case 0x10:
            param_2 = Entity_SpawnItem(param_1);
            break;
          case 0x11:
            param_2 = Entity_SpawnScorePopupEx(param_1);
          }
          if (param_2 == 0) {
            return;
          }
          param_1->state = STATE_DEAD;
          return;
        }
        iVar3 = Menu_ItemDispatch(param_1);
        if (iVar3 == 0) {
          return;
        }
      }
      param_1->state = STATE_DEAD;
      return;
    }
    param_1->event_param = param_1->event_param + -1;
    cVar2 = *(s8*)(param_1->parent + 1);
    param_1->flags = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    bVar1 = param_1->input_flags;
  }
  if ((bVar1 & 0x80) == 0) {
    Entity_UpdateMatrix(param_1);
  }
  else {
    Entity_AdvanceAnim3(param_1);
  }
  return;
}
