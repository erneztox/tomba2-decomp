// A0G_EntityMoveState - Entity movement state: checks movement flags

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801229c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0G_EntityMoveState(int param_1)

{
  u8 bVar1;
  u8 bVar2;
  int iVar3;
  
  bVar1 = param_1->flag_5E;
  if (bVar1 == 1) {
    iVar3 = func_0x0010a36c(param_1);
    if (iVar3 == 0) {
      return;
    }
    param_1->flag_5E = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (_DAT_800bf850 == 0) {
        if ((DAT_800e7eaa == param_1->collision_dir) && (DAT_800e7e85 == '\0')) {
          DAT_1f800137 = 2;
          param_1->flag_5E = 2;
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
  else if (bVar1 == 2) {
    bVar2 = param_1->behavior_state;
    if (bVar2 == 1) {
      iVar3 = Entity_AdvanceAnim2(param_1);
      if (iVar3 == 0) {
        return;
      }
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        param_1->behavior_state = 1;
        if (param_1->combat_flag == '\0') {
          g_SeqComplete2 = 2;
          return;
        }
        g_SeqComplete2 = bVar1;
        Audio_PlaySoundEffect(0x17,0,0xf);
      }
    }
    else if (bVar2 == 2) {
      if (g_SeqComplete2 != 0) {
        return;
      }
      param_1->behavior_state = 0;
      param_1->angle_offset = 0;
      param_1->rot_y = param_1->target_rot_y;
      g_SeqComplete2 = 1;
      _DAT_800bf850 = 1;
      _DAT_800bf854 = (uint)param_1->type_flags;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

