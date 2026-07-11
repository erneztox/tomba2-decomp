/**
 * @brief Camera smoothing: lerps _DAT_1f8000d4 toward target, sets entity->camera_flags bit 2
 * @note Original: func_8006DEF0 at 0x8006DEF0
 */
// Camera_SmoothMove



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006def0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_80083e80((int)*(s16 *)(param_1 + 0x6e));
  iVar2 = iVar1 * *(s16 *)(param_1 + 0x6c) >> 0xc;
  iVar1 = ((_DAT_1f8000d4 >> 0x10) + iVar2) - (uint)_g_CameraZ;
  if ((iVar1 + 10U & 0xffff) < 0x15) {
    _DAT_1f8000d4 = CONCAT22(_g_CameraZ - (s16)iVar2,_DAT_1f8000d4);
    param_1->camera_flags = param_1->camera_flags | 2;
  }
  else {
    _DAT_1f8000d4 = _DAT_1f8000d4 - (iVar1 * 0x10000 >> 3);
  }
  return;
}
