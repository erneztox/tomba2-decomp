
void FUN_80014854(int param_1,short *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 2;
  uVar1 = FUN_8001464c((int)*param_2,(int)param_2[1]);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

