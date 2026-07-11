// A0G_EntityStateHandler2 - Entity state machine: animation-driven, transforms

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080120dc) */
/* WARNING: Removing unreachable block (ram,0x08011fec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0G_EntityStateHandler2(int param_1)

{
  u8 bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1->flag_5E;
  if (bVar1 == 1) {
    func_0x0010a36c(param_1);
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (_DAT_800bf850 == 0) {
        if ((DAT_800e7eaa == param_1->collision_dir) && (DAT_800e7e85 == '\0')) {
          DAT_1f800137 = 2;
          if ((DAT_800e7ff4 & 4) != 0) {
            param_1->flag_5E = 2;
            halt_baddata();
          }
          param_1->flag_5E = 3;
          halt_baddata();
        }
      }
      else if (_DAT_800bf854 == param_1->sub_type) {
        param_1->flag_5E = 1;
        param_1->sub_action = 1;
        halt_baddata();
      }
      return;
    }
  }
  else {
    if (bVar1 == 2) {
      bVar1 = param_1->behavior_state;
      if (bVar1 == 1) {
        iVar3 = Entity_AdvanceAnim2(param_1);
        if (iVar3 == 0) {
          return;
        }
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          param_1->behavior_state = 1;
          g_SeqComplete2 = '\x02';
          if (param_1->combat_flag == '\0') {
            g_SeqComplete2 = 2;
            return;
          }
          Audio_PlaySoundEffect(0x17,0,0xf);
        }
      }
      else if (bVar1 == 2) {
        if (g_SeqComplete2 != '\0') {
          return;
        }
        param_1->behavior_state = 0;
        param_1->angle_offset = 0;
        param_1->rot_y = param_1->target_rot_y;
        g_SeqComplete2 = '\x01';
        _DAT_800bf850 = 1;
        _DAT_800bf854 = (uint)param_1->type_flags;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 3) {
      bVar1 = param_1->behavior_state;
      if (bVar1 != 1) {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            param_1->behavior_state = 1;
            param_1->timer1 = 8;
            UI_DrawElement(0x51,0x41);
            Audio_PlaySoundEffect(0x19,0,0xf);
          }
        }
        else if (bVar1 == 2) {
          if (DAT_800e7eaa == param_1->collision_dir) {
            return;
          }
          param_1->behavior_state = 0;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar2 = param_1->timer1 + -1;
      param_1->timer1 = sVar2;
      if (sVar2 != -1) {
        return;
      }
      param_1->behavior_state = param_1->behavior_state + '\x01';
      g_PlayerAction = 4;
      DAT_800e7e85 = 0x24;
      DAT_800e7e86 = 0;
      DAT_800bf81f = 0;
      DAT_1f800137 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

