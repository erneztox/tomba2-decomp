// SOP_TitleCardEntity (SOP_TitleCardEntity) - Title card/collectible display entity: moves upward, shows collectible count

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_TitleCardEntity(int param_1)

{
  u8 bVar1;
  int iVar2;
  u8 auStack_20->kind;
  s16 local_1e;
  s16 local_1a;
  short local_16;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (g_GameSubState == '\x05') {
      if (param_1->behavior_state == '\0') {
        local_1e = param_1->pos_y;
        local_1a = *(s16 *)(param_1 + 0x32);
        local_16 = param_1->pos_z + 0x76c;
        Entity_SpawnWithPos(0x2b,auStack_20,0);
        param_1->behavior_state = param_1->behavior_state + '\x01';
        halt_baddata();
      }
      if (param_1->behavior_state != '\x01') {
        halt_baddata();
      }
      param_1->pos_z = param_1->pos_z + 10;
      Entity_SetAnimFlag79(param_1);
      GTE_ComposeAndProject(param_1);
      GTE_ProjectSprite2(param_1);
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar2 = Entity_AllocFromPool(param_1,0xf,_DAT_800ecfa4,0x8010c9b0);
        if (iVar2 != 0) {
          return;
        }
        param_1->sprite_data = _DAT_800ecfa8;
        Entity_LoadAnimData3(param_1,0x8010d39c,0);
        param_1->rot_y = 0x400;
        param_1->rot_x = 0x200;
        param_1->state = param_1->state + '\x01';
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

