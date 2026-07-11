/**
 * @brief Camera main: full camera management system
 * @note Original: func_8006E464 at 0x8006E464
 */
// Camera_Main



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Camera_Main(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1->camera_mode != '\0') {
    return;
  }
  if ((DAT_800e7ee1 != 0) && ((*(u8 *)(param_1 + 0x72) & 0x80) != 0)) {
    return;
  }
  bVar1 = *(u8 *)(param_1 + 0x72);
  sVar2 = -_DAT_1f8000ee;
  if ((bVar1 & 0x40) != 0) {
    iVar4 = Math_CosGTE((int)*(s16 *)(param_1 + 0x8c));
    iVar8 = (int)sVar2;
    iVar4 = iVar4 * iVar8;
    uVar7 = (uint)*(s16 *)(param_1 + 0x8c);
    goto LAB_8006e7e4;
  }
  if ((DAT_800e7ee1 == 0) || ((DAT_800e7ee1 & 1) != 0)) {
    uVar7 = 0;
    if (DAT_800e7ffa == '\0') {
      if ((bVar1 & 2) == 0) {
        switch(g_CameraMode2) {
        case 0:
        case 0xc:
          break;
        case 1:
        case 9:
        case 0xb:
          if (_DAT_800e7fd8 != 0) {
            if (_g_CameraAngle != _g_EntityAngle) goto LAB_8006e628;
            goto LAB_8006e634;
          }
          break;
        default:
          goto joined_r0x8006e620;
        case 3:
          if ((*(s8*)(param_1 + 0x77) == '\0') && (g_GameState != '\x06')) {
            if (_g_CameraAngle == _g_EntityAngle) {
              uVar7 = (uint)param_1->rot_y + (uint)g_CameraSubMode * -0x40;
            }
            else {
              uVar7 = (uint)g_CameraSubMode * 0x40 - (uint)param_1->rot_y;
            }
            goto LAB_8006e640;
          }
        }
joined_r0x8006e620:
        if (_g_CameraAngle == _g_EntityAngle) goto LAB_8006e628;
      }
      else if ((bVar1 & 1) == 0) {
LAB_8006e628:
        uVar7 = (uint)param_1->rot_y;
        goto LAB_8006e640;
      }
LAB_8006e634:
      uVar7 = -(uint)param_1->rot_y;
    }
    else {
      sVar2 = sVar2 + -600;
    }
LAB_8006e640:
    iVar4 = uVar7 + (uint)_g_CameraAngle + (uint)param_1->sprite_y;
    *(s16 *)(param_1 + 0x8c) = (s16)iVar4;
    iVar4 = Math_CosGTE(iVar4 * 0x10000 >> 0x10);
    iVar8 = (int)sVar2;
    iVar4 = iVar4 * iVar8;
    uVar7 = (uint)*(s16 *)(param_1 + 0x8c);
    goto LAB_8006e7e4;
  }
  switch(DAT_800e7ee1 >> 4) {
  case 1:
    if ((DAT_800e7ee1 & 1) != 0) {
      uVar7 = _DAT_1f800196 + 0x200;
      break;
    }
    uVar7 = (uint)_DAT_1f800196 +
            ((int)((int)(s16)_DAT_1f800196 - (int)(s16)_g_CameraAngle & 0xfffU) >> 1) & 0xfff;
    goto LAB_8006e7c4;
  case 2:
    if ((DAT_800e7ee1 & 1) == 0) {
      uVar7 = _g_CameraAngle + 0x200;
      if (_DAT_1f800194 == _DAT_1f800196) {
        uVar7 = _g_CameraAngle + 0x600;
      }
    }
    else {
      iVar4 = Math_CompareAngle((int)(s16)_g_EntityAngle,(int)(s16)_g_CameraAngle,0);
      if (iVar4 == 0) goto switchD_8006e6a0_caseD_5;
      uVar7 = _g_CameraAngle + 0x600;
    }
    break;
  case 3:
    iVar4 = (uint)_DAT_1f800196 << 0x10;
    uVar7 = (uint)_DAT_1f800196 + ((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1) & 0xfff;
    goto LAB_8006e7c4;
  case 4:
    uVar7 = _DAT_1f800196 + 0x200;
    break;
  default:
switchD_8006e6a0_caseD_5:
    uVar7 = _g_CameraAngle + 0x200;
    break;
  case 8:
    if (DAT_800e7fc7 == '\0') {
      uVar7 = _g_CameraAngle + 0x400;
    }
    else {
      uVar7 = _g_CameraAngle + 0x400;
    }
  }
  uVar7 = uVar7 & 0xfff;
LAB_8006e7c4:
  iVar4 = Math_CosGTE(uVar7);
  iVar8 = (int)sVar2;
  iVar4 = iVar4 * iVar8;
LAB_8006e7e4:
  uVar6 = (uint)_g_PlayerPosX;
  iVar5 = Math_Cos(uVar7);
  iVar8 = (int)((((uint)_g_PlayerPosZ - (iVar5 * iVar8 >> 0xc)) - (_DAT_1f8000d8 >> 0x10)) * 0x10000
               ) >> 0x10;
  iVar4 = (int)(((uVar6 + (iVar4 >> 0xc)) - (_DAT_1f8000d0 >> 0x10)) * 0x10000) >> 0x10;
  sVar2 = Math_Atan2(-iVar8,iVar4);
  sVar3 = Math_SqrtGTE(iVar4 * iVar4 + iVar8 * iVar8);
  iVar4 = Math_CosGTE((int)sVar2);
  iVar8 = (int)sVar3;
  _DAT_1f8000d0 = _DAT_1f8000d0 + (iVar4 * iVar8 >> 1);
  iVar4 = Math_Cos((int)sVar2);
  _DAT_1f8000d8 = _DAT_1f8000d8 - (iVar4 * iVar8 >> 1);
  if (iVar8 < 0x191) {
    param_1->camera_flags = param_1->camera_flags | 1;
  }
  return;
}
