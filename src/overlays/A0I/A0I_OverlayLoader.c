// A0I_OverlayLoader - Overlay loader: calls Sys_LoadOverlay for next level

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0I_OverlayLoader(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = (param_2 << 0x10) >> 0xe;
    iVar2 = _DAT_1f80021c + (uint)*(u16 *)(iVar1 + -0x7fef354c) * 0x20;
    Sys_LoadOverlay(3,iVar2,iVar2 + (*(u16 *)(iVar1 + -0x7fef354a) + 1) * 0x20,0);
  }
  return;
}

