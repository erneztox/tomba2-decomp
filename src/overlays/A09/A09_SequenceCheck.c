// A09_SequenceCheck - Sequence completion check: g_SeqComplete2 flag

/* WARNING: Control flow encountered bad instruction data */

s32 A09_SequenceCheck(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (g_SeqComplete2 == '\0') {
          param_1->action_state = 1;
          param_1->sub_action = 0;
          DAT_1f800137 = 2;
          halt_baddata();
        }
        return 0;
      }
    }
    else {
      if (bVar1 == 2) {
        param_1->action_state = 3;
        Entity_PlaySFX_FadeOut(1,4);
        Entity_InitFromScript(param_1,0,0x8010e28c);
        param_1->anim_check = 1;
        halt_baddata();
      }
      if (bVar1 == 3) {
        Entity_ScriptRun(param_1);
        if (param_1->anim_check != -1) {
          return 0;
        }
        DAT_800bf873 = 1;
        Game_ReturnToTitle();
        param_1->action_state = 0;
        DAT_800bf9db = DAT_800bf9db | 0x1e;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1->sub_action == '\0') {
    g_SeqComplete = '\0';
    g_PlayerAction = 4;
    DAT_800e7e85 = 0x3b;
    DAT_800e7e86 = 0;
    DAT_800e7e87 = 0;
    Entity_ResetState_2(&g_PlayerEntity);
    Entity_LoadAnimIfChanged(&g_PlayerEntity,2,5);
    param_1->sub_action = param_1->sub_action + '\x01';
  }
  else {
    if (param_1->sub_action != '\x01') {
      halt_baddata();
    }
    if (g_SeqComplete == '\0') {
      return 0;
    }
    param_1->action_state = 2;
    param_1->sub_action = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

