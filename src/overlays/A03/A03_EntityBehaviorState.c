// A03_EntityBehaviorState - Entity behavior state machine (4 states)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntityBehaviorState(int param_1)

{
  u8 bVar1;
  s32 uVar2;
  s32 in_zero;
  s32 extraout_at;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1->state = 1;
    param_1->behavior_state = 0x10;
  }
  iVar6 = 0xf;
  do {
    iVar5 = iVar6 * 4;
    iVar6 = iVar6 + -1;
    iVar4 = param_1 + 0x2c + iVar6 * 4;
    iVar5 = param_1 + 0x2c + iVar5;
    *(s16 *)(iVar5 + 0x10) = *(s16 *)(iVar4 + 0x10);
    *(s16 *)(iVar5 + 0x12) = *(s16 *)(iVar4 + 0x12);
  } while (0 < iVar6);
  GTE_SetProjectionDist(6);
  setCopReg(2,in_zero,*(s32 *)(param_1 + 0x2c));
  setCopReg(2,extraout_at,param_1->pos_y_fixed);
  copFunction(2,0x180001);
  _DAT_1f800080 = getCopControlWord(2,0xf800);
  if (-1 < _DAT_1f800080) {
    iVar6 = getCopReg(2,0x13);
    _DAT_1f800080 = ((iVar6 >> 2) >> (iVar6 >> 0xc & 0x1fU)) + (iVar6 >> 0xc) * 0x200;
    if (0x7fb < _DAT_1f800080 - 4U) {
      _DAT_1f800080 = -1;
    }
    if (0 < _DAT_1f800080) {
      uVar2 = getCopReg(2,0xe);
      param_1->sprite_data = uVar2;
      param_1->pos_x = param_1->pos_x + *(short *)(param_1 + 0x34);
      param_1->pos_y = param_1->pos_y + param_1->pos_z;
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x38);
      param_1->pos_z = param_1->pos_z + 2;
      if (param_1->behavior_state == '\x10') {
        iVar4 = 1;
        iVar6 = param_1 + 0x30;
        do {
          iVar4 = iVar4 + 1;
          iVar6->parent = param_1->sprite_data;
          iVar6 = iVar6 + 4;
        } while (iVar4 < 0x10);
      }
      cVar3 = param_1->behavior_state + -1;
      param_1->behavior_state = cVar3;
      if (cVar3 == '\0') {
        param_1->state = 2;
      }
      else {
        param_1->flags = 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  param_1->sprite_data = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

