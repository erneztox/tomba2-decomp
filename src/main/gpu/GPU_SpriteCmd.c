/**
 * @brief GPU sprite command processor: entity->anim_id flags, dispatches
 * @note Original: func_8007D208 at 0x8007D208
 */
// GPU_SpriteCmd



void FUN_8007d208(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  ushort local_10;
  ushort local_e->sub_type;
  
  bVar1 = param_1->anim_id;
  if ((bVar1 & 1) == 0) {
    return;
  }
  if ((bVar1 & 0x80) == 0) {
    param_1->collision_state = param_1->collision_state + '\x01';
  }
  else {
    param_1->anim_id = bVar1 & 0x7f;
  }
  param_1->collision_dir = 1;
  param_1->anim_id = param_1->anim_id & 0xfe;
  if ((((param_1->anim_counter == 1) || (DAT_800bfe4e == '\0')) &&
      (param_1->draw_y != -1)) && (param_1->sprite_flags != -1)) {
    FUN_8001d41c((int)param_1->draw_y,
                 (uint)param_1->sprite_flags + (uint)param_1->collision_state);
  }
  FUN_8007ceec(param_1,&local_10,local_e);
  bVar1 = param_1->sub_anim_id;
  param_1->rot_x =
       0xa0 - (short)(((int)((uint)local_10 << 0x10) >> 0x10) -
                      ((int)((uint)local_10 << 0x10) >> 0x1f) >> 1);
  if (bVar1 == 1) {
    bVar1 = param_1->sub_type;
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) goto LAB_8007d574;
        sVar2 = 0xd0;
        uVar3 = local_e->type;
      }
      else {
        if (bVar1 != 2) {
          sVar2 = 0x90;
          if (bVar1 != 3) goto LAB_8007d574;
          goto LAB_8007d570;
        }
        uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                         ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
        sVar2 = 0x40;
      }
      goto LAB_8007d56c;
    }
    param_1->rot_x = 0x11;
    sVar2 = 0xbf;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_8007d574;
      bVar1 = param_1->sub_type;
      if (bVar1 == 4) {
        param_1->rot_x = 0x10;
        sVar2 = 0x40;
        uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                         ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
      }
      else if (bVar1 < 5) {
        sVar2 = param_1->anim_timer;
        if (sVar2 == 0) {
          sVar2 = 0x40;
          uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                           ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
        }
        else if (sVar2 < 1) {
          if (sVar2 != -1) goto LAB_8007d574;
          if (((*(char *)(param_1 + 0x18) == '\0') || (*(char *)(param_1 + 0x18) == '\x05')) ||
             (param_1->draw_y == -1)) {
            sVar2 = 0xb0;
            uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                             ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
          }
          else {
            sVar2 = 0x40;
            uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                             ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
          }
        }
        else {
          if (sVar2 != 1) goto LAB_8007d574;
          sVar2 = 0xb0;
          uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                           ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
        }
      }
      else {
        if (bVar1 != 5) goto LAB_8007d574;
        param_1->rot_x = 0x130 - local_10;
        sVar2 = 0x40;
        uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                         ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
      }
    }
    else {
      if (bVar1 != 2) goto LAB_8007d574;
      if (param_1->sub_type == '\0') {
        sVar2 = 0x70;
        uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                         ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
      }
      else {
        sVar2 = 0x18;
        uVar3 = (ushort)(((int)((uint)local_e->type << 0x10) >> 0x10) -
                         ((int)((uint)local_e->type << 0x10) >> 0x1f) >> 1);
      }
    }
LAB_8007d56c:
    sVar2 = sVar2 - uVar3;
  }
LAB_8007d570:
  param_1->rot_y = sVar2;
LAB_8007d574:
  param_1->rot_z = local_10;
  param_1->target_rot_y = local_e->type;
  return;
}
