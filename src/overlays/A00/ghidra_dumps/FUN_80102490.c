// FUN_80102490

void FUN_80102490(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar4 = func_0x80083f50((int)*(short *)(iVar8 + 0xc));
  sVar1 = *(short *)(param_1 + 0x156);
  iVar5 = func_0x80083e80((int)*(short *)(iVar8 + 0xc));
  *(short *)(param_1 + 0x32) =
       (short)(iVar4 * sVar1 >> 0xc) +
       *(short *)(iVar8 + 0x30) + (short)(-(iVar5 * *(short *)(param_1 + 0x152)) >> 0xc);
  iVar4 = func_0x80083f50(*(short *)(iVar8 + 0xc) + 0x400);
  sVar1 = *(short *)(param_1 + 0x156);
  iVar5 = func_0x80083f50((int)*(short *)(iVar8 + 10));
  iVar7 = (int)(short)(iVar4 * sVar1 >> 0xc);
  iVar4 = func_0x80083e80((int)*(short *)(iVar8 + 10));
  sVar2 = *(short *)(iVar8 + 0x2c);
  sVar3 = *(short *)(iVar8 + 0x34);
  iVar8 = func_0x80083f50((int)*(short *)(iVar8 + 0xc));
  sVar1 = *(short *)(param_1 + 0x152);
  iVar6 = func_0x80083e80((int)*(short *)(param_2 + 0x56));
  *(short *)(param_1 + 0x2e) = sVar2 - (short)(iVar4 * iVar7 >> 0xc);
  *(short *)(param_1 + 0x36) =
       sVar3 + (short)(iVar5 * iVar7 >> 0xc) + (short)(iVar6 * (short)(iVar8 * sVar1 >> 0xc) >> 0xc)
  ;
  iVar4 = func_0x80083e80((int)*(short *)(param_1 + 0x58));
  sVar1 = *(short *)(param_1 + 100);
  iVar5 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
  iVar8 = (int)(short)(iVar4 * sVar1 >> 0xc);
  iVar4 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar5 * iVar8 >> 0xc);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar4 * iVar8 >> 0xc);
  iVar4 = func_0x80083f50((int)*(short *)(param_1 + 0x58));
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(iVar4 * *(short *)(param_1 + 100) >> 0xc);
  return;
}

