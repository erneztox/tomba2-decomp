/**
 * @brief Entity input processor: reads pad flags, sets state
 * @note Original: func_8005950C at 0x8005950C
 */
// Entity_InputProcess



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005950c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar3 = _DAT_800ecf54;
  uVar2 = _DAT_800e7e68;
  _DAT_800e7e68 = uVar2;
  _DAT_800ecf54 = uVar3;
  switch(param_1->state) {
  case 0:
    FUN_80058648(param_1,0);
    break;
  case 1:
    if (DAT_1f800230 != '\0') {
      _DAT_800ecf54 = _DAT_800ecf54 & ~_DAT_1f800174;
      _DAT_800e7e68 = _DAT_800e7e68 & ~_DAT_1f800174;
    }
    if ((DAT_800bf80f != '\0') || (DAT_1f800137 != '\0')) {
      _DAT_800e7e68 = 0;
      _DAT_800ecf54 = 0;
    }
    FUN_80055c9c(param_1,(int)param_1->draw_angle);
    FUN_80058918(param_1);
    if (param_1->state_flag146 == '\0') {
      DAT_1f800232 = 1;
    }
    FUN_800597ac(param_1);
    FUN_80053fdc(param_1,0);
    _DAT_800e7e68 = uVar2;
    _DAT_800ecf54 = uVar3;
    break;
  case 2:
    param_1->flag_17B = 1;
    FUN_80067ca4(param_1);
    goto LAB_800596d0;
  case 4:
    param_1->sprite_flags = param_1->sprite_flags & 0x7f;
    if (DAT_1f800137 == '\0') {
      _DAT_800e7e68 = 0;
      _DAT_800ecf54 = 0;
    }
    else {
      _DAT_800e7e68 = _DAT_1f800166;
      _DAT_800ecf54 = _DAT_1f800190;
    }
    FUN_80055c9c(param_1,(int)param_1->draw_angle);
    FUN_80058f5c(param_1);
    FUN_800597ac(param_1);
    FUN_80053e50(param_1);
    _DAT_800e7e68 = uVar2;
    _DAT_800ecf54 = uVar3;
    break;
  case 5:
    func_0x8018bd30(param_1);
    goto LAB_800596d0;
  case 6:
    func_0x8018be40(param_1);
LAB_800596d0:
    FUN_800597ac(param_1);
    break;
  case 7:
    bVar1 = param_1->behavior_state;
    if (bVar1 == 1) {
      iVar4 = FUN_80045580(1);
      if (iVar4 != 0) {
LAB_80059738:
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_8001cf2c();
        goto LAB_80059738;
      }
    }
    else if ((bVar1 == 2) && (DAT_1f80019b != '\0')) {
      DAT_800bf89c = 4;
      FUN_80042310();
      param_1->state = 1;
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      iVar4 = _DAT_1f800138;
      _DAT_1f800138->normal_z = 2;
      iVar4->sprite_x = 1;
    }
    FUN_80076d68(param_1);
  }
  return;
}
