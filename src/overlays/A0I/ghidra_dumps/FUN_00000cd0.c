// FUN_00000cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000cd0(void)

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
  } while (((*pbVar2 & 1) == 0) || (uVar1 = pbVar2[2] - 0xc, 0x14 < uVar1));
                    /* WARNING: Could not emulate address calculation at 0x00000d58 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar1 * 4 + -0x7fef6f90))();
  return;
}

