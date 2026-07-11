// A09_EntityState_Anim - Entity state: plays animation, sets behavior pointer

/* WARNING: Control flow encountered bad instruction data */

s32 A09_EntityState_Anim(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    param_1->action_state = 2;
    Entity_InitFromScript(param_1,0,0x8010e3b0);
    param_1->anim_check = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf809 == '\0') && (param_1->collision_state != '\0')) {
        if (DAT_800bf8e6 == '\0') {
          Event_TriggerCollectible(0x32);
        }
        if (DAT_800bfa40 == '\0') {
          param_1->action_state = param_1->action_state + '\x01';
          Entity_PlaySFX_FadeOut(1,4);
          DAT_800bfa40 = 1;
          halt_baddata();
        }
      }
      return 0;
    }
  }
  else if (bVar1 == 2) {
    Entity_ScriptRun(param_1);
    if (param_1->anim_check != -1) {
      return 0;
    }
    param_1->action_state = 0;
    Game_ReturnToTitle();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

