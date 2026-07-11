/**
 * @brief Audio sequence command: calls FUN_80092420 then FUN_80092c30
 * @note Original: func_8008EF40 at 0x8008EF40
 */
// Audio_SeqCmd



void FUN_8008ef40(short param_1,short param_2,short param_3,undefined4 param_4)

{
  undefined4 local_resc;
  undefined1 in_stack_00000030;
  
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  local_resc = CONCAT31(local_resc._1_3_,in_stack_00000030);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
