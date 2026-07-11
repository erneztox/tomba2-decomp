// A09_OverlayEntry - Overlay top-level entry point

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_OverlayEntry(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = (param_2 << 0x10) >> 0xe;
  iVar2 = _DAT_1f80021c + (uint)*(u16 *)(iVar1 + -0x7fef1a40) * 0x20 + 0x7a60;
  Sys_LoadOverlay(0xb,iVar2,iVar2 + (*(u16 *)(iVar1 + -0x7fef1a3e) + 1) * 0x20,0);
  return;
}

