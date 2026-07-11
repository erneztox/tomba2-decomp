/**
 * @brief Physics with climb: increments entity Y by 10 until clear, then applies rotation
 * @note Original: func_8003FC00 at 0x8003FC00
 */
// Entity_PhysicsClimb



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003fc00(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  FUN_8004766c();
  do {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    iVar2 = FUN_80049250(param_1,0,
                         (int)(((uint)param_1->bounds_max_y -
                               (uint)param_1->bounds_min_y) * 0x10000) >> 0x10);
  } while (iVar2 == 0);
  FUN_80048750(param_1);
  uVar1 = _DAT_1f8001a2;
  param_1->rot_y = _DAT_1f8001a0;
  param_1->rot_z = uVar1;
  return;
}
