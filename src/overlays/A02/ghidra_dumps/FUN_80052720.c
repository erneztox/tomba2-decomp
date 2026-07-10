// FUN_80052720

void FUN_80052720(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = FUN_800782b0(param_1 + 0x2c,(int)*(short *)(param_1 + 100),(int)*(short *)(param_1 + 0x68)
                      );
  sVar1 = FUN_800776f8((int)sVar1,(int)*(short *)(param_1 + 0x56),0x18);
  *(short *)(param_1 + 0x56) = sVar1;
  iVar2 = FUN_80083f50((int)sVar1);
  sVar1 = *(short *)(param_1 + 0x44);
  iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar2 * sVar1 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar3 * *(short *)(param_1 + 0x44) >> 4);
  return;
}

