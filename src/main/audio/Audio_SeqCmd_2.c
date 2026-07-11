/**
 * @brief Audio sequence command: calls FUN_80092420 then FUN_80092c30
 * @note Original: func_8008EF40 at 0x8008EF40
 */
// Audio_SeqCmd



void FUN_8008ef40(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  s32 local_resc;
  u8 in_stack_00000030;
  
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  local_resc = CONCAT31(local_resc._1_3_,in_stack_00000030);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
