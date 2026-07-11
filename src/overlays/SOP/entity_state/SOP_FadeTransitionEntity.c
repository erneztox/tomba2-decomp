// SOP_FadeTransitionEntity (SOP_FadeTransitionEntity) - Fade/color transition entity: manages RGB alpha channels, interpolates between states

/* WARNING: Control flow encountered bad instruction data */

void SOP_FadeTransitionEntity(int param_1)

{
  u8 bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1->state;
  iVar4 = param_1->parent;
  if (bVar1 == 1) {
    if (g_GameSubState < 5) {
      cVar2 = iVar4->flags;
      param_1->flags = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      param_1->timer1 = 0x50;
      param_1->timer2 = 0x6e;
      *(s32 *)(param_1 + 0x2c) = *(s32 *)(iVar4 + 0x2c);
      param_1->pos_y_fixed = iVar4->pos_y_fixed;
      param_1->scale_y = iVar4->scale_y;
      param_1->normal_x = iVar4->pos_y;
      param_1->velocity_y = *(short *)(iVar4 + 0x32) + iVar4->bounds_min_y;
      param_1->normal_z = iVar4->pos_z;
      iVar3 = 0x80 - (((int)param_1->velocity_y - (int)*(short *)(iVar4 + 0x32)) + -0x78 >> 2
                     );
      param_1->sprite_x = (short)iVar3;
      iVar3 = iVar3 * 0x10000 >> 0x10;
      if (iVar3 < 0) {
        param_1->sprite_x = 0;
        param_1->flags = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x80 < iVar3) {
        param_1->sprite_x = 0x80;
      }
      iVar4 = 0x100 - (((int)param_1->velocity_y - (int)*(short *)(iVar4 + 0x32)) + -0x78 >>
                      2);
      param_1->angle_offset = (short)iVar4;
      iVar4 = iVar4 * 0x10000 >> 0x10;
      if (iVar4 < 0) {
        param_1->angle_offset = 0;
        param_1->flags = 0;
      }
      else {
        if (iVar4 < 0x101) {
          return;
        }
        param_1->angle_offset = 0x100;
      }
    }
    else {
      param_1->state = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->timer1 = 0x50;
      param_1->state = 1;
      param_1->rot_x = 0;
      param_1->timer2 = 0x6e;
      param_1->anim_timer = 0;
      param_1->rot_y = 0;
      param_1->rot_z = 0;
    }
  }
  else if (bVar1 == 2) {
    param_1->state = 3;
  }
  else if (bVar1 == 3) {
    Entity_Dealloc();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

