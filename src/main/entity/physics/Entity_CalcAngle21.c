/**
 * @brief Entity angle calc variant 21: atan2 with Y component
 * @note Original: func_8001FDB4 at 0x8001FDB4
 */
// Entity_CalcAngle21



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8001fdb4(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20->kind;
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  if (((param_2 << 0x10 < 0) || (param_3 == 0x10)) || (DAT_800e7ec6 != -0x1b)) {
    DAT_800e7ef8 = (byte)param_2 & 0xf;
    DAT_800e7fc4 = 2;
    DAT_800e7e84 = 1;
    _DAT_800e7ed8 = 0;
    DAT_800e7e85 = (undefined1)param_3;
    DAT_800e7e86 = 0;
    if (DAT_800e7ec6 == -0x1b) {
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
    }
    FUN_80054d14(&DAT_800e7e80,param_4,uVar2);
    FUN_80053d0c(&DAT_800e7e80);
    *param_1 = 2;
    param_1->state = 2;
    param_1->behavior_state = 1;
    param_1->action_state = 0;
    _DAT_800e7e90 = param_1;
    FUN_800312d4(7,&DAT_800e7eac,0xffffffec);
  }
  else {
    *param_1 = 2;
    iVar1 = _DAT_1f80009c;
    param_1->state = 2;
    param_1->behavior_state = 2;
    param_1->action_state = 0;
    param_1->move_mode = (char)(iVar1 + 0x800 >> 4);
    DAT_800e7e85 = 2;
    DAT_800e7e86 = 1;
    DAT_800e7e87 = 0;
    DAT_800e7fc5 = 1;
    DAT_800e7fc4 = 0;
    DAT_800e7ea9 = 0;
    FUN_80053d0c(&DAT_800e7e80);
    FUN_80074590(0x1d,0,0);
    _DAT_800e7ed8 = 0;
    FUN_80054d14(&DAT_800e7e80,0x13,2);
    if (DAT_800e8001 == '\0') {
      FUN_800538e0(&DAT_800e7e80,&DAT_800e7eac,0);
    }
    else {
      DAT_800e8001 = '\0';
    }
    local_1e = _DAT_800e7eae;
    local_1a = _DAT_800e7eb2 + _DAT_800e7ee2;
    local_16 = _DAT_800e7eb6;
    FUN_80031470(1,auStack_20,0,&DAT_800e7ed6);
    FUN_80074590(0xd,0xfffffffa,0);
  }
  return 1;
}
