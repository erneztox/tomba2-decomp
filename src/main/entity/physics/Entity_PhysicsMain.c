/**
 * @brief Entity physics main: collision + movement pipeline
 * @note Original: func_80063F9C at 0x80063F9C
 */
// Entity_PhysicsMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void FUN_80063f9c(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  s8 cVar3;
  u8 uVar4;
  int iVar5;
  
  iVar5 = param_1->state_ptr;
  FUN_80055e28(param_1,0);
  iVar5->collision_state = 1;
  FUN_800635d4(param_1,0);
  FUN_80076d68(param_1);
  FUN_80063b94(param_1,0);
  if (*(u8 *)(param_1 + 0x168) < 3) {
    g_SFXState = 0x47;
  }
  else {
    g_SFXState = 0x87;
  }
  if (param_1->anim_param == '\0') {
    if ((_g_PadState & _g_InputMask) != 0) {
      bVar1 = param_1->behavior_flags;
      param_1->anim_param = 1;
      param_1->physics_type = bVar1;
      if (param_1->direction != '\0') {
        param_1->physics_type = bVar1 & 0xe;
        param_1->physics_type = bVar1 & 0xe | ~bVar1 & 1;
      }
    }
    if (param_1->anim_param == '\0') goto switchD_8006409c_default;
  }
  switch(*(u8 *)(param_1 + 0x168)) {
  case 0:
  case 1:
    cVar3 = (&DAT_800a47a4)[param_1->physics_type];
    if (cVar3 == '\x04') {
      if (0x140 < (param_1->rot_z + 0xa0U & 0xfff)) break;
      cVar3 = '\x04';
    }
    else if ((param_1->input_state == '\0') || ((param_1->rot_z & 0xfff) < 0xb01)
            ) break;
    FUN_80064358(param_1,cVar3,iVar5);
    param_1->rot_z = 0;
    break;
  case 2:
    uVar4 = (&DAT_800a47b4)[param_1->physics_type];
    switch(uVar4) {
    case 0:
    case 1:
      if ((param_1->anim_counter != 0) || ((param_1->rot_z & 0xfff) < 0xa01))
      goto switchD_8006409c_default;
      goto LAB_80064280;
    case 2:
    case 5:
      if (param_1->input_state == '\0') goto switchD_8006409c_default;
switchD_80064210_caseD_2:
      uVar2 = param_1->rot_z - 0xb60;
      break;
    case 3:
      if (param_1->input_state == '\0') goto switchD_8006409c_default;
      uVar2 = param_1->rot_z - 0xd60;
      break;
    case 4:
      uVar2 = param_1->rot_z + 0xa0;
      break;
    default:
      goto switchD_8006409c_default;
    }
LAB_8006426c:
    if ((uVar2 & 0xfff) < 0x141) {
LAB_80064280:
      FUN_80064358(param_1,uVar4,iVar5);
    }
    break;
  case 3:
  case 4:
    uVar4 = (&DAT_800a47b4)[param_1->physics_type];
    switch(uVar4) {
    case 0:
      if (0x140 < (param_1->rot_z - 0x600U & 0xfff)) goto switchD_8006409c_default;
      param_1->rot_z = 0x700;
      goto LAB_80064280;
    case 1:
      uVar2 = param_1->rot_z - 0x960;
      break;
    case 2:
    case 5:
      goto switchD_80064210_caseD_2;
    case 3:
      uVar2 = param_1->rot_z - 0xd60;
      break;
    case 4:
      uVar2 = param_1->rot_z + 0xa0;
      break;
    default:
      goto switchD_8006409c_default;
    }
    goto LAB_8006426c;
  }
switchD_8006409c_default:
  if (*(s8*)(iVar5 + 0xc) != '\x04') {
    return;
  }
  bVar1 = iVar5->kind;
  if (bVar1 != 4) {
    if (bVar1 < 5) {
      if (bVar1 != 2) {
        return;
      }
    }
    else if (bVar1 != 7) {
      if (bVar1 != 0x11) {
        return;
      }
      FUN_80063ecc(param_1,iVar5);
      return;
    }
  }
  if (g_GameState == '\0') {
    Overlay_8010ad68(param_1,iVar5);
  }
  else if (g_GameState == '\x06') {
    Overlay_80113acc(param_1,iVar5);
  }
  if (g_GameState == '\x0f') {
    Overlay_8010b194(param_1,iVar5);
  }
  return;
}
