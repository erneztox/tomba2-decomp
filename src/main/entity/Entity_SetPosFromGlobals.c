/**
 * @brief Entity position from globals: copies _g_PlayerPosX-4 to entity pos at 0x2E/0x32
 * @note Original: func_80070F00 at 0x80070F00
 */
// Entity_SetPosFromGlobals



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80070f00(int param_1,int param_2,s32 *param_3)

{
  if (param_2 == 0) {
    _DAT_800bf824 = CONCAT22(_g_PlayerPosX - param_1->pos_y,_DAT_800bf824);
    _DAT_800bf828 = CONCAT22(_g_PlayerPosY - *(s16 *)(param_1 + 0x32),_DAT_800bf828);
    _DAT_800bf82c = CONCAT22(_g_PlayerPosZ - param_1->pos_z,_DAT_800bf82c);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  _DAT_800bf824 = *param_3;
  _DAT_800bf828 = param_3->flags;
  _DAT_800bf82c = param_3->kind;
  return;
}
