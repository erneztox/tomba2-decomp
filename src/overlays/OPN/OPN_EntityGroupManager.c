// OPN_EntityGroupManager (OPN_EntityGroupManager) - Entity group/sequence manager: manages child entities via slot array

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_EntityGroupManager(int param_1)

{
  s32 *puVar1;
  u8 bVar2;
  short sVar3;
  char cVar4;
  u16 uVar5;
  
  bVar2 = param_1->action_state;
  if (bVar2 != 1) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        param_1->timer1 = 3;
        param_1->timer2 = 0;
        param_1->sub_action = 0;
        param_1->action_state = param_1->action_state + '\x01';
      }
    }
    else if (bVar2 == 2) {
      uVar5 = param_1->timer2 - 1;
      param_1->timer2 = uVar5;
      if (-1 < (int)((uint)uVar5 << 0x10)) {
        return;
      }
      func_0x0018ccfc(param_1,4);
      **(s16 **)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) = _DAT_8018d470;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 2) =
           _DAT_8018d472;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 4) =
           _DAT_8018d474;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 8) =
           _DAT_8018d476;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 10) =
           _DAT_8018d478;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0xc) =
           _DAT_8018d47a;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0x38) = 0x1000;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0x3a) = 0x1000;
      *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0x3c) = 0x1000;
      param_1->behavior_state = 0;
      param_1->action_state = 1;
      Entity_SetSubEntityData(*(s32 *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0),0x1c,0x1c);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = param_1->timer2 - 1;
  param_1->timer2 = uVar5;
  if ((int)((uint)uVar5 << 0x10) < 0) {
    if (param_1->sub_action == '\0') {
      func_0x0018ccfc(param_1,8);
      param_1->sub_action = param_1->sub_action + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1->sub_action != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0018ccfc(param_1,4);
    _g_CollectibleCount = _g_CollectibleCount + 1;
    puVar1 = (s32 *)(_DAT_800e7e74 + -4);
    _DAT_800e7e74 = _DAT_800e7e74 + -4;
    *puVar1 = *(s32 *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0);
    param_1->timer2 = 5;
    sVar3 = param_1->timer1;
    cVar4 = param_1->counter1 + -1;
    param_1->timer1 = sVar3 + -1;
    param_1->counter1 = cVar4;
    param_1->counter2 = cVar4;
    if (sVar3 == 1) {
      param_1->action_state = param_1->action_state + '\x01';
      halt_baddata();
    }
  }
  return;
}

