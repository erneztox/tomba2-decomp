// A09_EntityState_Anim2 - Entity state: animation with completion check

/* WARNING: Control flow encountered bad instruction data */

s32 A09_EntityState_Anim2(int param_1)

{
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
    Entity_InitFromScript(param_1,0,0x8010e3fc);
    param_1->anim_check = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1->action_state == '\x01') {
    Entity_ScriptRun(param_1);
    if (param_1->anim_check != -1) {
      return 0;
    }
    param_1->state = 3;
    Game_ReturnToTitle();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

