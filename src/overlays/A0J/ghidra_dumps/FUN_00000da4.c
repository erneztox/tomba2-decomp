// FUN_00000da4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000da4(void)

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
  } while (((*pbVar2 & 1) == 0) || (uVar1 = pbVar2[2] - 0xc, 0x13 < uVar1));
                    /* WARNING: Could not emulate address calculation at 0x00000e2c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar1 * 4 + -0x7fef6fa0))();
  return;
}

