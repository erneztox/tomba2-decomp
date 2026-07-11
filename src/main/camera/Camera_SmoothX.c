/**
 * @brief Camera X smoothing: same pattern as SmoothY, lerps X toward target
 * @note Original: func_8006D960 at 0x8006D960
 */
// Camera_SmoothX



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_8006d960(undefined4 param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (uint)*(ushort *)((int)param_2 + 2) - (_DAT_1f8000dc >> 0x10);
  bVar1 = (iVar3 + 10U & 0xffff) < 0x15;
  if (bVar1) {
    _DAT_1f8000dc = *param_2;
  }
  else {
    iVar3 = FUN_8006ce74(iVar3 * 0x10000 >> 0x10,0x1800);
    _DAT_1f8000dc = _DAT_1f8000dc + ((iVar3 << 0x10) >> 3);
  }
  iVar3 = (uint)*(ushort *)((int)param_2 + 10) - (_DAT_1f8000e4 >> 0x10);
  bVar2 = (iVar3 + 10U & 0xffff) < 0x15;
  if (bVar2) {
    _DAT_1f8000e4 = param_2->kind;
  }
  else {
    iVar3 = FUN_8006ce74(iVar3 * 0x10000 >> 0x10,0x1800);
    _DAT_1f8000e4 = _DAT_1f8000e4 + ((iVar3 << 0x10) >> 3);
  }
  return bVar2 && bVar1;
}
