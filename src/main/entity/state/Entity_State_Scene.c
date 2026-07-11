/**
 * @brief Entity scene state: entity->sub_state=1, plays audio + transition
 * @note Original: func_80043A40 at 0x80043A40
 */
// Entity_State_Scene



#include "tomba.h"
undefined4 FUN_80043a40(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  
  FUN_80074eec();
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    uVar2 = *(short *)(param_1 + 0x76) - 1;
    *(ushort *)(param_1 + 0x76) = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) {
      return 0;
    }
    DAT_1f800233 = 0;
    return 1;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return 0;
    }
    sVar3 = param_1->event_id + 1;
    param_1->event_id = sVar3;
    if (sVar3 < 0x3c) {
      if ((DAT_800be0e4 & 0x80) != 0) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  if (bVar1 != 0) {
    return 0;
  }
  sVar3 = param_1->event_id;
  if (sVar3 != 1) {
    if (sVar3 < 2) {
      if (sVar3 != 0) {
        return 0;
      }
      goto LAB_80043ad0;
    }
    if (sVar3 == 2) {
      DAT_1f800233 = 0;
      param_1->event_id = 0;
      param_1->sub_state = 2;
      return 0;
    }
    if (sVar3 != 3) {
      return 0;
    }
  }
  DAT_1f800233 = 1;
LAB_80043ad0:
  FUN_8001d71c((int)param_1->event_param);
  if (param_1->event_id == 3) {
    param_1->sub_state = param_1->sub_state + '\x01';
    return 0;
  }
  return 1;
}
