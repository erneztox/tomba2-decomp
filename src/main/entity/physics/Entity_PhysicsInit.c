/**
 * @brief Entity physics initializer: calls collision + slope calc, checks result
 * @note Original: func_80069858 at 0x80069858
 */
// Entity_PhysicsInit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80069858(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_800e7feb == '\0') {
    iVar1 = FUN_8004766c(param_1);
    if (iVar1 < 0) {
      FUN_80049760(param_1);
      return 1;
    }
    FUN_80049760(param_1);
  }
  else {
    iVar1 = FUN_80083f50((int)_DAT_1f80018c);
    iVar3 = (int)_DAT_1f80018c;
    param_1->normal_x = (short)(iVar1 >> 4);
    iVar1 = FUN_80083e80(iVar3);
    param_1->normal_z = -(short)(iVar1 >> 4);
  }
  uVar2 = 0;
  if (param_3 == 0) {
    if ((param_2 == 0) && (param_1->move_mode != '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if (DAT_800e7feb == '\0') {
        uVar2 = FUN_800696c4(param_1,param_1->kind - 2 < 2);
      }
    }
  }
  return uVar2;
}
