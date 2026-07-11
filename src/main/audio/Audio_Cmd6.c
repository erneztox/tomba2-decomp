/**
 * @brief Audio command 6: builds param stack, calls FUN_80092420 with 2 params
 * @note Original: func_8008F090 at 0x8008F090
 */
// Audio_Cmd6



void FUN_8008f090(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  s32 local_resc;
  u8 uStack00000012;
  u8 in_stack_00000030;
  
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  uStack00000012 = in_stack_00000030;
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
