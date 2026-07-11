/**
 * @brief Entity wait state variant 2: entity->sub_state state machine
 * @note Original: func_80041C54 at 0x80041C54
 */
// Entity_StateWait2



#include "tomba.h"
undefined4 FUN_80041c54(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1->sub_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          param_1->parent = 0;
          return 1;
        }
        return 0;
      }
      if (*(char *)(param_1->parent + 4) != '\x02') {
        return 0;
      }
      *(undefined1 *)(param_1->parent + 4) = 3;
      goto LAB_80041d2c;
    }
    if (bVar1 != 0) {
      return 0;
    }
    if (-1 < param_1->event_param) {
      param_1->state_7A = *(undefined1 *)(param_1 + 0x74);
    }
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  iVar2 = FUN_8007def8((int)param_1->event_id,param_1->state_7A,
                       (int)*(short *)(param_1 + 0x76));
  param_1->parent = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  if (*(ushort *)(param_1 + 0x76) - 1 < 2) {
    return 1;
  }
LAB_80041d2c:
  param_1->sub_state = param_1->sub_state + '\x01';
  return 0;
}
