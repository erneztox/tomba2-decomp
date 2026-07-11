// FUN_80101fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80101fd0(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 3);
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_80102640;
    _DAT_1f8000ee = 0xf7fe;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  uVar2 = *(byte *)(param_2 + 0x2a) - 0x1b;
  if (uVar2 < 0x30) {
                    /* WARNING: Jumptable at 0x8010205c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + -0x7fef7044))();
    return;
  }
LAB_80102640:
  if (*(char *)(param_2 + 0x61) != '\0') {
    *(undefined1 *)(param_1 + 0x72) = 0x40;
  }
  return;
}

