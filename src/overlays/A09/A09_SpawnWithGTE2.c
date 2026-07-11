// A09_SpawnWithGTE2 - Spawn entity: GTE position with rotation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_SpawnWithGTE2(int param_1)

{
  u8 bVar1;
  short sVar2;
  int iVar3;
  u8 auStack_18->kind;
  s16 local_16;
  short local_12;
  s16 local_e;
  
  bVar1 = param_1->sub_action;
  if (bVar1 == 1) {
    sVar2 = param_1->timer1 + -1;
    param_1->timer1 = sVar2;
    if (sVar2 == -1) {
      param_1->timer1 = 0x3c;
      local_16 = param_1->pos_y;
      param_1->sub_action = param_1->sub_action + '\x01';
      iVar3 = (uint)param_1->bounds_min_y << 0x10;
      local_12 = *(short *)(param_1 + 0x32) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      local_e = param_1->pos_z;
      Entity_SpawnWithPos(0x37,auStack_18,0xffffffe0);
      Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),auStack_18,0x300,8);
      Audio_PlaySoundEffect(0xc,0,0);
      Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x300,8);
      Audio_PlaySoundEffect(0xc,0,0);
      if (param_1->parent != 0) {
        *(u8 *)(param_1->parent + 4) = 3;
        halt_baddata();
      }
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa40 != '\x02') {
        return;
      }
      param_1->sub_action = 1;
      param_1->timer1 = 8;
      Entity_CopyStateData(2);
      _DAT_800e8076 = 0xc0;
      _g_CameraZoom = 0x300;
      _DAT_800e8074 = _DAT_801003f8 << 2;
      _DAT_800e8042 = param_1->pos_y;
      iVar3 = (uint)param_1->bounds_min_y << 0x10;
      _DAT_800e8046 = *(short *)(param_1 + 0x32) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      _DAT_800e804a = param_1->pos_z;
      Audio_PlaySoundEffect(0x2d,0xffffffef,0x14);
    }
  }
  else if (bVar1 == 2) {
    sVar2 = param_1->timer1 + -1;
    param_1->timer1 = sVar2;
    if (sVar2 == -1) {
      param_1->state = 3;
      DAT_800bfa40 = '\x03';
    }
    param_1->flags = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

