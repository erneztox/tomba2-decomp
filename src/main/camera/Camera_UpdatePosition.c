/**
 * @brief Updates camera position: GTE cos/sin on entity->sprite_param2/[0x70], radius entity->sprite_cmd
 * @note Original: func_8006DC38 at 0x8006DC38
 */
// Camera_UpdatePosition



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006dc38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_80083f50((int)*(s16 *)(param_1 + 0x6e));
  iVar4 = iVar1 * *(s16 *)(param_1 + 0x6c) >> 0xc;
  iVar1 = FUN_80083f50((int)*(s16 *)(param_1 + 0x70));
  iVar3 = (int)_DAT_1f8000de;
  iVar2 = FUN_80083e80((int)*(s16 *)(param_1 + 0x70));
  _DAT_1f8000d0 = (iVar3 + (iVar1 * iVar4 >> 0xc)) * 0x10000;
  _DAT_1f8000d8 = ((int)_DAT_1f8000e6 - (iVar2 * iVar4 >> 0xc)) * 0x10000;
  param_1->camera_flags = param_1->camera_flags | 1;
  return;
}
