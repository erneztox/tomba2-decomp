// A09_EntityMainLoop - Entity main update loop

/* WARNING: Control flow encountered bad instruction data */

void A09_EntityMainLoop(int param_1)

{
  u8 bVar1;
  
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
    *(s32 *)(param_1 + 0x58) = 0;
  }
  param_1->flags = 1;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (0x1000U - *(int *)(param_1 + 0x58) >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

