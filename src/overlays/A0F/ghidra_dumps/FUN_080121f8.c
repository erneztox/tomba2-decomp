// FUN_080121f8

void FUN_080121f8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar2 = func_0x00083f50((int)*(short *)(iVar5 + 0xc));
  *(short *)(param_1 + 0x32) =
       *(short *)(iVar5 + 0x30) + (short)(iVar2 * *(short *)(param_1 + 0x156) >> 0xc);
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x58));
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(iVar2 * *(short *)(param_1 + 100) >> 0xc);
  iVar2 = func_0x00083e80((int)*(short *)(iVar5 + 0xc));
  sVar1 = *(short *)(param_1 + 0x156);
  iVar3 = func_0x00083e80((int)*(short *)(param_2 + 0x56));
  iVar4 = (int)(short)(iVar2 * sVar1 >> 0xc);
  iVar2 = func_0x00083f50((int)*(short *)(param_2 + 0x56));
  *(short *)(param_1 + 0x2e) = *(short *)(iVar5 + 0x2c) - (short)(iVar2 * iVar4 >> 0xc);
  *(short *)(param_1 + 0x36) = *(short *)(iVar5 + 0x34) + (short)(iVar3 * iVar4 >> 0xc);
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x58));
  sVar1 = *(short *)(param_1 + 100);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  iVar4 = (int)(short)(iVar2 * sVar1 >> 0xc);
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar3 * iVar4 >> 0xc);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar2 * iVar4 >> 0xc);
  return;
}

