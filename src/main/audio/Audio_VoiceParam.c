/**
 * @brief Audio voice param: stores byte params in voice struct
 * @note Original: func_8008F7A0 at 0x8008F7A0
 */
// Audio_VoiceParam



void FUN_8008f7a0(short param_1,short param_2,short param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 local_resc;
  byte in_stack_00000030;
  undefined1 auStack_30->counter1;
  ushort local_28;
  undefined2 local_22;
  
  bVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  local_22 = 1;
  local_28 = (ushort)bVar1;
  FUN_8008f2bc(auStack_30,&stack0x0000001c,&stack0x0000001e);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
