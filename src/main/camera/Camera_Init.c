/**
 * @brief Camera initializer: sets entity[0x56]=0x100, zeroes flags
 * @note Original: func_8006EA7C at 0x8006EA7C
 */
// Camera_Init



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006ea7c(int param_1)

{
  s32 uVar1;
  s16 sVar2;
  
  param_1->rot_y = 0x100;
  *(u8 *)(param_1 + 0x72) = 0;
  param_1->camera_mode = 0;
  *(u8 *)(param_1 + 0x77) = 0;
  *(u8 *)(param_1 + 0x74) = 0;
  *(s16 *)(param_1 + 6) = 0;
  uVar1 = _g_CameraY;
  param_1->sprite_y = 0x400;
  *(s16 *)(param_1 + 0x22) = 0xf0;
  *(s16 *)(param_1 + 0x8c) = 0;
  *(s32 *)(param_1 + 0xc) = uVar1;
  switch(g_GameState) {
  case 0:
    if (DAT_800bf89c == '\x02') {
      *(u8 *)(param_1 + 100) = 7;
      *(s16 *)(param_1 + 0x3a) = 0xaba;
      *(s16 *)(param_1 + 0x3e) = 0xfce0;
      param_1->timer2 = 0xee0;
      _DAT_1f8000d2 = 0xd3b;
      _DAT_1f8000d6 = 0xf57d;
      _DAT_1f8000da = 0xdb2;
      break;
    }
    if (g_ActionFlag != '\0') break;
    *(u8 *)(param_1 + 100) = 0;
    goto LAB_8006eb94;
  default:
    *(u8 *)(param_1 + 100) = 0;
LAB_8006eb94:
    FUN_8006e0f0(param_1);
    FUN_8006e918(param_1);
    break;
  case 2:
  case 7:
  case 0x14:
    *(u8 *)(param_1 + 100) = 0;
    break;
  case 3:
    *(u8 *)(param_1 + 100) = 0xe;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    *(u8 *)(param_1 + 100) = 0x80;
  }
  if (g_GameMode - 5 < 2) {
    FUN_8006cba8(&DAT_800e7eac);
    sVar2 = *(s16 *)(param_1 + 0x3e);
    *(s16 *)(param_1 + 0x3e) = sVar2 + 1000;
    if (DAT_800e7e82 == '\0') {
      sVar2 = sVar2 + 0x35c;
      *(s16 *)(param_1 + 0x3e) = sVar2;
      param_1->anim_timer = sVar2;
      *(u8 *)(param_1 + 100) = 0xf;
      *(s16 *)(param_1 + 0x6c) = 0x578;
      *(s16 *)(param_1 + 0x6e) = 0x40;
      *(s16 *)(param_1 + 0x70) = _g_CameraAngle + 0x400;
      FUN_8006e294(param_1,param_1 + 0x38);
      FUN_8006e3b0(param_1,&DAT_800e7eac);
    }
  }
  return;
}
