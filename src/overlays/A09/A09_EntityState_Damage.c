// A09_EntityState_Damage - Entity damage state: health, knockback

/* WARNING: Control flow encountered bad instruction data */

void A09_EntityState_Damage(u8 *param_1)

{
  u8 bVar1;
  char cVar2;
  u16 uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (param_1->sub_type == '\0') {
      func_0x0010a3ec(param_1);
    }
    iVar4 = GTE_ProjectSprite2(param_1);
    if (iVar4 != 0) {
      Entity_UpdateMatrix(param_1);
    }
    param_1->collision_state = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar4 = Entity_InitSubEntity(param_1,0xc,*(u8 *)((uint)(u8)param_1->sub_type * 2 + -0x7fef1ea0));
    if (iVar4 == 0) {
      param_1->combat_flag = 1;
      param_1->angle_offset = 0;
      param_1->state = param_1->state + '\x01';
      param_1->target_rot_y = param_1->rot_y;
      param_1->alloc_flags = param_1->alloc_flags | 0x80;
      cVar2 = *(char *)((uint)(u8)param_1->sub_type * 2 + -0x7fef1e9f);
      if (cVar2 != '\0') {
        param_1->collision_dir = cVar2;
        uVar5 = (uint)(u8)param_1->sub_type;
        param_1->draw_x =
             *(short *)((uint)(u8)param_1->sub_type * 0xc + -0x7fef1e9c) - param_1->pos_y;
        param_1->angle_delta = *(s16 *)(uVar5 * 0xc + -0x7fef1e9a);
        *(short *)(param_1 + 100) =
             *(short *)(uVar5 * 0xc + -0x7fef1e98) - param_1->pos_z;
        param_1->input_flags = *(u8 *)(uVar5 * 0xc + -0x7fef1e96);
        uVar3 = *(u16 *)(uVar5 * 0xc + -0x7fef1e94);
        param_1->bounds_size = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        param_1->bounds_min_x = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
        uVar3 = *(u16 *)(uVar5 * 0xc + -0x7fef1e92);
        *param_1 = 1;
        param_1->bounds_max_y = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        param_1->bounds_min_y = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
      }
      param_1->collision_state = 0;
      if (param_1->sub_type == '\0') {
        param_1->anim_id = 0;
        param_1->combat_flag = 1;
        param_1->angle_offset = 0xfc00;
        Entity_CalcAngleDelta(param_1);
        *param_1 = 2;
        halt_baddata();
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    Entity_Dealloc(param_1);
  }
  return;
}

