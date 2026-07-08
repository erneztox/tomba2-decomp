
int FUN_80070698(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_8009a450();
  uVar2 = uVar2 & param_1 - 1U;
  iVar1 = uVar2 * uVar2;
  iVar3 = iVar1 / param_1;
  if (param_1 == 0) {
    trap(0x1c00);
  }
  if ((param_1 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  uVar2 = FUN_8009a450();
  if ((uVar2 & 1) != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}

