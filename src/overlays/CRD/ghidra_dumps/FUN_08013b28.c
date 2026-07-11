// FUN_08013b28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013b28(int param_1)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_1 + 8);
  if (_DAT_800bf4ee == 0) {
    if (((_DAT_800ecf54 & 0x10) != 0) && (*(char *)(param_1 + 0x47) != '\0')) {
      func_0x00074590(0x15,0,0);
      _DAT_800bf4ee = 0x20;
      _DAT_800bf4ec = 0x50;
      _DAT_800bf4f0 = 0;
      DAT_800bf4ea = *(char *)(param_1 + 0x47) + -1;
    }
    if (((_DAT_800bf4ee == 0) && ((_DAT_800ecf54 & 0x40) != 0)) &&
       ((int)(uint)*(byte *)(param_1 + 0x47) < *psVar1 + -1)) {
      func_0x00074590(0x15,0,0);
      DAT_800bf4ea = *(char *)(param_1 + 0x47);
      _DAT_800bf4ee = 0x50;
      _DAT_800bf4ec = 0x20;
      _DAT_800bf4f0 = 0;
    }
  }
  return;
}

