/**
 * @brief Entity behavior that tracks and follows a parent entity with a trailing history buffer.
 *        Maintains a ring buffer of past positions at entity[0x38] (5 slots x 8 bytes).
 *        Used for companion characters and trailing visual effects in Tomba 2.
 * @note Original: func_80029B40 at 0x80029B40
 */
// Entity_Behavior_Trail

#include "tomba.h"
void Entity_Behavior_Trail(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 *puVar10;

  pcVar9 = (char *)(param_1 + 0x2c);
  puVar10 = (undefined2 *)(param_1 + 0x38);
  pcVar8 = *(char **)(param_1 + 0x10);  // Parent entity pointer
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      iVar7 = 0;
      if (bVar1 != 0) {
        return;
      }
      // Initialize state
      *(undefined1 *)(param_1 + 0x2c) = 4;
      param_1->state = 1;
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      param_1->flags = 0;
      *(undefined1 *)(param_1 + 0x2e) = 0xa0;
      do {
        iVar5 = iVar7 << 0x10;
        iVar7 = iVar7 + 1;
        puVar6 = (undefined4 *)((iVar5 >> 0xd) + (int)puVar10);
        *puVar6 = 0;
        puVar6->flags = 0;
      } while (iVar7 * 0x10000 >> 0x10 < 5);
      *(undefined2 *)(param_1 + 0x30) = pcVar8->pos_y;
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(pcVar8 + 0x32);
      uVar3 = pcVar8->pos_z;
      param_1->pos_z = 0;
      *(undefined2 *)(param_1 + 0x34) = uVar3;
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    // Shift history buffer
    iVar7 = 5;
    do {
      puVar6 = (undefined4 *)(((iVar7 << 0x10) >> 0xd) + (int)puVar10);
      iVar7 = iVar7 + -1;
      *puVar6 = puVar6[-2];
      puVar6->flags = puVar6[-1];
    } while (0 < iVar7 * 0x10000);
    *puVar10 = 0;
    *(undefined2 *)(param_1 + 0x3a) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    param_1->flags = 1;
    if (1 < param_1->behavior_state) {
      cVar2 = *pcVar9;
      *pcVar9 = cVar2 + '\x01';
      if ('\x04' < (char)(cVar2 + '\x01')) {
        *pcVar9 = '\0';
      }
      puVar10[*pcVar9 * 4 + 3] = 0;
      if ((param_1->pos_z & 7) < 3) {
        param_1->pos_z = param_1->pos_z + 1;
      }
      if (*pcVar9 != *(char *)(param_1 + 0x2d)) {
        return;
      }
      param_1->state = 3;
      return;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      return;
    }
    param_1->state = 3;
    return;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
LAB_80029c70:
    if ((*pcVar8 == '\x01') && (pcVar8->flag_5E == '\x01')) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
LAB_80029ca0:
      *(undefined2 *)(param_1 + 0x30) = pcVar8->pos_y;
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(pcVar8 + 0x32);
      *(undefined2 *)(param_1 + 0x34) = pcVar8->pos_z;
      param_1->pos_z = pcVar8->type_flags & 0xff0;
      bVar1 = param_1->sub_type;
      if (bVar1 == 0) {
        if (*pcVar8 != '\x01') goto LAB_80029d98;
      }
      else {
        if (2 < bVar1) {
          if (bVar1 < 6) {
            if (pcVar8->move_mode != '\x02') {
              bVar1 = param_1->action_state;
              bVar4 = bVar1 < 4;
LAB_80029d90:
              param_1->action_state = bVar1 + 1;
              if (bVar4) goto LAB_80029ddc;
            }
          }
          else if (pcVar8->move_mode != '\x03') {
            bVar1 = param_1->action_state;
            bVar4 = bVar1 < 3;
            goto LAB_80029d90;
          }
LAB_80029d98:
          param_1->behavior_state = param_1->behavior_state + '\x01';
          goto LAB_80029da8;
        }
        if ((*pcVar8 != '\x01') || (pcVar8->collision_state != '\0')) goto LAB_80029d98;
      }
      param_1->action_state = param_1->action_state + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_1->flags = 1;
      goto LAB_80029de0;
    }
    if (*pcVar8 == '\x02') {
      param_1->behavior_state = 1;
      goto LAB_80029c70;
    }
  }
  else {
    if (bVar1 == 2) goto LAB_80029ca0;
    if (bVar1 != 3) {
      param_1->flags = 1;
      goto LAB_80029de0;
    }
LAB_80029da8:
    if ((param_1->pos_z & 7) < 3) {
      param_1->pos_z = param_1->pos_z + 1;
    }
    else {
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
  }
LAB_80029ddc:
  param_1->flags = 1;
LAB_80029de0:
  if (((1 < (byte)pcVar8->state) || ((DAT_800e7fc6 & 4) != 0)) || (iVar7 = 5, DAT_800e7fc6 == 0)) {
    *(char *)(param_1 + 0x2d) = *pcVar9;
    param_1->state = 2;
    iVar7 = 5;
  }
  do {
    puVar6 = (undefined4 *)(((iVar7 << 0x10) >> 0xd) + (int)puVar10);
    iVar7 = iVar7 + -1;
    *puVar6 = puVar6[-2];
    puVar6->flags = puVar6[-1];
  } while (0 < iVar7 * 0x10000);
  *puVar10 = pcVar8->pos_y;
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(pcVar8 + 0x32);
  *(undefined2 *)(param_1 + 0x3c) = pcVar8->pos_z;
  return;
}
