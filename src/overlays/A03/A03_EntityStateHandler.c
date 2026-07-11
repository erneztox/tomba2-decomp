// A03_EntityStateHandler - Entity state handler (4 states)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntityStateHandler(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  s16 uVar3;
  
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
    uVar3 = _DAT_8011bb66;
    uVar2 = _DAT_8011bb64;
    param_1->anim_data = 0;
    *(s16 *)(param_1 + 0x32) = 0;
    param_1->anim_counter = uVar2;
    *(s16 *)(param_1 + 0x46) = uVar3;
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    param_1->anim_data = 0x8011bb68;
    param_1->scale_y = 0x8011bb68;
  }
  param_1->flags = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

