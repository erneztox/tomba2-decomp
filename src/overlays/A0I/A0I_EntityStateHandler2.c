// A0I_EntityStateHandler2 - Entity state machine variant: animation-driven states

/* WARNING: Control flow encountered bad instruction data */

void A0I_EntityStateHandler2(u8 *param_1)

{
  u8 bVar1;
  short sVar2;
  short sVar3;
  u16 uVar4;
  int iVar5;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    param_1->flags = 1;
    Sprite_Alloc1(param_1);
    if (param_1->sub_type == '\0') {
      return;
    }
    sVar2 = param_1->anim_counter;
    sVar3 = param_1->anim_counter;
    param_1->anim_counter = sVar3 + -0x40;
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + (short)(char)((u16)param_1->velocity_y >> 8);
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) + (int)param_1->normal_x * (int)sVar2;
    param_1->scale_y =
         param_1->scale_y + (int)param_1->normal_z * (int)sVar2;
    if ((short)(sVar3 + -0x40) < 0xc1) {
      param_1->anim_counter = 0xc0;
    }
    sVar2 = param_1->velocity_y;
    param_1->velocity_y = sVar2 + 0x100;
    if (0x2fff < (short)(sVar2 + 0x100)) {
      param_1->velocity_y = 0x3000;
    }
    *(short *)(param_1->sprite_ptr1 + 0xc) =
         *(short *)(param_1->sprite_ptr1 + 0xc) + param_1->sprite_y;
    if (-0x3241 < *(short *)(param_1 + 0x32)) {
      param_1->state = 3;
    }
    GTE_LoadScaleCompose(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((param_1->sub_type != '\0') || (DAT_800bfa59 == '\0')) {
        iVar5 = Entity_InitSubEntity(param_1,0xc,(u8)param_1->sub_type + 1);
        if (iVar5 != 0) {
          return;
        }
        param_1->scale_x = 0x1000;
        param_1->scale_y = 0x1000;
        param_1->scale_z = 0x1000;
        param_1->state = param_1->state + '\x01';
        if (param_1->sub_type == '\0') {
          *param_1 = 1;
          param_1->bounds_min_x = 400;
          param_1->bounds_size = 0x44c;
          param_1->bounds_min_y = 0x140;
          param_1->bounds_max_y = 0x280;
          param_1->collision_state = 0;
          param_1->move_mode = 0;
        }
        else {
          param_1->timer1 = 0x28;
          uVar4 = Math_Random();
          param_1->rot_x = uVar4 & 0xfff;
          uVar4 = Math_Random();
          param_1->rot_z = uVar4 & 0xfff;
          uVar4 = Math_Random();
          param_1->sprite_y = (uVar4 & 0x7f) - 0x3f;
          param_1->anim_counter = 0x400;
          param_1->velocity_y = 0;
          iVar5 = Math_CosGTE((int)param_1->rot_y);
          param_1->normal_x = (short)(iVar5 >> 4);
          iVar5 = Math_Cos((int)param_1->rot_y);
          param_1->normal_z = (short)(-iVar5 >> 4);
          *(short *)(param_1->sprite_ptr1 + 2) = *(short *)(param_1->sprite_ptr1 + 2) + 0x4b
          ;
          uVar4 = Math_Random();
          *(u16 *)(param_1->sprite_ptr1 + 4) =
               (*(short *)(param_1->sprite_ptr1 + 4) + -0xaa) - (uVar4 & 0x1f);
          *(s16 *)(param_1->sprite_ptr1 + 0x38) = 0x3000;
          *(s16 *)(param_1->sprite_ptr1 + 0x3a) = 0x3000;
          *(s16 *)(param_1->sprite_ptr1 + 0x3c) = 0x3000;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1->state = 3;
    }
  }
  else if (bVar1 == 2) {
    param_1->flags = 1;
    Sprite_Alloc1(param_1);
    param_1->state = 3;
    *param_1 = 2;
    DAT_800bfa59 = '\x01';
    func_0x0010b06c();
    Audio_PlaySoundEffect(0x2d,0xffffffe5,0);
  }
  else if (bVar1 == 3) {
    Entity_Dealloc(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

