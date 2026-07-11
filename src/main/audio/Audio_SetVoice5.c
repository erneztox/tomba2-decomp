/**
 * @brief Audio voice set variant 5: stores voice params with u8 access
 * @note Original: func_8008F1B0 at 0x8008F1B0
 */
// Audio_SetVoice5



#include "tomba.h"
void Audio_SetVoice5(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  u8 bVar1;
  s32 local_resc;
  s16 uStack0000001c;
  s16 uStack0000001e;
  u8 in_stack_00000030;
  u16 local_30->flags;
  s16 local_26;
  
  bVar1 = in_stack_00000030;
  local_resc = param_4;
  Audio_VoiceSet1((int)param_1,(int)param_2,(int)param_3,&local_resc);
  Audio_SetupVoice(uStack0000001c,uStack0000001e,local_30);
  local_26 = 0;
  local_30->flags = (u16)bVar1;
  Audio_SetVoiceFlags(local_30,&stack0x0000001c,(int)&stack0x0000001c + 2);
  Audio_VoiceSet2((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
