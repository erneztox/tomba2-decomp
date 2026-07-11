/**
 * @brief Math linear interpolate: computes (a-b)*scale, returns interpolated value
 * @note Original: func_80070F90 at 0x80070F90
 */
// Math_Lerp



undefined4 FUN_80070f90(int param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (param_1 - (uint)*param_2) * 0x10000;
  iVar4 = iVar3 >> 0x10;
  iVar1 = iVar4;
  if (iVar4 < 0) {
    iVar1 = -iVar4;
  }
  iVar3 = iVar3 >> 0x15;
  if (iVar1 + 8 < 0x11) {
    *param_2 = (ushort)param_1;
    uVar2 = 1;
  }
  else {
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = -iVar3;
    }
    if ((iVar1 < 6) && (iVar3 = -6, 0 < iVar4)) {
      iVar3 = 6;
    }
    *param_2 = *param_2 + (short)iVar3;
    uVar2 = 0;
  }
  return uVar2;
}
