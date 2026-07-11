// A0H_DamageHandler - Damage/collision: calls Entity_InitFull, sets knockback

void A0H_DamageHandler(int param_1,u8 *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Entity_CalcAngle4();
  if (iVar1 != 0) {
    uVar2 = Entity_InitFull(param_1,param_2,0,0x100);
    if ((uVar2 & 0x80) != 0) {
      param_1->move_mode = 2;
      *param_2 = 2;
      param_2->state = 2;
      param_2->behavior_state = 6;
      param_2->action_state = 0;
    }
    param_2->move_mode = 1;
    DAT_1f800182 = 0;
  }
  return;
}

