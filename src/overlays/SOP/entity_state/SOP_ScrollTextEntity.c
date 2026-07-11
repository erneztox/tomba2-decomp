// SOP_ScrollTextEntity (SOP_ScrollTextEntity) - Scroll/credits text entity: slide timer with wrap-around, pan effect

/* WARNING: Control flow encountered bad instruction data */

void SOP_ScrollTextEntity(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  u16 uVar3;
  u16 *puVar4;
  
  bVar1 = param_1->state;
  puVar4 = param_1->angle_offset;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1->state = 1;
    param_1->normal_x = 0x400;
    param_1->velocity_y = 0;
    *(s32 *)(param_1 + 0x4c) = 0;
    param_1->angle_offset = 0;
  }
  param_1->flags = 1;
  param_1->sprite_x = param_1->sprite_x + -0x20;
  uVar2 = *puVar4;
  uVar3 = uVar2 - 9;
  *puVar4 = uVar3;
  if (-1 < (int)((uint)uVar3 << 0x10)) {
    return;
  }
  *puVar4 = uVar2 + 0x4b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

