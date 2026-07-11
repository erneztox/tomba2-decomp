// OPN_PlayerAnimCheck (OPN_PlayerAnimCheck) - Player animation check: sets completion flag g_SeqComplete, triggers next state

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_PlayerAnimCheck(int param_1)

{
  int iVar1;
  
  if (param_1->action_state == '\0') {
    g_SeqComplete = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = Entity_AnimFrame(param_1);
  if (iVar1 == 1) {
    g_SeqComplete = 1;
  }
  if (_g_InputHeld == 1) {
    param_1->angle_offset = 0;
    param_1->velocity_y = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  Entity_SetActionFlag(param_1,1);
  if (g_PlayerState == '\x03') {
    g_PlayerAction = 7;
    DAT_800e7e85 = 0;
    DAT_800e7e86 = 0;
    DAT_800e7e87 = 0;
  }
  return;
}

