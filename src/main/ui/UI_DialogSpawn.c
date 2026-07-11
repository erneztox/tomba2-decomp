/**
 * @brief UI dialog spawner: allocs child type 5, sets dialog callback
 * @note Original: func_8004DC84 at 0x8004DC84
 */
// UI_DialogSpawn



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int UI_DialogSpawn(s32 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  s32 uVar3;
  
  iVar1 = Entity_SpawnChild(0,0x80,3,5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      pcVar2 = UI_DialogMain;
      goto LAB_8004dd1c;
    }
    if (param_2 == 2) {
      pcVar2 = UI_Main;
      goto LAB_8004dd1c;
    }
    if (param_2 == 3) {
      pcVar2 = UI_InventoryDraw;
      goto LAB_8004dd1c;
    }
    if (param_2 == 4) {
      pcVar2 = UI_InventoryDraw2;
      goto LAB_8004dd1c;
    }
  }
  pcVar2 = UI_DialogUpdate;
LAB_8004dd1c:
  iVar1->callback = pcVar2;
  iVar1->draw_x = (s16)param_1;
  uVar3 = UI_ItemLookup(param_1);
  iVar1->sprite_data = _g_OT_Data;
  Entity_LoadAnimData(iVar1,&PTR_DAT_80017334,uVar3);
  if (param_2 != 3) {
    DAT_800bf80a = 1;
    DAT_800bf80b = (u8)param_1;
    g_CurrentOverlay = 2;
  }
  return iVar1;
}
