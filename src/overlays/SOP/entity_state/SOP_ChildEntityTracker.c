// SOP_ChildEntityTracker (SOP_ChildEntityTracker) - Child entity that tracks parent entity position, applies gravity

/* WARNING: Control flow encountered bad instruction data */

void SOP_ChildEntityTracker(int param_1)

{
  u8 bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = GTE_ProjectSprite2();
  if (iVar3 == 0) {
    param_1->state = 3;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        param_1->target_rot_y = param_1->target_rot_y + 0x80;
        param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
        sVar2 = param_1->velocity_y + param_1->angle_offset;
        param_1->velocity_y = sVar2;
        if ((param_1->flags == '\0') || (sVar2 == 0)) {
          param_1->state = 3;
        }
        return;
      }
      sVar2 = param_1->timer1;
      param_1->timer1 = sVar2 + -1;
      if (sVar2 == 1) {
        param_1->velocity_y = 0xc000;
        param_1->angle_offset = 0x400;
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      goto LAB_08012c44;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1->behavior_state = 1;
    iVar3 = func_0x0010b44c(param_1->parent);
    iVar3->pos_y = param_1->pos_y;
    *(s16 *)(iVar3 + 0x32) = *(s16 *)(param_1 + 0x32);
    iVar3->pos_z = param_1->pos_z;
  }
  if (g_GameSubState == '\x03') {
    param_1->timer1 = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08012c44:
  iVar3 = param_1->parent;
  param_1->pos_y = *(s16 *)(iVar3->data_ptr + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(iVar3->data_ptr + 0x30) + 0x14;
  param_1->pos_z = *(short *)(iVar3->data_ptr + 0x34) + -0x3c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

