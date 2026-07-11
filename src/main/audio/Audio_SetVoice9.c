/**
 * @brief Audio voice set variant 9: stores ADSR params in voice struct
 * @note Original: func_8008F630 at 0x8008F630
 */
// Audio_SetVoice9



#include "tomba.h"
void FUN_8008f630(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  u8 bVar1;
  s32 local_resc;
  s16 uStack0000001c;
  s16 uStack0000001e;
  u8 in_stack_00000030;
  u8 auStack_30->flags;
  u16 local_2a;
  s16 local_24;
  
  bVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  FUN_8008f260(uStack0000001c,uStack0000001e,auStack_30);
  local_24 = 1;
  local_2a = (u16)bVar1;
  FUN_8008f2bc(auStack_30,&stack0x0000001c,(int)&stack0x0000001c + 2);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
