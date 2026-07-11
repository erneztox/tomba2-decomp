/**
 * @brief Entity behavior dispatcher: master behavior switch (375L)
 * @note Original: func_80055FBC at 0x80055FBC
 */
// Entity_BehaviorDispatcher



#include "tomba.h"
void FUN_80055fbc(int param_1,u8 param_2)

{
  u16 uVar1;
  s32 bVar2;
  s8 cVar3;
  s16 sVar4;
  s16 sVar5;
  s16 sVar6;
  uint uVar7;
  int iVar8;
  u8 bVar9;
  int iVar10;
  s16 *psVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((param_1->game_flags & 0x30) == 0) {
    psVar11 = (s16 *)(&DAT_800a455c + (uint)param_1->sprite_param1 * 8);
  }
  else {
    psVar11 = &DAT_800a4574;
  }
  sVar5 = *psVar11;
  uVar14 = (uint)(u16)psVar11->flags;
  uVar1 = psVar11->sub_type;
  uVar12 = (uint)uVar1;
  uVar13 = (uint)(u16)psVar11->kind;
  uVar15 = uVar12 - 0x240;
  if ((param_1->entity_flags & 0x30) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (param_1->type_flags & 0xf00) == 0x500;
  }
  if ((g_ActionFlag == '\0') || (DAT_800bf84d == '\0')) {
    if (param_1->state_165 == '\0') {
      cVar3 = param_1->sub_behavior;
      if (cVar3 == '\x01') {
        sVar6 = 0xc0f;
      }
      else if ((cVar3 < '\x02') || (sVar6 = 0x110f, cVar3 != '\x02')) {
        sVar6 = psVar11->kind;
      }
    }
    else {
      sVar5 = (s16)((uint)(sVar5 * 0x13) >> 4);
      uVar14 = psVar11->flags * 3;
      uVar13 = (uint)(psVar11->kind * 0x13) >> 4;
      sVar6 = (s16)(psVar11->kind * 0x13 >> 4);
    }
    param_1->angle_limit = sVar6;
  }
  else {
    param_1->angle_limit = 0xc0f;
    uVar13 = 0xc0f;
  }
  if (bVar2) {
    uVar7 = (uint)sVar5;
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + 7;
    }
    sVar5 = (s16)(uVar7 >> 3);
    uVar12 = (uint)(((int)(uVar12 << 0x10) >> 0x10) - ((int)(uVar12 << 0x10) >> 0x1f)) >> 1;
    uVar15 = (uint)(((int)(uVar15 * 0x10000) >> 0x10) - ((int)(uVar15 * 0x10000) >> 0x1f)) >> 1;
  }
  if (param_1->state_flag145 != '\0') {
    if ((param_1->entity_flags & 0x60) == 0) {
      uVar14 = (uVar14 & 0xffff) << 1;
    }
    else {
      uVar14 = (uVar14 & 0xffff) << 4;
    }
  }
  bVar9 = param_2 & 3;
  sVar4 = (s16)uVar13;
  sVar6 = (s16)uVar12;
  if (bVar9 != 1) {
    if (1 < bVar9) {
      if (3 < bVar9) {
        return;
      }
      if ((((param_2 & 8) == 0) || ((param_1->entity_flags & 0x60) == 0)) ||
         (param_1->state_flag145 == '\0')) {
        if (((param_1->input_flags & 3) != (param_2 & 3)) &&
           (param_1->state_flag145 != '\0')) {
          *(u8 *)(param_1 + 0x149) = param_2 & 1;
          uVar12 = uVar15;
        }
      }
      else {
        uVar12 = (u16)psVar11->sub_type + 0x80;
      }
      iVar8 = param_1->anim_counter - uVar12;
      if (param_1->anim_counter < 1) {
        iVar8 = param_1->anim_counter + uVar12;
        param_1->anim_counter = (s16)iVar8;
        if (iVar8 * 0x10000 < 0) {
          return;
        }
        param_1->anim_counter = 0;
      }
      else {
        param_1->anim_counter = (s16)iVar8;
        if (0 < iVar8 * 0x10000) {
          return;
        }
        param_1->anim_counter = 0;
      }
      *(u8 *)(param_1 + 0x149) = param_2 & 3;
      return;
    }
    if (bVar9 != 0) {
      return;
    }
    if ((param_1->input_flags != 0) && ((param_1->input_flags & 1) == 0)) {
      *(u8 *)(param_1 + 0x149) = 0;
      if ((param_1->input_flags & 8) == 0) {
        iVar8 = param_1->anim_counter - uVar12;
        param_1->anim_counter = (s16)iVar8;
        if (-1 < iVar8 * 0x10000) {
          return;
        }
        param_1->anim_counter = 0;
        return;
      }
      iVar8 = param_1->anim_counter + uVar14;
      if (param_1->anim_counter < 0xd01) {
        param_1->anim_counter = (s16)iVar8;
        if (iVar8 * 0x10000 >> 0x10 < 0xd01) {
          return;
        }
      }
      else {
        iVar8 = param_1->anim_counter - uVar15;
        param_1->anim_counter = (s16)iVar8;
        if (0xcff < iVar8 * 0x10000 >> 0x10) {
          return;
        }
      }
      param_1->anim_counter = 0xd00;
      return;
    }
    bVar9 = *(u8 *)(param_1 + 0x149);
    if ((bVar9 & 2) == 0) {
      if (bVar9 == 5) {
        if (!bVar2) {
          iVar8 = param_1->anim_counter + uVar12;
          param_1->anim_counter = (s16)iVar8;
          if (iVar8 * 0x10000 < 0) {
            return;
          }
          if (param_1->state_flag145 == '\0') {
            param_1->anim_counter = sVar4;
          }
          goto LAB_80056290;
        }
        iVar8 = (int)(uVar13 << 0x10) >> 0x10;
        iVar10 = param_1->anim_counter + uVar12;
        param_1->anim_counter = (s16)iVar10;
        if (iVar10 * 0x10000 >> 0x10 < -(iVar8 - ((int)(uVar13 << 0x10) >> 0x1f) >> 1)) {
          return;
        }
        if (param_1->state_flag145 != '\0') goto LAB_80056290;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 3;
        }
        sVar5 = (s16)(iVar8 >> 2);
      }
      else {
        iVar8 = (int)param_1->anim_counter;
        if (0 < iVar8) {
          if (iVar8 < sVar5) {
            param_1->anim_counter = sVar5;
          }
          else {
            iVar10 = param_1->anim_counter - uVar15;
            if (param_1->angle_limit < iVar8) {
              param_1->anim_counter = (s16)iVar10;
              if (iVar10 * 0x10000 >> 0x10 < (int)param_1->angle_limit) {
                param_1->anim_counter = param_1->angle_limit;
              }
            }
            else {
              iVar8 = param_1->anim_counter + uVar14;
              param_1->anim_counter = (s16)iVar8;
              if ((int)param_1->angle_limit < iVar8 * 0x10000 >> 0x10) {
                param_1->anim_counter = param_1->angle_limit;
              }
            }
          }
          goto LAB_80056290;
        }
        if (param_1->state_flag145 == '\0') {
          if (bVar9 == 1) {
            iVar10 = sVar4 * 3;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 3;
            }
            if (iVar8 <= -(iVar10 >> 2)) {
              iVar8 = (int)param_1->anim_counter;
              iVar10 = (int)(s16)uVar1;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              if (iVar10 == 0) {
                trap(0x1c00);
              }
              if ((iVar10 == -1) && (iVar8 == -0x80000000)) {
                trap(0x1800);
              }
              *(u8 *)(param_1 + 0x149) = 5;
              iVar8 = iVar8 / iVar10 + -7;
              param_1->anim_frame = (s16)iVar8;
              if (iVar8 * 0x10000 < 1) {
                param_1->anim_frame = 1;
              }
              param_1->anim_counter = param_1->anim_counter + sVar6;
              return;
            }
          }
          if (param_1->state_flag145 != '\0') goto LAB_80056498;
        }
        else {
LAB_80056498:
          if ((param_1->entity_flags & 0x60) != 0) {
            sVar5 = param_1->anim_counter + (s16)uVar14;
            goto LAB_8005628c;
          }
        }
        sVar5 = param_1->anim_counter + sVar6;
      }
    }
    else {
      if ((bVar9 & 1) != 0) goto LAB_80056290;
      sVar5 = param_1->anim_counter + sVar5;
    }
LAB_8005628c:
    param_1->anim_counter = sVar5;
LAB_80056290:
    *(u8 *)(param_1 + 0x149) = 0;
    return;
  }
  if ((param_1->input_flags != 0) && ((param_1->input_flags & 1) != 0)) {
    *(u8 *)(param_1 + 0x149) = 1;
    if ((param_1->input_flags & 8) == 0) {
      iVar8 = param_1->anim_counter + uVar12;
      param_1->anim_counter = (s16)iVar8;
      if (iVar8 * 0x10000 < 1) {
        return;
      }
      param_1->anim_counter = 0;
      return;
    }
    iVar8 = param_1->anim_counter + uVar15;
    if (param_1->anim_counter < -0xd00) {
      param_1->anim_counter = (s16)iVar8;
      if (iVar8 * 0x10000 >> 0x10 < -0xcff) {
        return;
      }
    }
    else {
      iVar8 = param_1->anim_counter - uVar14;
      param_1->anim_counter = (s16)iVar8;
      if (-0xd01 < iVar8 * 0x10000 >> 0x10) {
        return;
      }
    }
    param_1->anim_counter = 0xf300;
    return;
  }
  bVar9 = *(u8 *)(param_1 + 0x149);
  if ((bVar9 & 2) == 0) {
    if (bVar9 == 4) {
      if (bVar2) {
        iVar8 = (int)(uVar13 << 0x10) >> 0x10;
        iVar10 = param_1->anim_counter - uVar12;
        param_1->anim_counter = (s16)iVar10;
        if (iVar8 - ((int)(uVar13 << 0x10) >> 0x1f) >> 1 < iVar10 * 0x10000 >> 0x10) {
          return;
        }
        if (param_1->state_flag145 != '\0') goto LAB_8005659c;
        iVar8 = -iVar8;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 3;
        }
        sVar6 = (s16)(iVar8 >> 2);
      }
      else {
        iVar8 = param_1->anim_counter - uVar12;
        param_1->anim_counter = (s16)iVar8;
        if (0 < iVar8 * 0x10000) {
          return;
        }
        if (param_1->state_flag145 != '\0') goto LAB_8005659c;
        sVar6 = -sVar4;
      }
    }
    else {
      iVar8 = (int)param_1->anim_counter;
      if (iVar8 < 0) {
        sVar6 = -sVar5;
        if (iVar8 <= -(int)sVar5) {
          if (iVar8 < -(int)param_1->angle_limit) {
            iVar8 = param_1->anim_counter + uVar15;
            param_1->anim_counter = (s16)iVar8;
            iVar10 = iVar8 * 0x10000 >> 0x10;
            iVar8 = -(int)param_1->angle_limit;
          }
          else {
            iVar8 = param_1->anim_counter - uVar14;
            param_1->anim_counter = (s16)iVar8;
            iVar8 = iVar8 * 0x10000 >> 0x10;
            iVar10 = -(int)param_1->angle_limit;
          }
          if (iVar8 < iVar10) {
            param_1->anim_counter = -param_1->angle_limit;
          }
          goto LAB_8005659c;
        }
      }
      else {
        if (param_1->state_flag145 == '\0') {
          cVar3 = '\0';
          if (bVar9 == 0) {
            iVar10 = sVar4 * 3;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 3;
            }
            if (iVar10 >> 2 <= iVar8) {
              iVar8 = (int)param_1->anim_counter;
              iVar10 = (int)(s16)uVar1;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              if (iVar10 == 0) {
                trap(0x1c00);
              }
              if ((iVar10 == -1) && (iVar8 == -0x80000000)) {
                trap(0x1800);
              }
              *(u8 *)(param_1 + 0x149) = 4;
              iVar8 = iVar8 / iVar10 + -7;
              param_1->anim_frame = (s16)iVar8;
              if (iVar8 * 0x10000 < 1) {
                param_1->anim_frame = 1;
              }
              param_1->anim_counter = param_1->anim_counter - sVar6;
              return;
            }
            cVar3 = param_1->state_flag145;
          }
          if (cVar3 != '\0') goto LAB_8005679c;
        }
        else {
LAB_8005679c:
          if ((param_1->entity_flags & 0x60) != 0) {
            sVar6 = param_1->anim_counter - (s16)uVar14;
            goto LAB_80056594;
          }
        }
        sVar6 = param_1->anim_counter - sVar6;
      }
    }
  }
  else {
    if ((bVar9 & 1) == 0) goto LAB_8005659c;
    sVar6 = param_1->anim_counter - sVar5;
  }
LAB_80056594:
  param_1->anim_counter = sVar6;
LAB_8005659c:
  *(u8 *)(param_1 + 0x149) = 1;
  return;
}
