// A09_EntityState_Cleanup - Entity state: cleanup and dealloc

/* WARNING: Control flow encountered bad instruction data */

void A09_EntityState_Cleanup(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1->state = 1;
    param_1->sprite_x = 0;
  }
  param_1->flags = 1;
  if (param_1->sprite_x < 0x1d6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1->sprite_x = param_1->sprite_x + 6;
  if (param_1->sprite_x < 1000) {
    return;
  }
  param_1->state = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

