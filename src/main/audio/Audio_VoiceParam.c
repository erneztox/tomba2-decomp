/**
 * @brief Audio voice param: stores u8 params in voice struct
 * @note Original: func_8008F7A0 at 0x8008F7A0
 */
// Audio_VoiceParam



#include "tomba.h"
void FUN_8008f7a0(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  u8 bVar1;
  s32 local_resc;
  u8 in_stack_00000030;
  u8 auStack_30->flags;
  u16 local_28;
  s16 local_22;
  
  bVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  local_22 = 1;
  local_28 = (u16)bVar1;
  FUN_8008f2bc(auStack_30,&stack0x0000001c,&stack0x0000001e);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
