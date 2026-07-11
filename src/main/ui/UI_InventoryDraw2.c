/**
 * @brief UI inventory draw variant 2: entity->state=1 state, draws items
 * @note Original: func_8004E928 at 0x8004E928
 */
// UI_InventoryDraw2



void FUN_8004e928(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->state = 1;
      param_1->render_flags = 0x10;
      param_1->sprite_flags = 0;
      param_1->sub_anim_id = 0;
      param_1->target_rot_y = 0;
      param_1->draw_y = 0;
      return;
    }
    if (bVar1 == 2) {
      param_1->state = 3;
      DAT_1f800137 = 0;
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007a624(param_1);
    return;
  }
  if (param_1->behavior_state == '\0') {
    iVar2 = FUN_8004daec(param_1);
    if (iVar2 != 0) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    goto LAB_8004ea1c;
  }
  if (param_1->behavior_state != '\x01') {
    param_1->flags = 1;
    return;
  }
  bVar1 = DAT_800bf87f;
  if (param_1->draw_x == 0x5d) {
LAB_8004ea08:
    FUN_80026100(bVar1);
  }
  else if (param_1->draw_x == 0x5e) {
    bVar1 = DAT_800bf87f >> 1;
    goto LAB_8004ea08;
  }
  param_1->state = 2;
LAB_8004ea1c:
  param_1->flags = 1;
  return;
}
