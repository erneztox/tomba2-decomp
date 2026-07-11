// SOP_EntityAnimStateHandler (SOP_EntityAnimStateHandler) - Entity animation state handler: checks animation completion, transitions

/* WARNING: Control flow encountered bad instruction data */

void SOP_EntityAnimStateHandler(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    Entity_ScriptRun(param_1);
    if (param_1->anim_check == -1) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
  }
  else if (((bVar1 < 2) && (bVar1 == 0)) && (iVar2 = func_0x0010b11c(), iVar2 != 0)) {
    param_1->behavior_state = param_1->behavior_state + '\x01';
    Entity_InitFromScript(param_1,0x8001b860,0x8010cab8);
    param_1->anim_check = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

