// A09_EntityState_Dealloc - Entity state: Entity_Dealloc on state 3

/* WARNING: Control flow encountered bad instruction data */

void A09_EntityState_Dealloc(u8 *param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        Entity_Dealloc(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (((int)(uint)DAT_800bfa3d >> ((u8)param_1->sub_type & 0x1f) & 1U) != 0) {
      param_1->state = 3;
      halt_baddata();
    }
    iVar2 = Entity_InitSubEntity(param_1,0xc,(int)*(short *)((uint)(u8)param_1->sub_type * 2 + -0x7fef1c74));
    if (iVar2 != 0) {
      return;
    }
    param_1->bounds_min_x = 0x118;
    param_1->bounds_size = 0x230;
    *param_1 = 1;
    param_1->bounds_min_y = 0x172;
    param_1->bounds_max_y = 0x172;
    param_1->move_mode = 0;
    param_1->collision_state = 0;
    param_1->draw_x = 0;
    param_1->state = param_1->state + '\x01';
    if (DAT_800bfa41 == '\0') {
      param_1->behavior_state = 0;
      halt_baddata();
    }
    if (*(char *)(*(short *)((uint)(u8)param_1->sub_type * 2 + -0x7fef1c68) + -0x7ff4074c) != '\0') {
      param_1->behavior_state = 2;
      *param_1 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1->behavior_state = 1;
    iVar2 = func_0x00031220(0xa02,0,0);
    if (iVar2 != 0) {
      iVar2->sub_type = param_1->sub_type + '\x01';
      iVar2->pos_x = param_1->pos_y;
      iVar2->pos_y = *(short *)(param_1 + 0x32) + -0x96;
      *(s16 *)(iVar2 + 0x30) = param_1->pos_z;
      if (param_1->sub_type != '\0') {
        iVar2->angle_offset = 0xd00;
        iVar2->sprite_y = 0xfb17;
        iVar2->rot_x = 0xced;
        param_1->parent = iVar2;
        halt_baddata();
      }
      iVar2->angle_offset = 0x780;
      iVar2->sprite_y = 0xfcc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  param_1->flags = 1;
  Sprite_Alloc1(param_1);
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    iVar2 = func_0x0010bd00(param_1);
    if (iVar2 != 0) {
      param_1->action_state = 0;
      *param_1 = 2;
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = func_0x0010c01c(param_1);
      if (iVar2 != 0) {
        param_1->action_state = 0;
        param_1->behavior_state = param_1->behavior_state + '\x01';
        halt_baddata();
      }
      goto LAB_080135b8;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
  }
  if (param_1->sub_type == '\0') {
    func_0x0010be20(param_1);
  }
LAB_080135b8:
  Entity_UpdateMatrix(param_1);
  param_1->move_mode = 0;
  param_1->collision_state = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

