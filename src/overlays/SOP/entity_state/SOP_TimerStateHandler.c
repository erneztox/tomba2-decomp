// SOP_TimerStateHandler (SOP_TimerStateHandler) - Timer-based state machine: 4 sub-states with countdown, triggers state transitions

/* WARNING: Control flow encountered bad instruction data */

s32 SOP_TimerStateHandler(int param_1)

{
  u8 bVar1;
  short sVar2;
  s32 uVar3;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    sVar2 = param_1->timer2;
    param_1->timer2 = sVar2 + -1;
    uVar3 = 0;
    if (sVar2 == 1) {
      g_GameSubState = 3;
      Entity_LoadAnimIfChanged(param_1,0xb4,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1->sub_state = 1;
      param_1->timer2 = 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      sVar2 = param_1->timer2;
      param_1->timer2 = sVar2 + -1;
      uVar3 = 0;
      if (sVar2 == 1) {
        Entity_LoadAnimIfChanged(param_1,2,6);
        param_1->timer2 = 0x1e;
        param_1->sub_state = param_1->sub_state + '\x01';
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = param_1->timer2;
      param_1->timer2 = sVar2 + -1;
      uVar3 = 1;
      if (sVar2 != 1) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

