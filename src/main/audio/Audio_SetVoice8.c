/**
 * @brief Audio voice set variant 8: stores pan/volume in voice struct
 * @note Original: func_8008F850 at 0x8008F850
 */
// Audio_SetVoice8



void FUN_8008f850(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  int iVar1;
  s32 local_resc;
  int in_stack_00000030;
  u8 auStack_30 [16];
  s16 local_20;
  
  iVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  if ((iVar1 - 1U & 0xff) < 0x3f) {
    local_20 = 0;
  }
  else if ((iVar1 - 0x40U & 0xff) < 0x40) {
    local_20 = 1;
  }
  FUN_8008f2bc(auStack_30,&stack0x0000001c,&stack0x0000001e);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
