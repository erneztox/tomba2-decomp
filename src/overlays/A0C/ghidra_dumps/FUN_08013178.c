// FUN_08013178

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013178(byte *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = sVar1 + 1;
  if (((short)(sVar1 + 1) < 6) ||
     ((((_DAT_800ecf54 & _DAT_1f80016c) == 0 || (param_1[0x147] != 0)) &&
      (((_DAT_800ecf54 & _DAT_1f80016e) == 0 || (param_1[0x147] != 1)))))) {
    if ((((_DAT_800ecf54 & _DAT_1f80016c) == 0) || (param_1[0x147] != 1)) &&
       (((_DAT_800ecf54 & _DAT_1f80016e) == 0 || (param_1[0x147] != 0)))) {
      if (0x96 < *(short *)(param_1 + 0x42)) {
        DAT_800bf840 = 0x48;
      }
      return;
    }
    param_1[7] = 6;
    func_0x00054d14(param_1,0xaa,0);
  }
  else {
    param_1[7] = 0;
    param_1[0x154] = 0;
    param_1[0x155] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    *param_1 = *param_1 | 4;
    func_0x00054d14(param_1,0x38,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

