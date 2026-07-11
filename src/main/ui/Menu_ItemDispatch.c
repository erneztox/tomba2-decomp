/**
 * @brief Item/weapon menu action dispatcher: 32 cases for item selection, texture loading
 * @note Original: func_8004A3D4 at 0x8004A3D4
 */
// Menu_ItemDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
s32 Menu_ItemDispatch(int param_1)

{
  s16 sVar1;
  int iVar2;
  s32 uVar3;
  
  if (_g_FrameCounter == 0) {
    return 0;
  }
  switch((int)((param_1->target_angle - 1) * 0x10000) >> 0x10) {
  case 0:
    iVar2 = (int)param_1->target_angle;
    Inventory_AddItemEx(iVar2,1);
    uVar3 = 0x1e;
    goto LAB_8004a490;
  case 3:
    Event_TriggerCollectible(9);
  case 1:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
    sVar1 = param_1->target_angle;
    Inventory_AddItemEx((int)sVar1,1);
    g_SpriteParam1 = (u8)sVar1;
    DAT_800e7eec = g_SpriteParam1;
    break;
  case 5:
    iVar2 = (int)param_1->target_angle;
    Inventory_AddItemEx(iVar2,1);
    uVar3 = 0xf;
LAB_8004a490:
    g_SpriteParam1 = (u8)iVar2;
    DAT_800e7eec = g_SpriteParam1;
    Entity_CheckCollectible(uVar3);
    break;
  case 10:
    Inventory_AddItemEx(0xb,1);
    g_SpriteParam2 = 1;
    goto LAB_8004a4e0;
  case 0xb:
    Inventory_AddItemEx(0xc,1);
    g_SpriteParam2 = 2;
LAB_8004a4e0:
    DAT_800e7eed = g_SpriteParam2;
    Texture_LoadUI();
    DAT_800bf9cf = DAT_800bf9cf + '\x01';
    break;
  case 0x2e:
    Inventory_AddItemEx((int)param_1->target_angle,1);
    Event_TriggerCollectible(0x18);
    break;
  case 0x46:
    Inventory_AddItemEx((int)param_1->target_angle,1);
    Event_TriggerCollectible(0x4d);
    break;
  case 0x56:
    Menu_UpdateItemCount(0x4d,2);
    UI_DrawItemIcon(0x57,2);
    Event_TriggerCollectible(0x3e);
    break;
  case 0x69:
    Inventory_AddItemEx((int)param_1->target_angle,1);
    Entity_CheckCollectible(0x58);
    break;
  case 0x6a:
    Inventory_AddItemEx((int)param_1->target_angle,1);
    Entity_CheckCollectible(0x59);
    break;
  case 0x6f:
    if (DAT_800bfb24 == '\0') {
      Menu_UpdateItemCount(0x70,1);
      uVar3 = 0x10;
    }
    else {
      Menu_UpdateItemCount(0x6f,1);
      Inventory_RemoveItem3(0x70,1);
      uVar3 = 0x11;
    }
    goto LAB_8004a640;
  case 0x71:
    if (DAT_800bfb26 == '\0') {
      Menu_UpdateItemCount(0x72,1);
      uVar3 = 0x12;
    }
    else {
      Menu_UpdateItemCount(0x71,1);
      Inventory_RemoveItem3(0x72,1);
      uVar3 = 0x13;
    }
    goto LAB_8004a640;
  case 0x73:
    if (DAT_800bfb28 == '\0') {
      Menu_UpdateItemCount(0x74,1);
      uVar3 = 0x14;
    }
    else {
      Menu_UpdateItemCount(0x73,1);
      Inventory_RemoveItem3(0x74,1);
      uVar3 = 0x15;
    }
LAB_8004a640:
    UI_DrawElement(uVar3,0x41);
    break;
  case 0x7b:
    Inventory_AddItemEx((int)param_1->target_angle,1);
    goto LAB_8004a6cc;
  case 0x88:
    Menu_UpdateItemCount(0x60,2);
    UI_DrawItemIcon(0x89,2);
    break;
  case 0x89:
    Menu_UpdateItemCount(0x7c,3);
    UI_DrawItemIcon(0x8a,2);
LAB_8004a6cc:
    Event_TriggerCollectible(0x50);
    break;
  case 0x90:
    if (g_ItemCount == 8) {
      g_ItemCount = g_ItemType;
    }
    g_ItemType = 0x10;
    _g_FrameCounter = (u16)g_ItemCount;
    _DAT_800e7ff0 = _g_FrameCounter;
    UI_DrawElement(0xf,0x41);
    iVar2 = Entity_SpawnNoPos(0x711,0);
    if (iVar2 != 0) {
      iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
    }
    break;
  case 0x95:
  case 0x96:
  case 0x98:
  case 0x99:
    _DAT_800bf874 = _DAT_800bf874 + 100000;
    Entity_SpawnChild2(param_1,100000,0);
  default:
    Inventory_AddItemEx((int)param_1->target_angle,1);
    break;
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
    Overlay_80115aec(param_1);
    break;
  case 0xa5:
    Inventory_AddItemEx((int)param_1->target_angle,1);
    Overlay_80114f24(param_1);
  }
  iVar2 = Entity_SpawnNoPos(0x1f,0xffffff74);
  if (iVar2 != 0) {
    iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
    iVar2->pos_x = param_1->pos_y;
    iVar2->pos_y = *(s16 *)(param_1 + 0x32);
    *(s16 *)(iVar2 + 0x30) = param_1->pos_z;
  }
  Audio_PlaySoundEffect(0x28,0,0);
  return 1;
}
