/**
 * @brief Audio voice set variant 4: different stack layout for voice params
 * @note Original: func_8008F4D0 at 0x8008F4D0
 */
// Audio_SetVoice4



void FUN_8008f4d0(short param_1,short param_2,short param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 local_resc;
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  byte in_stack_00000030;
  undefined1 auStack_30 [4];
  ushort local_2c;
  
  bVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  FUN_8008f260(uStack0000001c,uStack0000001e,auStack_30);
  local_2c = (ushort)bVar1;
  FUN_8008f2bc(auStack_30,&stack0x0000001c,(int)&stack0x0000001c + 2);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
