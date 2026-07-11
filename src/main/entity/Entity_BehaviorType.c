/**
 * @brief Entity behavior type: processes entity type flags, dispatches
 * @note Original: func_8002F36C at 0x8002F36C
 */
// Entity_BehaviorType



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_BehaviorType(int param_1)

{
  s32 in_zero;
  s32 extraout_at;
  void *puVar1;
  int iVar2;
  int iVar3;
  s32 local_30;
  s32 local_2c;
  s32 local_28;
  
  local_30 = 0x40;
  local_2c = 0x40;
  local_28 = 0x40;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar3 = 0;
  param_1->pos_x = _DAT_800e7f84->pos_x;
  param_1->pos_y = *(s16 *)(_DAT_800e7f84 + 0x30);
  _DAT_1f800090 = (uint)param_1->sub_action << 6;
  *(s16 *)(param_1 + 0x30) = *(s16 *)(_DAT_800e7f84 + 0x34);
  do {
    iVar2 = _DAT_800e7f88;
    if (iVar3 == 0) {
      iVar2 = _DAT_800e7f84;
    }
    GTE_ComposeMatrix(&g_GTE_WorkF8,iVar2 + 0x18,0x1f800000);
    setCopReg(2,in_zero,*(s32 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,param_1->pos_y_fixed);
    copFunction(2,0x486012);
    _g_GTE_Data14 = getCopReg(2,0x19);
    _g_GTE_Data18 = getCopReg(2,0x1a);
    _g_GTE_Data1C = getCopReg(2,0x1b);
    _g_GTE_Data14 = _g_GTE_Data14 + _g_GTE_Work10C;
    _g_GTE_Data18 = _g_GTE_Data18 + _g_GTE_Work110;
    _g_GTE_Data1C = _g_GTE_Data1C + _g_GTE_Work114;
    GTE_TransformVec(0x1f800000,&local_30);
    GTE_LoadMatrix5(0x1f800000);
    GTE_LoadTranslation(0x1f800000);
    if (iVar3 == 0) {
      puVar1 = &DAT_8009f788;
    }
    else {
      puVar1 = &DAT_8009f6f8;
    }
    Entity_SubmitQuadToOT(puVar1,0,0xffffff9c,param_1->collision_state);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}
