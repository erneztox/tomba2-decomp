/**
 * @brief Collision vector calc variant 3: GTE cos/sin on param_4
 * @note Original: func_800455C0 at 0x800455C0
 */
// Collision_Vector3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800455c0(int param_1,s16 param_2,s16 param_3,s16 param_4)

{
  int iVar1;
  int iVar2;
  s32 uVar3;
  u16 uVar4;
  
  iVar1 = FUN_80083e80((int)param_4);
  iVar2 = FUN_80083f50((int)param_4);
  _DAT_1f8001be = *(s16 *)(param_1 + 0x32) + param_3;
  _DAT_1f8001c0 = param_1->pos_z + (s16)(-iVar1 * (int)param_2 >> 0xc);
  _DAT_1f8001bc = param_1->pos_y + (s16)(iVar2 * param_2 >> 0xc);
  iVar1 = FUN_800498c8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_80045724();
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = _DAT_1f8001a6 & 0xf00;
  if (uVar4 == 0x600) {
LAB_800456e4:
    uVar3 = 2;
  }
  else {
    if (uVar4 < 0x601) {
      if (uVar4 == 0x100) {
        if (g_SubState != '\0') {
          _DAT_1f8001a6 = _DAT_1f8001a6 & 0xff;
          *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + _DAT_1f8001c4;
          return 1;
        }
        goto LAB_800456e4;
      }
    }
    else if (uVar4 == 0x700) goto LAB_800456e4;
    uVar3 = 1;
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + _DAT_1f8001c4;
  }
  return uVar3;
}
