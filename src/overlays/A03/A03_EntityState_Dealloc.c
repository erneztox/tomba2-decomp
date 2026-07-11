// A03_EntityState_Dealloc - Entity state machine (4 states): Entity_Dealloc on state 3

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntityState_Dealloc(int param_1)

{
  u8 bVar1;
  short sVar2;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        Entity_Dealloc(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    Audio_PlaySoundEffect(0x8c,0,0x14);
    _DAT_1f80020c = _DAT_1f80020c | 7;
    func_0x0010bdec(param_1);
    param_1->state = 1;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    if (param_1->sub_type == '\0') {
      if (*(short *)(param_1 + 0x6e) < 0) {
        param_1->sprite_x = (short)(*(short *)(param_1 + 0x9c) * 0xf >> 0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1->sprite_x = (short)(*(short *)(param_1 + 0x9c) * -0x1e >> 0xc);
      param_1->angle_offset = (short)(*(short *)(param_1 + 0xa2) * -0x1e >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1->sub_type != '\x01') {
      _DAT_800e7e90 = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1->sprite_x = (short)(*(short *)(param_1 + 0x9a) * 0xf >> 0xb);
    param_1->angle_offset = (short)(*(short *)(param_1 + 0xa0) * 0xf >> 0xb);
    param_1->sprite_y = (short)(*(short *)(param_1 + 0xa6) * 0xf >> 0xb);
    _DAT_800e7e90 = param_1;
  }
  if (param_1->behavior_state == '\0') {
    param_1->behavior_state = 1;
  }
  else if (param_1->behavior_state != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1->sprite_x = param_1->sprite_x + (param_1->sprite_x >> 5);
  sVar2 = param_1->sprite_y + (param_1->sprite_y >> 5);
  param_1->angle_offset = param_1->angle_offset + (param_1->angle_offset >> 5);
  param_1->sprite_y = sVar2;
  param_1->pos_y = param_1->pos_y + param_1->sprite_x;
  param_1->pos_z = param_1->pos_z + sVar2;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + param_1->angle_offset;
  param_1->flags = 1;
  param_1->projected_x = (int)param_1->pos_y;
  param_1->projected_y = (int)*(short *)(param_1 + 0x32);
  param_1->projected_z = (int)param_1->pos_z;
  Sprite_Alloc1(param_1);
  Entity_CheckState2(param_1);
  if ((DAT_1f800137 == '\x02') && (g_GameMode == '\x02')) {
    param_1->state = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

