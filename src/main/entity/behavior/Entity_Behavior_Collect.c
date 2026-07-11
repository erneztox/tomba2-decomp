/**
 * @brief Entity collect behavior: entity->behavior_state state 0->1, handles collection
 * @note Original: func_8004B9C8 at 0x8004B9C8
 */
// Entity_Behavior_Collect



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_Collect(int param_1)

{
  u8 bVar1;
  s32 uVar2;
  
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    if (_g_FrameCounter != 0) {
      Inventory_RemoveItem3(DAT_800e7eee,1);
      Menu_UpdateItemCount(99,1);
      uVar2 = 0x38;
      if (DAT_800e7eee == '(') {
        uVar2 = 0x24;
      }
      UI_DrawElement(uVar2,0x41);
      Entity_CheckCollectible(3);
      Event_TriggerCollectible(4);
      DAT_800bf81c = 0;
      g_SpriteParam3 = 0;
      DAT_800e7eee = '\0';
      _DAT_800e7ef4->state = STATE_DEAD;
      _DAT_800e7ef4 = 0;
    }
  }
  else if (1 < bVar1) {
    if (bVar1 == 2) {
      Inventory_RemoveItem3(DAT_800e7eee,1);
      Menu_UpdateItemCount(100,1);
      UI_DrawElement(0x33,0x41);
      DAT_800bf81c = 0;
      g_SpriteParam3 = 0;
      DAT_800e7eee = '\0';
      _DAT_800e7ef4->state = STATE_DEAD;
    }
    else {
      if (bVar1 != 3) {
        return;
      }
      Inventory_RemoveItem3(DAT_800e7eee,1);
      Menu_UpdateItemCount(0x65,1);
      UI_DrawElement(0x59,0x41);
      DAT_800bf81c = 0;
      g_SpriteParam3 = 0;
      DAT_800e7eee = '\0';
      _DAT_800e7ef4->state = STATE_DEAD;
    }
    _DAT_800e7ef4 = 0;
  }
  return;
}
