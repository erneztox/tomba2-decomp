/**
 * @brief Entity anim state: builds sprite data, submits to OT
 * @note Original: func_80042894 at 0x80042894
 */
// Entity_State_Anim



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80042894(int param_1)

{
  int iVar1;
  s16 *puVar2;
  s16 *puVar3;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_22;
  s16 local_20;
  s16 local_1e;
  
  if (param_1->sub_state == '\0') {
    if ((param_1->event_id & 1) == 0) {
      FUN_8006e1c0(7);
    }
    else {
      g_CameraEntity = 7;
    }
    if ((-1 < *(s16 *)(param_1 + 100)) &&
       (DAT_1f800207 = *(u8 *)(param_1 + 100), g_CameraMode2 == '\0')) {
      g_CollisionType = 0x21;
      DAT_800e7e86 = 0;
    }
    puVar3 = &local_28;
    if ((param_1->event_id & 0x2000) == 0) {
      puVar3 = *(s16 **)(param_1 + 0x74);
    }
    else {
      puVar2 = *(s16 **)(param_1 + 0x74);
      local_28 = *puVar2;
      local_26 = puVar2->flags;
      local_24 = puVar2->kind;
      local_22 = param_1->pos_y;
      local_20 = *(s16 *)(param_1 + 0x32);
      local_1e = param_1->pos_z;
    }
    if ((*(s16 *)(param_1 + 0x66) == 0) || ((param_1->event_id & 3) < 2)) {
      FUN_8006cbd0(0x800e8008,puVar3);
      return 1;
    }
    FUN_8006cba8(&g_CameraX);
    FUN_8006cc1c(0x800e8008,puVar3,(int)*(s16 *)(param_1 + 0x66));
    if (((int)param_1->event_id & 0x8000U) != 0) {
      _DAT_800e8084 = 0;
      _DAT_800e8082 = 0;
      _DAT_800e8080 = 0;
    }
    if ((param_1->event_id & 0x4000) != 0) {
      _DAT_800e808a = 0;
      _DAT_800e8088 = 0;
      _DAT_800e8086 = 0;
    }
    if (param_1->target_angle != 0) {
      return 1;
    }
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    iVar1 = FUN_8006cdcc(0x800e8008);
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}
