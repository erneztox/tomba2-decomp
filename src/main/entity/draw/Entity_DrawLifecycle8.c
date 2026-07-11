/**
 * @brief Entity draw lifecycle variant 8: entity->state=1, render path
 * @note Original: func_80033278 at 0x80033278
 */
// Entity_DrawLifecycle8



void FUN_80033278(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  short sVar4;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624();
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    uVar2 = 0xff92;
    if (DAT_1f800236 == '\x03') {
      uVar2 = 0x6e;
    }
    param_1->velocity_y = uVar2;
    param_1->sprite_x = 0;
    param_1->anim_data = 0;
    param_1->state = 1;
  }
  param_1->flags = 1;
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    if (DAT_1f800236 == '\x03') {
      puVar3 = &DAT_800a0c5c;
    }
    else {
      puVar3 = &DAT_800a0dcc;
    }
    *(undefined **)(param_1 + 0x38) = puVar3;
    *(undefined **)(param_1 + 0x34) = puVar3;
  }
  sVar4 = param_1->sprite_x + param_1->velocity_y;
  param_1->sprite_x = sVar4;
  if (sVar4 < 0x301) {
    if (sVar4 < -0x300) {
      param_1->sprite_x = sVar4 + 0x300;
    }
  }
  else {
    param_1->sprite_x = sVar4 + -0x300;
  }
  return;
}
