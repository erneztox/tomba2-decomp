// FUN_0801d108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d108(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = func_0x00083f50((int)_DAT_800e7ed6);
  iVar2 = -iVar2;
  iVar3 = func_0x00083e80((int)_DAT_800e7ed6);
  iVar3 = -iVar3;
  iVar4 = -(param_1 - _DAT_1f800160) * iVar2 + (param_3 - _DAT_1f800164) * iVar3 >> 0xc;
  iVar5 = iVar4 << 1;
  iVar6 = ((param_1 - _DAT_1f800160) * iVar3 + (param_3 - _DAT_1f800164) * iVar2 >> 0xc) * 2;
  if (iVar5 < 0) {
    iVar5 = iVar4 << 2;
  }
  iVar4 = iVar6 * iVar3 - iVar5 * iVar2 >> 0xc;
  iVar2 = iVar6 * iVar2 + iVar5 * iVar3 >> 0xc;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar3 = iVar4;
  if (iVar4 < iVar2) {
    iVar3 = iVar2;
    iVar2 = iVar4;
  }
  iVar2 = iVar2 + (iVar2 >> 1);
  iVar3 = ((iVar3 - (iVar3 >> 5)) - (iVar3 >> 7)) + (iVar2 >> 2) + (iVar2 >> 6);
  iVar2 = (param_2 - _DAT_1f800162) + -0x100;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  setCopReg(2,0x4000,iVar2);
  setCopReg(2,0x3000,*param_4);
  copFunction(2,0x780010);
  uVar1 = getCopReg(2,0x16);
  *param_4 = uVar1;
  return;
}

