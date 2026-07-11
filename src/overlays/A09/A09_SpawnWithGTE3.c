// A09_SpawnWithGTE3 - Spawn entity: GTE position variant 3

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_SpawnWithGTE3(int param_1)

{
  u8 bVar1;
  short sVar2;
  int iVar3;
  u8 auStack_18->kind;
  short local_16;
  s16 local_12;
  s16 local_e;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (param_1->velocity_y < 0x3000) {
      param_1->velocity_y = param_1->velocity_y + 0x200;
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    if (*(short *)(param_1 + 0x32) < param_1->draw_x) {
      return 0;
    }
    *(s16 *)(param_1 + 0x32) = param_1->draw_x;
    iVar3 = func_0x00031220(0xa02,0,0);
    if (iVar3 != 0) {
      iVar3->sub_type = param_1->sub_type + '\x01';
      iVar3->pos_x = param_1->pos_y;
      iVar3->pos_y = *(short *)(param_1 + 0x32) + -0x96;
      *(s16 *)(iVar3 + 0x30) = param_1->pos_z;
      if (param_1->sub_type == '\0') {
        iVar3->angle_offset = 0x780;
        iVar3->sprite_y = 0xfcc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3->angle_offset = 0xd00;
      iVar3->sprite_y = 0xfb17;
      iVar3->rot_x = 0xced;
      param_1->parent = iVar3;
    }
    param_1->timer1 = 8;
    param_1->action_state = param_1->action_state + '\x01';
    DAT_800e807e = 4;
    local_16 = param_1->pos_y;
    param_1->sprite_flags = param_1->sprite_flags & 0xfd;
    local_12 = *(s16 *)(param_1 + 0x32);
    local_e = param_1->pos_z;
    Entity_SpawnWithPos(0,auStack_18,0xffffffc0);
    local_16 = param_1->pos_y + 0x40;
    Entity_SpawnWithPos(0,auStack_18,0xffffffc0);
    local_16 = param_1->pos_y + -0x40;
    Entity_SpawnWithPos(0,auStack_18);
    Audio_PlaySoundEffect(0x32,0xfffffff2,0);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->flags = 0;
      if ((u16)DAT_800bfa41 != *(u16 *)((uint)param_1->sub_type * 2 + -0x7fef1c5c)) {
        return 0;
      }
      *(u8 *)(param_1 + 0x1a) = 0xff;
      *(u8 *)(param_1 + 0x19) = 0xff;
      *(u8 *)(param_1 + 0x18) = 0xff;
      param_1->velocity_y = 0;
      param_1->action_state = param_1->action_state + '\x01';
      param_1->draw_x = *(short *)(param_1 + 0x32);
      param_1->sprite_flags = param_1->sprite_flags | 2;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -600;
      _DAT_800e8042 = param_1->pos_y;
      iVar3 = (uint)param_1->bounds_min_y << 0x10;
      _DAT_800e8046 = param_1->draw_x - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      _DAT_800e804a = param_1->pos_z;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar2 = param_1->timer1 + -1;
    param_1->timer1 = sVar2;
    if (sVar2 != -1) {
      return 0;
    }
    DAT_800e807e = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

