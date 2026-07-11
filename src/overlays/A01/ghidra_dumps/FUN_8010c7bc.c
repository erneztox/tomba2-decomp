// FUN_8010c7bc

/* WARNING: Removing unreachable block (ram,0x8011e9e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c7bc(void)

{
  int in_v0;
  int in_v1;
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  
  if (in_v0 != 0) {
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  if (in_v1 == 0) {
    if (0x4010 < _DAT_1f800164) {
      return;
    }
    uVar1 = (uint)*(byte *)(unaff_s0 + 0x5e);
    *(char *)(unaff_s0 + 0x70) = (char)unaff_s1;
    if (uVar1 == 5) {
      *(undefined1 *)(unaff_s0 + 6) = 2;
    }
    else {
      if ((uVar1 == unaff_s1) || (uVar1 == 4)) {
        func_0x80042354(1,3);
      }
      *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    }
  }
  *(undefined1 *)(unaff_s0 + 0xbf) = 0;
  return;
}

