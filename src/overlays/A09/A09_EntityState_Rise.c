// A09_EntityState_Rise - Entity rise/jump state: Y velocity, camera pos

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_EntityState_Rise(int param_1)

{
  u8 bVar1;
  char cVar2;
  short sVar3;
  
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    sVar3 = _g_CameraPosY + -0x14;
    if (*(short *)(param_1 + 0x32) < _g_CameraPosY) {
      _g_CameraPosY = sVar3;
      if (sVar3 < *(short *)(param_1 + 0x32)) {
        _g_CameraPosY = *(s16 *)(param_1 + 0x32);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      sVar3 = _g_CameraPosY + 0x14;
      if ((_g_CameraPosY < *(short *)(param_1 + 0x32)) &&
         (_g_CameraPosY = sVar3, *(short *)(param_1 + 0x32) < sVar3)) {
        _g_CameraPosY = *(short *)(param_1 + 0x32);
      }
    }
    _DAT_800e7eac = _DAT_800e7eac + (int)param_1->anim_counter * (int)_DAT_800e7ec8;
    _DAT_800e7eb4 = _DAT_800e7eb4 + (int)param_1->anim_counter * (int)_DAT_800e7ecc;
    Entity_PhysicsStep(&g_PlayerEntity);
    Entity_PhysicsStepRot(&g_PlayerEntity);
    _DAT_800e7f38 = _DAT_800e7f38 - 0x80;
    _DAT_800e7f3a = _DAT_800e7f3a + -0x80;
    _DAT_800e7f3c = _DAT_800e7f3c + -0x80;
    if (0x100 < _DAT_800e7f38) {
      return;
    }
    param_1->behavior_state = param_1->behavior_state + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (param_1->collision_state == '\0') {
        return;
      }
      param_1->behavior_state = 1;
      sVar3 = Math_Atan2(-((int)(((uint)param_1->pos_z - (_DAT_800e7eb4 >> 0x10))
                                     * 0x10000) >> 0x10),
                              (int)(((uint)param_1->pos_y - (_DAT_800e7eac >> 0x10)) *
                                   0x10000) >> 0x10);
      cVar2 = Math_CompareAngle((int)sVar3,(int)param_1->draw_x,0);
      param_1->anim_id = cVar2;
      if (cVar2 == '\0') {
        param_1->anim_counter = 0x800;
      }
      else {
        param_1->anim_counter = 0xf800;
      }
    }
  }
  else if (bVar1 == 2) {
    param_1->behavior_state = 3;
    g_GameMode2 = 7;
    DAT_800bf839 = 1;
    _DAT_800bf83a = (u16)param_1->combat_flag << 4;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

