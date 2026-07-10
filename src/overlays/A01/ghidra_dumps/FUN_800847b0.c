// FUN_800847b0

undefined4 * FUN_800847b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  param_2[1] = uVar2;
  *param_2 = uVar3;
  *(short *)param_2 = (short)uVar2;
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  param_2[3] = uVar4;
  param_2[2] = uVar2;
  *(short *)(param_2 + 3) = (short)uVar3;
  *(short *)(param_2 + 2) = (short)uVar4;
  uVar1 = *(undefined2 *)(param_1 + 4);
  *(short *)(param_2 + 1) = (short)uVar2;
  *(undefined2 *)(param_2 + 4) = uVar1;
  return param_2;
}

