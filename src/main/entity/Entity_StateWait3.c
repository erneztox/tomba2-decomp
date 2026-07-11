/**
 * @brief Entity wait state variant 3: entity->sub_state=1, polls g_EventInput
 * @note Original: func_80043720 at 0x80043720
 */
// Entity_StateWait3



#include "tomba.h"
s32 Entity_StateWait3(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    if ((g_EventInput & 1) != 0) {
      param_1->sub_state = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    switch(param_1->event_id) {
    case 0:
    case 1:
      UI_DrawElement((int)param_1->event_param,(int)*(s16 *)(param_1 + 0x76));
      break;
    case 2:
    case 3:
      UI_DrawItemIcon((int)param_1->event_param,(int)*(s16 *)(param_1 + 0x76));
      break;
    case 4:
    case 5:
      UI_DrawElement_2((int)param_1->event_param,(int)*(s16 *)(param_1 + 0x76));
      break;
    case 10:
      param_1->sub_state = 2;
      return 0;
    }
    if ((param_1->event_id & 1) == 0) {
      return 1;
    }
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (bVar1 != 2) {
      return 0;
    }
    if ((g_EventInput & 1) == 0) {
      return 1;
    }
  }
  return 0;
}
