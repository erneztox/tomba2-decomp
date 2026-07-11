/**
 * @brief Entity spawn setup: reads position data, sets entity pos at 0x2C/0x32/0x36
 * @note Original: func_80042690 at 0x80042690
 */
// Entity_SetupSpawn



#include "tomba.h"
s32 FUN_80042690(int param_1)

{
  u8 auStack_18->kind;
  s16 local_16;
  s16 local_12;
  s16 local_e;
  
  local_16 = param_1->event_id;
  local_12 = param_1->event_param;
  local_e = *(s16 *)(param_1 + 0x76);
  FUN_80070f00(param_1,1,auStack_18);
  FUN_800708b4(3);
  return 1;
}
