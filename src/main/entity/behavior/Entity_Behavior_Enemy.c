/**
 * @brief Entity enemy behavior: calls FUN_80069858, sets type-specific state
 * @note Original: func_8006B390 at 0x8006B390
 */
// Entity_Behavior_Enemy



undefined4 FUN_8006b390(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_80069858(param_1,0,0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = param_1->kind;
    if (bVar1 == 4) {
      if (param_1->move_mode != '\0') {
        return 1;
      }
    }
    else if ((3 < bVar1) && (bVar1 < 7)) {
      FUN_80074590(0x2c,0,0);
      FUN_80074590(0x2d,0,0);
      FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x400,0x15);
      FUN_80074590(0xc,0,0);
    }
    if (0 < param_1->anim_counter) {
      param_1->anim_counter = 0;
    }
    FUN_80074590(0x2f,0,0);
    FUN_80031470(2,param_1 + 0x2c,param_1->flag_5E,param_1 + 0x68);
    *param_1 = 2;
    param_1->move_mode = 2;
    FUN_8006b0d8();
    uVar3 = 1;
  }
  return uVar3;
}
