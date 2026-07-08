
void FUN_8008f1b0(short param_1,short param_2,short param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 local_resc;
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  byte in_stack_00000030;
  ushort local_30 [5];
  undefined2 local_26;
  
  bVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  FUN_8008f260(uStack0000001c,uStack0000001e,local_30);
  local_26 = 0;
  local_30[0] = (ushort)bVar1;
  FUN_8008f2bc(local_30,&stack0x0000001c,(int)&stack0x0000001c + 2);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}

