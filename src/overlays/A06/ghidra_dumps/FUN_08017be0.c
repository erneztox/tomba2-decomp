// FUN_08017be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08017be0(void)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  puVar4 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  do {
    if (DAT_1f800182 == '\0') {
      return _DAT_1f800080;
    }
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
  } while (((*pbVar3 & 1) == 0) || (uVar2 = (uint)pbVar3[2], 0x3c < uVar2));
                    /* WARNING: Could not emulate address calculation at 0x08017c80 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(uVar2 * 4 + -0x7fef6918))();
  return uVar1;
}

