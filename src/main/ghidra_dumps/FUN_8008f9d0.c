
void FUN_8008f9d0(short param_1,short param_2,short param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_resc;
  undefined1 uStack00000016;
  undefined4 in_stack_00000030;
  undefined1 auStack_30 [24];
  
  uVar1 = in_stack_00000030;
  local_resc = param_4;
  FUN_80092420((int)param_1,(int)param_2,(int)param_3,&local_resc);
  uStack00000016 = (undefined1)uVar1;
  FUN_8008f2bc(auStack_30,&stack0x0000001c,&stack0x0000001e);
  FUN_80092c30((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}

