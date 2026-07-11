/**
 * @brief Item/weapon menu action dispatcher: 32 cases for item selection, texture loading
 * @note Original: func_8004A3D4 at 0x8004A3D4
 */
// Menu_ItemDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
s32 FUN_8004a3d4(int param_1)

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
    FUN_8004d4c4(iVar2,1);
    uVar3 = 0x1e;
    goto LAB_8004a490;
  case 3:
    FUN_80040b48(9);
  case 1:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
    sVar1 = param_1->target_angle;
    FUN_8004d4c4((int)sVar1,1);
    g_SpriteParam1 = (u8)sVar1;
    DAT_800e7eec = g_SpriteParam1;
    break;
  case 5:
    iVar2 = (int)param_1->target_angle;
    FUN_8004d4c4(iVar2,1);
    uVar3 = 0xf;
LAB_8004a490:
    g_SpriteParam1 = (u8)iVar2;
    DAT_800e7eec = g_SpriteParam1;
    FUN_80040c00(uVar3);
    break;
  case 10:
    FUN_8004d4c4(0xb,1);
    g_SpriteParam2 = 1;
    goto LAB_8004a4e0;
  case 0xb:
    FUN_8004d4c4(0xc,1);
    g_SpriteParam2 = 2;
LAB_8004a4e0:
    DAT_800e7eed = g_SpriteParam2;
    FUN_80067da8();
    DAT_800bf9cf = DAT_800bf9cf + '\x01';
    break;
  case 0x2e:
    FUN_8004d4c4((int)param_1->target_angle,1);
    FUN_80040b48(0x18);
    break;
  case 0x46:
    FUN_8004d4c4((int)param_1->target_angle,1);
    FUN_80040b48(0x4d);
    break;
  case 0x56:
    FUN_8004d4f4(0x4d,2);
    FUN_8004ed0c(0x57,2);
    FUN_80040b48(0x3e);
    break;
  case 0x69:
    FUN_8004d4c4((int)param_1->target_angle,1);
    FUN_80040c00(0x58);
    break;
  case 0x6a:
    FUN_8004d4c4((int)param_1->target_angle,1);
    FUN_80040c00(0x59);
    break;
  case 0x6f:
    if (DAT_800bfb24 == '\0') {
      FUN_8004d4f4(0x70,1);
      uVar3 = 0x10;
    }
    else {
      FUN_8004d4f4(0x6f,1);
      FUN_8004d650(0x70,1);
      uVar3 = 0x11;
    }
    goto LAB_8004a640;
  case 0x71:
    if (DAT_800bfb26 == '\0') {
      FUN_8004d4f4(0x72,1);
      uVar3 = 0x12;
    }
    else {
      FUN_8004d4f4(0x71,1);
      FUN_8004d650(0x72,1);
      uVar3 = 0x13;
    }
    goto LAB_8004a640;
  case 0x73:
    if (DAT_800bfb28 == '\0') {
      FUN_8004d4f4(0x74,1);
      uVar3 = 0x14;
    }
    else {
      FUN_8004d4f4(0x73,1);
      FUN_8004d650(0x74,1);
      uVar3 = 0x15;
    }
LAB_8004a640:
    FUN_8004ed94(uVar3,0x41);
    break;
  case 0x7b:
    FUN_8004d4c4((int)param_1->target_angle,1);
    goto LAB_8004a6cc;
  case 0x88:
    FUN_8004d4f4(0x60,2);
    FUN_8004ed0c(0x89,2);
    break;
  case 0x89:
    FUN_8004d4f4(0x7c,3);
    FUN_8004ed0c(0x8a,2);
LAB_8004a6cc:
    FUN_80040b48(0x50);
    break;
  case 0x90:
    if (g_ItemCount == 8) {
      g_ItemCount = g_ItemType;
    }
    g_ItemType = 0x10;
    _g_FrameCounter = (u16)g_ItemCount;
    _DAT_800e7ff0 = _g_FrameCounter;
    FUN_8004ed94(0xf,0x41);
    iVar2 = FUN_800310f4(0x711,0);
    if (iVar2 != 0) {
      iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
    }
    break;
  case 0x95:
  case 0x96:
  case 0x98:
  case 0x99:
    _DAT_800bf874 = _DAT_800bf874 + 100000;
    FUN_80071b44(param_1,100000,0);
  default:
    FUN_8004d4c4((int)param_1->target_angle,1);
    break;
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
    Overlay_80115aec(param_1);
    break;
  case 0xa5:
    FUN_8004d4c4((int)param_1->target_angle,1);
    Overlay_80114f24(param_1);
  }
  iVar2 = FUN_800310f4(0x1f,0xffffff74);
  if (iVar2 != 0) {
    iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
    iVar2->pos_x = param_1->pos_y;
    iVar2->pos_y = *(s16 *)(param_1 + 0x32);
    *(s16 *)(iVar2 + 0x30) = param_1->pos_z;
  }
  FUN_80074590(0x28,0,0);
  return 1;
}
