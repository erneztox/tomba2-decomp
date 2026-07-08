
void FUN_80077cfc(int param_1,int param_2,int param_3,short param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_3 * 4 + param_2);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  FUN_80075ff8(param_1,uVar1,(int)param_4);
  FUN_80075f0c(param_1,(int)param_4);
  *(short *)(param_1 + 0xe) = param_4 + 0x1000;
  return;
}

