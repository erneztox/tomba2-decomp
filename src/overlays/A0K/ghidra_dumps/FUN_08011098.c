// FUN_08011098

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011098(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  if (((*(short *)(param_1 + 0x16e) != 0) && (DAT_800bf80d == '\0')) &&
     (puVar4 = _DAT_1f800154, cVar1 = DAT_1f80015c, (*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
    while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
      pcVar3 = (char *)*puVar4;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar4 = puVar4 + 1;
      cVar1 = DAT_1f800182;
      if ((*pcVar3 == '\x01') && (uVar2 = (uint)(byte)pcVar3[2], uVar2 < 9)) {
                    /* WARNING: Could not emulate address calculation at 0x08011160 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar2 * 4 + -0x7fef7060))();
        return;
      }
    }
  }
  return;
}

