// FUN_080223a8

void FUN_080223a8(undefined4 param_1,short param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0003116c(0x917,param_1,(int)param_2);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x50) = param_3;
    *(undefined2 *)(iVar1 + 0x54) = param_4;
  }
  return;
}

