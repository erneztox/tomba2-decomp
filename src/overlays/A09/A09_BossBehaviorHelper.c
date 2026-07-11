// A09_BossBehaviorHelper - Boss behavior helper: target tracking, movement

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_BossBehaviorHelper(int param_1,s16 *param_2)

{
  s16 uVar1;
  s16 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  param_1->counter1 = 3;
  if (2 < _g_CollectibleCount) {
    iVar6 = 0;
    param_1->counter2 = 3;
    param_1->sprite_flags = 4;
    param_1->bounds_min_x = 0x80;
    param_1->bounds_size = 0x100;
    param_1->bounds_min_y = 0xdc;
    param_1->bounds_max_y = 0x1c2;
    param_1->render_flags = 0;
    param_1->scale_x = 0x1000;
    param_1->scale_y = 0x1000;
    param_1->scale_z = 0x1000;
    iVar4 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        iVar6 = iVar6 + 1;
        iVar3 = Entity_AllocFromFreeList();
        iVar4->sprite_ptr1 = iVar3;
        *(s16 *)(iVar3 + 6) = *param_2;
        **(s16 **)(iVar4 + 0xc0) = param_2->flags;
        *(s16 *)(iVar4->sprite_ptr1 + 2) = param_2->kind;
        *(s16 *)(iVar4->sprite_ptr1 + 4) = param_2->sub_type;
        *(s16 *)(iVar4->sprite_ptr1 + 8) = 0;
        *(s16 *)(iVar4->sprite_ptr1 + 10) = 0;
        *(s16 *)(iVar4->sprite_ptr1 + 0xc) = 0;
        *(s16 *)(iVar4->sprite_ptr1 + 0x38) = 0x1000;
        *(s16 *)(iVar4->sprite_ptr1 + 0x3a) = 0x1000;
        psVar5 = param_2 + 4;
        *(s16 *)(iVar4->sprite_ptr1 + 0x3c) = 0x1000;
        param_2 = param_2 + 5;
        Entity_SetSubEntityData(iVar4->sprite_ptr1,0xc,(int)*psVar5);
        iVar4 = iVar4 + 4;
      } while (iVar6 < (int)(uint)param_1->counter1);
    }
    *(u8 *)(param_1->sprite_ptr1 + 0x3f) = 0x20;
    *(u8 *)(param_1->sprite_ptr2 + 0x3f) = 0xf0;
    *(u8 *)(*(int *)(param_1 + 200) + 0x3f) = 0xf0;
    param_1->collision_state = 0;
    param_1->move_mode = 0;
    Entity_PhysicsStep(param_1);
    Entity_PhysicsStepRot(param_1);
    uVar2 = _DAT_1f8001a2;
    uVar1 = _DAT_1f8001a0;
    param_1->draw_x = _DAT_1f8001a0;
    param_1->angle_delta = uVar2;
    param_1->rot_y = uVar1;
    *(s16 *)(param_1->sprite_ptr1 + 10) = *(s16 *)(param_1 + 0x7c);
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

