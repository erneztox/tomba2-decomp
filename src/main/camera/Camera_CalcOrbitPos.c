/**
 * @brief Camera orbit position: GTE cos/sin on angle, incorporates entity[0x56] flip direction
 * @note Original: func_8006E918 at 0x8006E918
 */
// Camera_CalcOrbitPos



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006e918(int param_1)

{
  s16 sVar1;
  int iVar2;
  s16 sVar3;
  s16 sVar4;
  
  sVar4 = -_DAT_1f8000ee;
  if (_g_CameraAngle == _g_EntityAngle) {
    sVar1 = param_1->rot_y;
  }
  else {
    sVar1 = -param_1->rot_y;
  }
  iVar2 = FUN_80083f50((int)_g_CameraAngle + (int)param_1->sprite_y + (int)sVar1);
  sVar3 = _g_CameraTargetX + (s16)(iVar2 * sVar4 >> 0xc);
  iVar2 = FUN_80083e80((int)_g_CameraAngle + (int)param_1->sprite_y + (int)sVar1);
  _DAT_1f8000d2 = sVar3;
  _DAT_1f8000da = _g_CameraTargetZ - (s16)(iVar2 * sVar4 >> 0xc);
  return;
}
