/**
 * @brief Camera mode switcher: switch on entity->camera_mode, sets params
 * @note Original: func_8006C988 at 0x8006C988
 */
// Camera_ModeSwitch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Camera_ModeSwitch(int param_1)

{
  s16 sVar1;
  u16 uVar2;
  
  sVar1 = _DAT_1f8000d6;
  switch(param_1->camera_mode) {
  case 1:
    param_1->bounds_max_y = _DAT_1f8000d2;
    param_1->gte_input = _DAT_1f8000d6;
    sVar1 = _DAT_1f8000da;
    param_1->camera_mode = 2;
    *(s16 *)(param_1 + 0x8a) = sVar1;
    break;
  case 2:
    uVar2 = Math_Random();
    _DAT_1f8000d2 = param_1->bounds_max_y + -0x10 + (uVar2 & 0x1f);
    uVar2 = Math_Random();
    _DAT_1f8000da = *(s16 *)(param_1 + 0x8a) + -0x10 + (uVar2 & 0x1f);
    uVar2 = Math_Random();
    _DAT_1f8000d6 = param_1->gte_input + -8 + (uVar2 & 0xf);
    Sys_CallWithParams(0,0,0x81,2);
    break;
  case 3:
    _DAT_1f8000d2 = param_1->bounds_max_y;
    _DAT_1f8000d6 = param_1->gte_input;
    _DAT_1f8000da = *(s16 *)(param_1 + 0x8a);
    goto LAB_8006cb90;
  case 4:
    param_1->camera_mode = 5;
    param_1->gte_input = sVar1;
    break;
  case 5:
    uVar2 = Math_Random();
    _DAT_1f8000d6 = param_1->gte_input + -0x20 + (uVar2 & 0x3f);
    Sys_CallWithParams(0,0,0xf1,2);
    break;
  case 6:
    param_1->camera_mode = 7;
    param_1->gte_input = sVar1;
  case 7:
    if (*(s8*)(param_1 + 100) == '\0') {
      uVar2 = Math_Random();
      uVar2 = uVar2 & 0x3f;
      _DAT_1f8000d6 = param_1->gte_input + -0x20;
LAB_8006cb84:
      _DAT_1f8000d6 = _DAT_1f8000d6 + uVar2;
      Sys_CallWithParams(0,0,0x81,2);
    }
LAB_8006cb90:
    param_1->camera_mode = 0;
    break;
  case 8:
    param_1->camera_mode = 9;
    param_1->gte_input = sVar1;
  case 9:
    if (*(s8*)(param_1 + 100) == '\0') {
      uVar2 = Math_Random();
      uVar2 = uVar2 & 0x1f;
      _DAT_1f8000d6 = param_1->gte_input + -0x10;
      goto LAB_8006cb84;
    }
    goto LAB_8006cb90;
  }
  return;
}
