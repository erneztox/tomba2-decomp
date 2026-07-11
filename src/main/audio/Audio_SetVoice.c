/**
 * @brief Audio voice set: stores params in voice struct via FUN_80092420
 * @note Original: func_8008F930 at 0x8008F930
 */
// Audio_SetVoice



void FUN_8008f930(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  s32 uVar1;
  s32 local_resc;
  u8 uStack00000015;
  s32 in_stack_00000030;
  u8 auStack_30 [24];
  
  uVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  uStack00000015 = (u8)uVar1;
  FUN_8008f2bc(auStack_30,&stack0x0000001c,&stack0x0000001e);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
