/**
 * @brief Audio sequence command 2: calls FUN_80092420 with 4 params
 * @note Original: func_8008EFD0 at 0x8008EFD0
 */
// Audio_SeqCmd2



void FUN_8008efd0(short param_1,short param_2,short param_3,undefined4 param_4)

{
  undefined4 local_resc;
  char in_stack_00000030;
  
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  local_resc._0_2_ = CONCAT11(in_stack_00000030,(undefined1)local_resc);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  if (in_stack_00000030 == '\0') {
    FUN_80092bf0();
  }
  else if (in_stack_00000030 == '\x04') {
    FUN_80092c10();
  }
  return;
}
