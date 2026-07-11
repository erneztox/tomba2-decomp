// FUN_0801f3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f3d0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)_DAT_1f800160;
  sVar3 = *(short *)(param_1 + 0x2e);
  iVar8 = (int)_DAT_1f800162;
  sVar1 = *(short *)(param_1 + 0x32);
  iVar7 = (int)_DAT_1f800164;
  sVar2 = *(short *)(param_1 + 0x36);
  iVar5 = func_0x00083f50(-(int)*(short *)(param_1 + 0x56));
  iVar6 = func_0x00083e80(-(int)*(short *)(param_1 + 0x56));
  sVar3 = func_0x00085690(iVar8 - sVar1,iVar5 * (iVar9 - sVar3) + iVar6 * (iVar7 - sVar2) >> 0xc);
  uVar4 = func_0x000776f8((int)sVar3,(int)*(short *)(param_1 + 100),0x40);
  *(undefined2 *)(param_1 + 100) = uVar4;
  sVar3 = *(short *)(param_1 + 0x44) + 0xe0;
  *(short *)(param_1 + 0x44) = sVar3;
  if (0x1800 < sVar3) {
    *(undefined2 *)(param_1 + 0x44) = 0x1800;
  }
  return;
}

