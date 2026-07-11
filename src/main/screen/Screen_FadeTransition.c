/**
 * @brief Screen fade in/out transition: 4-phase fade with color ramp
 * @note Original: func_8002655C at 0x8002655C
 */
// Screen_FadeTransition



#include "tomba.h"
void Screen_FadeTransition(int param_1)

{
  s16 sVar1;
  s16 uVar2;
  uint uVar3;
  
  switch(param_1->state) {
  case 0:
    param_1->state = param_1->state + '\x01';
    Audio_ClampVolume(0xffffffff);
    Audio_ClampVolume(0x47ff);
    switch(g_GameMode) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 9:
      g_GameMode = 0;
      *(s16 *)(param_1 + 8) = 0x1f;
      uVar2 = 8;
      goto LAB_80026630;
    case 5:
    case 6:
      *(s16 *)(param_1 + 8) = 0x7f;
      uVar2 = 2;
LAB_80026630:
      *(s16 *)(param_1 + 10) = uVar2;
      param_1->sub_type = 1;
      break;
    case 7:
    case 8:
      g_GameMode = 0;
    case 0:
      *(s16 *)(param_1 + 8) = 0x1f;
      *(s16 *)(param_1 + 10) = 8;
      param_1->sub_type = 0;
    }
    GPU_SpriteOT(0xffffff,param_1->sub_type,4);
    UI_DrawScreenOverlay();
    break;
  case 1:
    uVar3 = (int)*(s16 *)(param_1 + 10) * (int)*(s16 *)(param_1 + 8) & 0xff;
    GPU_SpriteOT(uVar3 << 0x10 | uVar3 << 8 | uVar3,param_1->sub_type,4);
    sVar1 = *(s16 *)(param_1 + 8);
    *(s16 *)(param_1 + 8) = sVar1 + -1;
    if (sVar1 == 1) {
      param_1->state = param_1->state + '\x01';
      DAT_800bf80f = 0;
    }
    break;
  case 2:
    if ((DAT_800bf849 == '\0') && (DAT_800ed06d == '\0')) {
      if (DAT_800bf80f == 2) {
        Audio_Mute();
        *(s16 *)(param_1 + 8) = 0x1f;
        *(s16 *)(param_1 + 10) = 8;
        param_1->sub_type = 0;
        param_1->state = param_1->state + '\x01';
      }
      else if (DAT_800bf80f == 4) {
        Audio_Mute();
        *(s16 *)(param_1 + 8) = 0x1f;
        *(s16 *)(param_1 + 10) = 8;
        param_1->sub_type = 1;
        param_1->state = param_1->state + '\x01';
      }
    }
    break;
  case 3:
    uVar3 = *(s16 *)(param_1 + 8) * -8 & 0xff;
    GPU_SpriteOT(uVar3 << 0x10 | uVar3 << 8 | uVar3,param_1->sub_type,4);
    if ((DAT_800bf80f & 0x80) == 0) {
      *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) + -1;
    }
    if (*(s16 *)(param_1 + 8) == 0) {
      param_1->state = param_1->state + '\x01';
      DAT_800bf80f = 0;
      Audio_ClearChannel();
    }
    break;
  case 4:
    GPU_SpriteOT(0xffffff,param_1->sub_type,4);
    if (DAT_800bf80f != 0) {
      if (DAT_800bf80f == 1) {
        param_1->sub_type = 0;
      }
      else if (DAT_800bf80f == 3) {
        param_1->sub_type = 1;
      }
      Audio_ResetChannel();
      param_1->state = 1;
      *(s16 *)(param_1 + 8) = 0x1f;
      *(s16 *)(param_1 + 10) = 8;
    }
  }
  return;
}
