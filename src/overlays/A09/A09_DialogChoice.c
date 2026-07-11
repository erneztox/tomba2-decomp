// A09_DialogChoice - Dialog choice handler: reads choice table, sets anim

/* WARNING: Control flow encountered bad instruction data */

s32 A09_DialogChoice(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (param_1->move_mode == '\x03') {
      param_1->action_state = 2;
      Event_TriggerCollectible((int)*(short *)((uint)param_1->sub_type * 2 + -0x7fef1c68));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(*(short *)((uint)param_1->sub_type * 2 + -0x7fef1c68) + -0x7ff4074c) != '\0')
    {
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(char *)(*(short *)((uint)param_1->sub_type * 2 + -0x7fef1c68) + -0x7ff4074c) !=
          '\0') {
        return 1;
      }
      param_1->action_state = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    iVar2 = Game_CheckIdle();
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

