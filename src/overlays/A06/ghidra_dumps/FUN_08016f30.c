// FUN_08016f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016f30(void)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  do {
    if (DAT_1f800182 == '\0') {
      return;
    }
    pbVar2 = (byte *)*puVar3;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar3 = puVar3 + 1;
  } while (((*pbVar2 & 1) == 0) || (uVar1 = (uint)pbVar2[2], 0x67 < uVar1));
                    /* WARNING: Could not emulate address calculation at 0x08016fb4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar1 * 4 + -0x7fef6dd0))();
  return;
}

