// A0G_EntityStateMachine - Entity state machine: health, sub_action dispatch

/* WARNING: Control flow encountered bad instruction data */

void A0G_EntityStateMachine(u8 *param_1)

{
  u8 bVar1;
  char cVar2;
  u16 uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (0x13 < (u8)param_1->sub_type) {
      iVar4 = GTE_ProjectSprite2(param_1);
      if (iVar4 != 0) {
        Entity_UpdateMatrix(param_1);
      }
      param_1->collision_state = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not emulate address calculation at 0x08012614 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(u8)param_1->sub_type * 4 + -0x7fef6ed0))();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar4 = Entity_InitSubEntity(param_1,0xc,*(u8 *)((uint)(u8)param_1->sub_type * 2 + -0x7fef2d54));
    if (iVar4 == 0) {
      param_1->combat_flag = 1;
      param_1->angle_offset = 0;
      param_1->state = param_1->state + '\x01';
      param_1->target_rot_y = param_1->rot_y;
      param_1->alloc_flags = param_1->alloc_flags | 0x80;
      cVar2 = *(char *)((uint)(u8)param_1->sub_type * 2 + -0x7fef2d53);
      if (cVar2 != '\0') {
        param_1->collision_dir = cVar2;
        uVar5 = (uint)(u8)param_1->sub_type;
        param_1->draw_x =
             *(short *)((uint)(u8)param_1->sub_type * 0xc + -0x7fef2d2c) - param_1->pos_y;
        param_1->angle_delta = *(s16 *)(uVar5 * 0xc + -0x7fef2d2a);
        *(short *)(param_1 + 100) =
             *(short *)(uVar5 * 0xc + -0x7fef2d28) - param_1->pos_z;
        param_1->input_flags = *(u8 *)(uVar5 * 0xc + -0x7fef2d26);
        uVar3 = *(u16 *)(uVar5 * 0xc + -0x7fef2d24);
        param_1->bounds_size = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        param_1->bounds_min_x = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
        uVar3 = *(u16 *)(uVar5 * 0xc + -0x7fef2d22);
        *param_1 = 1;
        param_1->bounds_max_y = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        param_1->bounds_min_y = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
      }
      param_1->anim_id = 1;
      param_1->collision_state = 0;
      param_1->flag_5E = 0;
      if ((u8)param_1->sub_type < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x08012494 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)(u8)param_1->sub_type * 4 + -0x7fef6f20))();
        return;
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

