// SOP_CDLoadStateHandler (SOP_CDLoadStateHandler) - CD load state handler: checks CD ready status, initiates sector loads, sets up DMA

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_CDLoadStateHandler(void)

{
  u16 uVar1;
  int iVar2;
  
  uVar1 = g_SOP_Entity->sprite_y;
  if (uVar1 == 1) {
    iVar2 = func_0x0010c79c();
    if (iVar2 != 0) {
      g_SOP_Entity->sprite_y = g_SOP_Entity->sprite_y + 1;
    }
  }
  else if ((uVar1 < 2) && (uVar1 == 0)) {
    g_SOP_Entity->angle_delta = 0;
    Engine_LoadOverlayEntry(0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

