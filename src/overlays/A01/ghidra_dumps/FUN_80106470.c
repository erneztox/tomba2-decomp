// FUN_80106470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80106470(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  do {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          return;
        }
        pbVar1 = (byte *)*puVar2;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar2 = puVar2 + 1;
      } while ((*pbVar1 & 1) == 0);
      if (pbVar1[0xc] == 9) break;
      if (pbVar1[2] < 0x57) {
                    /* WARNING: Jumptable at 0x80106530 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)pbVar1[2] * 4 + -0x7fef6e70))();
        return;
      }
    }
  } while (((int)*(short *)(param_1 + 0x17e) & 0x8200U) != 0);
  FUN_8010e4b0(param_1,pbVar1);
  FUN_8010f664();
  return;
}

