// CRD_WinDisplay (CRD_WinDisplay) - Win/loss display

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_WinDisplay(int param_1)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_1 + 8);
  if (_DAT_800bf4ee == 0) {
    if (((_DAT_800ecf54 & 0x10) != 0) && (param_1->sub_anim_id != '\0')) {
      Audio_PlaySoundEffect(0x15,0,0);
      _DAT_800bf4ee = 0x20;
      _DAT_800bf4ec = 0x50;
      _DAT_800bf4f0 = 0;
      DAT_800bf4ea = param_1->sub_anim_id + -1;
    }
    if (((_DAT_800bf4ee == 0) && ((_DAT_800ecf54 & 0x40) != 0)) &&
       ((int)(uint)param_1->sub_anim_id < *psVar1 + -1)) {
      Audio_PlaySoundEffect(0x15,0,0);
      DAT_800bf4ea = param_1->sub_anim_id;
      _DAT_800bf4ee = 0x50;
      _DAT_800bf4ec = 0x20;
      _DAT_800bf4f0 = 0;
    }
  }
  return;
}

