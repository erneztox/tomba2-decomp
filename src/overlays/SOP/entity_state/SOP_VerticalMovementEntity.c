// SOP_VerticalMovementEntity (SOP_VerticalMovementEntity) - Vertical movement entity: applies gravity, moves upward with velocity cap

/* WARNING: Control flow encountered bad instruction data */

s32 SOP_VerticalMovementEntity(int param_1)

{
  u8 bVar1;
  short sVar2;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    if (param_1->flags == '\0') {
      Audio_PlaySoundEffect(7,0,0);
      param_1->sub_state = param_1->sub_state + '\x01';
    }
LAB_00002998:
    sVar2 = param_1->velocity_y + 0x360;
    param_1->velocity_y = sVar2;
    if (0x3e00 < sVar2) {
      param_1->velocity_y = 0x3e00;
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    param_1->pos_y = param_1->pos_y + -0x10;
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->velocity_y = 0xd000;
      param_1->sub_state = param_1->sub_state + '\x01';
    }
  }
  else if (bVar1 == 2) goto LAB_00002998;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

