// SOP_FinalStateTransition (SOP_FinalStateTransition) - Final state transition: sets g_GameState=5, camera init, countdown timer

/* WARNING: Control flow encountered bad instruction data */

s32 SOP_FinalStateTransition(int param_1)

{
  short sVar1;
  
  if (param_1->sub_state == '\0') {
    g_GameSubState = 5;
    Camera_SetTarget(&g_EntityPool0,0x8010c974);
    param_1->timer2 = 10;
    param_1->sub_state = param_1->sub_state + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1->sub_state == '\x01') {
    sVar1 = param_1->timer2;
    param_1->timer2 = sVar1 + -1;
    if (sVar1 != 1) {
      return 0;
    }
    g_SeqComplete2 = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

