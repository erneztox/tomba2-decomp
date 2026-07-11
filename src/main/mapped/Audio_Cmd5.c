/**
 * @brief Audio command 5: builds param stack, calls FUN_80092420 with 3 params
 * @note Original: func_8008F120 at 0x8008F120
 */
// Audio_Cmd5



void FUN_8008f120(short param_1,short param_2,short param_3,undefined4 param_4)

{
  undefined4 local_resc;
  undefined1 uStack00000013;
  undefined1 in_stack_00000030;
  
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  uStack00000013 = in_stack_00000030;
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
