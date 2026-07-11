/**
 * @brief Entity wait state variant 3: entity->sub_state=1, polls DAT_800bf822
 * @note Original: func_80043720 at 0x80043720
 */
// Entity_StateWait3



undefined4 FUN_80043720(int param_1)

{
  byte bVar1;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    if ((DAT_800bf822 & 1) != 0) {
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
      FUN_8004ed94((int)param_1->event_param,(int)*(short *)(param_1 + 0x76));
      break;
    case 2:
    case 3:
      FUN_8004ed0c((int)param_1->event_param,(int)*(short *)(param_1 + 0x76));
      break;
    case 4:
    case 5:
      FUN_8004eddc((int)param_1->event_param,(int)*(short *)(param_1 + 0x76));
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
    if ((DAT_800bf822 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}
