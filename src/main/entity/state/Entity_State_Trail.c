/**
 * @brief Entity trail state: spawns trail particles behind entity
 * @note Original: func_8006BE88 at 0x8006BE88
 */
// Entity_State_Trail



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006be88(int param_1)

{
  s16 uVar1;
  int iVar2;
  int iVar3;
  s16 sVar4;
  u8 auStack_28->kind;
  s16 local_26;
  s16 local_22;
  s16 local_1e;
  
  if (param_1->move_mode < 2) {
    iVar2 = FUN_800495dc(param_1,0,0x5a);
    if ((iVar2 < 1) && (iVar3 = FUN_800495dc(param_1,0,0), iVar3 < 1)) {
      if (((iVar2 == -1) || (iVar3 == -1)) &&
         (((_DAT_1f8001a6 & 0xf00) == 0x100 || ((_DAT_1f8001a6 & 0xf00) == 0x200)))) {
        param_1->move_mode = 3;
        if (g_GameState == '\0') {
          func_0x8010caec(param_1);
        }
        else if (g_GameState == '\x04') {
          func_0x801162e8(param_1);
        }
        else if (g_GameState == '\x06') {
          func_0x801147cc(param_1);
        }
        else if (g_GameState == '\b') {
          func_0x8011370c(param_1);
        }
        else if (g_GameState == '\x0e') {
          func_0x8010b4f4(param_1);
        }
      }
    }
    else {
      DAT_800e807e = 4;
      local_26 = param_1->pos_y;
      param_1->move_mode = 3;
      local_22 = *(s16 *)(param_1 + 0x32) + 0x5a;
      local_1e = param_1->pos_z;
      FUN_8003116c(param_1->kind + 0xc,auStack_28,0xffffffb0);
      FUN_80031470(2,auStack_28,param_1->flag_5E,param_1 + 0x68);
      FUN_80074590(0x32,0,0);
      iVar2 = 0;
      sVar4 = _g_EntityAngle;
      if (param_1->flag_5E != '\0') {
        do {
          iVar3 = FUN_8007ab20();
          if (iVar3 == 0) {
            return;
          }
          iVar3->pos_y = param_1->pos_y;
          *(s16 *)(iVar3 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x5a;
          uVar1 = param_1->pos_z;
          iVar3->callback = FUN_8006c608;
          iVar3->kind = 10;
          iVar3->sub_type = (char)iVar2;
          iVar3->pos_z = uVar1;
          if (param_1->kind == '\a') {
            iVar3->flag_5E = 0;
          }
          else {
            iVar3->flag_5E = 1;
          }
          iVar3->rot_y = sVar4;
          iVar2 = iVar2 + 1;
          sVar4 = sVar4 + 0x800;
        } while (iVar2 < 2);
      }
    }
  }
  return;
}
