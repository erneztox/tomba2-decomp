// A0H_TimerSpawnHelper - Timer spawn helper (0x5a countdown)

/* WARNING: Control flow encountered bad instruction data */

void A0H_TimerSpawnHelper(int param_1,short param_2)

{
  u8 bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1->sub_action;
  if (bVar1 == 1) {
    iVar3 = Entity_ActivatePool3((int)param_2,2);
    param_1->script_ptr = iVar3;
    if (iVar3 != 0) {
      param_1->anim_timer = 0x5a;
      param_1->sub_action = param_1->sub_action + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (1 < bVar1) {
    if (bVar1 != 2) {
      halt_baddata();
    }
    sVar2 = param_1->anim_timer + -1;
    param_1->anim_timer = sVar2;
    if (sVar2 == -1) {
      if (*(u8 *)(param_1->script_ptr + 4) < 2) {
        *(u8 *)(param_1->script_ptr + 4) = 2;
        param_1->script_ptr = 0;
      }
      param_1->sub_action = 0;
    }
  }
  return;
}

