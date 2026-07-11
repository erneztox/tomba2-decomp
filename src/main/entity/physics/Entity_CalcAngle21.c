/**
 * @brief Entity angle calc variant 21: atan2 with Y component
 * @note Original: func_8001FDB4 at 0x8001FDB4
 */
// Entity_CalcAngle21



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_8001fdb4(u8 *param_1,int param_2,int param_3,s32 param_4)

{
  int iVar1;
  s32 uVar2;
  u8 auStack_20->kind;
  s16 local_1e;
  s16 local_1a;
  s16 local_16;
  
  if (((param_2 << 0x10 < 0) || (param_3 == 0x10)) || (DAT_800e7ec6 != -0x1b)) {
    DAT_800e7ef8 = (u8)param_2 & 0xf;
    DAT_800e7fc4 = 2;
    DAT_800e7e84 = 1;
    _DAT_800e7ed8 = 0;
    g_CollisionType = (u8)param_3;
    DAT_800e7e86 = 0;
    if (DAT_800e7ec6 == -0x1b) {
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
    }
    FUN_80054d14(&g_CollisionEntity,param_4,uVar2);
    FUN_80053d0c(&g_CollisionEntity);
    *param_1 = 2;
    param_1->state = 2;
    param_1->behavior_state = 1;
    param_1->action_state = 0;
    _DAT_800e7e90 = param_1;
    FUN_800312d4(7,&DAT_800e7eac,0xffffffec);
  }
  else {
    *param_1 = 2;
    iVar1 = _g_AngleTarget;
    param_1->state = 2;
    param_1->behavior_state = 2;
    param_1->action_state = 0;
    param_1->move_mode = (char)(iVar1 + 0x800 >> 4);
    g_CollisionType = 2;
    DAT_800e7e86 = 1;
    DAT_800e7e87 = 0;
    DAT_800e7fc5 = 1;
    DAT_800e7fc4 = 0;
    DAT_800e7ea9 = 0;
    FUN_80053d0c(&g_CollisionEntity);
    FUN_80074590(0x1d,0,0);
    _DAT_800e7ed8 = 0;
    FUN_80054d14(&g_CollisionEntity,0x13,2);
    if (DAT_800e8001 == '\0') {
      FUN_800538e0(&g_CollisionEntity,&DAT_800e7eac,0);
    }
    else {
      DAT_800e8001 = '\0';
    }
    local_1e = _g_CameraTargetX;
    local_1a = _g_CameraTargetY + _DAT_800e7ee2;
    local_16 = _g_CameraTargetZ;
    FUN_80031470(1,auStack_20,0,&g_EntityAngle);
    FUN_80074590(0xd,0xfffffffa,0);
  }
  return 1;
}
