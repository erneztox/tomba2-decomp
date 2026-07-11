// A0H_OverlayLoader - Overlay loader: Sys_LoadOverlay

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0H_OverlayLoader(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = (param_2 << 0x10) >> 0xe;
    iVar2 = _DAT_1f80021c + (uint)*(u16 *)(iVar1 + -0x7fef39bc) * 0x20;
    Sys_LoadOverlay(3,iVar2,iVar2 + (*(u16 *)(iVar1 + -0x7fef39ba) + 1) * 0x20,0);
  }
  return;
}

