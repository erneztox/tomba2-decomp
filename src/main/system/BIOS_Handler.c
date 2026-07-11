/**
 * @brief BIOS exception handler: saves all registers to stack, dispatches
 * @note Original: func_8009BA10 at 0x8009BA10
 */
// BIOS_Handler



#include "tomba.h"
s32 FUN_8009ba10(s32 *param_1)

{
  s32 unaff_s0;
  s32 unaff_s1;
  s32 unaff_s2;
  s32 unaff_s3;
  s32 unaff_s4;
  s32 unaff_s5;
  s32 unaff_s6;
  s32 unaff_s7;
  s32 unaff_gp;
  s32 unaff_s8;
  s32 unaff_retaddr;
  u8 auStackX_0 [16];
  
  *param_1 = unaff_retaddr;
  param_1->render_flags = unaff_gp;
  param_1->flags = register0x00000074;
  param_1->kind = unaff_s8;
  param_1->sub_type = unaff_s0;
  param_1->state = unaff_s1;
  param_1->behavior_state = unaff_s2;
  param_1->action_state = unaff_s3;
  param_1->sub_action = unaff_s4;
  param_1->counter1 = unaff_s5;
  param_1->counter2 = unaff_s6;
  param_1[10] = unaff_s7;
  return 0;
}
