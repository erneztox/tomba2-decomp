/**
 * @brief Entity throw state variant 2: spawns+throws object
 * @note Original: func_80067A40 at 0x80067A40
 */
// Entity_State_Throw2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80067a40(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 auStack_20->kind;
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  FUN_80076d68();
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (DAT_800bf80f == '\0') {
      FUN_8005245c();
      DAT_800bf80d = 3;
      param_1->action_state = param_1->action_state + '\x01';
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    param_1->action_state = 1;
    DAT_800bf80d = 2;
    DAT_800bf80f = '\x02';
    FUN_800662d8(param_1,0);
  }
  bVar1 = param_1->sub_action;
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar2 = param_1->velocity_y + 0x360;
      param_1->velocity_y = sVar2;
      if (0x3e00 < sVar2) {
        param_1->velocity_y = 0x3e00;
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      FUN_8005444c(param_1);
      if (param_1->collision_state == '\0') {
        uVar3 = param_1->type_flags & 0xf00;
        if ((((int)param_1->type_flags & 0x8000U) != 0) &&
           ((uVar3 == 0x100 || (uVar3 == 0x200)))) {
          param_1->sub_action = 2;
          FUN_80054198(param_1);
          FUN_80054d14(param_1,0x71,0);
          FUN_800551c4(param_1);
          local_1a = _DAT_1f80019e;
          local_1e = param_1->pos_y;
          param_1->velocity_y = 0x2400;
          param_1->rot_z = 0;
          local_16 = param_1->pos_z;
          if (DAT_800bf870 == '\0') {
            FUN_8003116c(0x10d,auStack_20,0xfffffff6);
          }
          else {
            if (DAT_800bf870 == '\x06') {
              uVar4 = 0x704;
            }
            else if (DAT_800bf870 == '\b') {
              uVar4 = 0x909;
            }
            else {
              if (DAT_800bf870 != '\x0e') {
                return;
              }
              uVar4 = 0xf06;
            }
            FUN_800312d4(uVar4,auStack_20,0xfffffff6);
          }
        }
      }
      else {
        FUN_80054198(param_1);
        FUN_80054d14(param_1,0xd2,3);
        param_1->sub_action = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    FUN_800674f4(param_1);
  }
  return;
}
