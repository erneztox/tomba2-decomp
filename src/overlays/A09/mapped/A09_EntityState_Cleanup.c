// A09_EntityState_Cleanup - Entity state: cleanup and dealloc

/* WARNING: Control flow encountered bad instruction data */

void A09_EntityState_Cleanup(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
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
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(short *)(param_1 + 0x4e) < 0x1d6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 6;
  if (*(short *)(param_1 + 0x4e) < 1000) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

