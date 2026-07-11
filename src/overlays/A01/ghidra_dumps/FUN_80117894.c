// FUN_80117894

undefined4 FUN_80117894(short *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_2 + 0x2e) < *param_1) {
    *(short *)(param_2 + 0x2e) = *param_1;
    return 1;
  }
  if (param_1[1] < *(short *)(param_2 + 0x2e)) {
    *(short *)(param_2 + 0x2e) = param_1[1];
    uVar1 = FUN_80120850();
    return uVar1;
  }
  return 0;
}

