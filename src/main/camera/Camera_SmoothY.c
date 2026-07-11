/**
 * @brief Camera Y smoothing: snaps if within 10 units, else lerps toward target with 0x1600 step
 * @note Original: func_8006DA54 at 0x8006DA54
 */
// Camera_SmoothY



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8006da54(s32 param_1,int param_2)

{
  s32 bVar1;
  int iVar2;
  
  iVar2 = (uint)*(u16 *)(param_2 + 6) - (_g_CameraY >> 0x10);
  bVar1 = (iVar2 + 10U & 0xffff) < 0x15;
  if (bVar1) {
    _g_CameraY = *(int *)(param_2 + 4);
  }
  else {
    iVar2 = FUN_8006ce74(iVar2 * 0x10000 >> 0x10,0x1600);
    _g_CameraY = _g_CameraY + ((iVar2 << 0x10) >> 3);
  }
  return bVar1;
}
