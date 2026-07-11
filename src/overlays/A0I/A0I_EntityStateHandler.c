// A0I_EntityStateHandler - Entity state machine: action dispatch, health check

/* WARNING: Control flow encountered bad instruction data */

void A0I_EntityStateHandler(u8 *param_1)

{
  u8 bVar1;
  char cVar2;
  u16 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (param_1->sub_type == '\0') {
      func_0x0010a840(param_1);
      bVar1 = param_1->sub_action;
      if (bVar1 == 1) {
        iVar5 = Entity_ActivatePool3(0x6c,2);
        param_1->script_ptr = iVar5;
        if (iVar5 != 0) {
          param_1->anim_timer = 0x5a;
          param_1->sub_action = param_1->sub_action + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (1 < bVar1) {
        if (bVar1 != 2) {
          halt_baddata();
        }
        sVar4 = param_1->anim_timer;
        param_1->anim_timer = sVar4 + -1;
        if ((short)(sVar4 + -1) == -1) {
          if (*(u8 *)(param_1->script_ptr + 4) < 2) {
            *(u8 *)(param_1->script_ptr + 4) = 2;
            param_1->script_ptr = 0;
          }
          param_1->sub_action = 0;
        }
      }
    }
    iVar5 = GTE_ProjectSprite2(param_1);
    if (iVar5 != 0) {
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
    iVar5 = Entity_InitSubEntity(param_1,0xc,*(u8 *)((uint)(u8)param_1->sub_type * 2 + -0x7fef35f0));
    if (iVar5 == 0) {
      param_1->combat_flag = 1;
      param_1->angle_offset = 0;
      param_1->state = param_1->state + '\x01';
      param_1->target_rot_y = param_1->rot_y;
      param_1->alloc_flags = param_1->alloc_flags | 0x80;
      cVar2 = *(char *)((uint)(u8)param_1->sub_type * 2 + -0x7fef35ef);
      if (cVar2 != '\0') {
        param_1->collision_dir = cVar2;
        uVar6 = (uint)(u8)param_1->sub_type;
        param_1->draw_x =
             *(short *)((uint)(u8)param_1->sub_type * 0xc + -0x7fef35ec) - param_1->pos_y;
        param_1->angle_delta = *(s16 *)(uVar6 * 0xc + -0x7fef35ea);
        *(short *)(param_1 + 100) =
             *(short *)(uVar6 * 0xc + -0x7fef35e8) - param_1->pos_z;
        param_1->input_flags = *(u8 *)(uVar6 * 0xc + -0x7fef35e6);
        uVar3 = *(u16 *)(uVar6 * 0xc + -0x7fef35e4);
        param_1->bounds_size = uVar3;
        iVar5 = (uint)uVar3 << 0x10;
        param_1->bounds_min_x = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
        uVar3 = *(u16 *)(uVar6 * 0xc + -0x7fef35e2);
        *param_1 = 1;
        param_1->bounds_max_y = uVar3;
        iVar5 = (uint)uVar3 << 0x10;
        param_1->bounds_min_y = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
      }
      param_1->collision_state = 0;
      param_1->flag_5E = 0;
      if (param_1->sub_type == '\0') {
        param_1->anim_id = 0;
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

