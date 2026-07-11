// FUN_8011b05c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011b05c(int param_1)

{
  short sVar1;
  uint uVar2;
  uint extraout_v1;
  int unaff_s1;
  
  if ((DAT_800bf9fc & 1) != 0) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    FUN_80124154();
    return;
  }
  uVar2 = (uint)*(byte *)(param_1 + 5);
  if (uVar2 != 1) {
    if (uVar2 < 2) {
      if (uVar2 == 0) {
        if ((DAT_800e7eaa != *(char *)(param_1 + 0x2a)) || (DAT_800e7e85 != '\0'))
        goto LAB_8011b1b0;
        *(undefined2 *)(param_1 + 0x42) = 8;
        *(undefined1 *)(param_1 + 5) = 1;
        DAT_1f800137 = 2;
        func_0x8004ed94(0x34,0x41);
        func_0x80074590(0x19,0,0);
        uVar2 = extraout_v1;
      }
    }
    else if (uVar2 == 2) {
      if (DAT_800e7eaa != *(char *)(param_1 + 0x2a)) {
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_8011b1b0;
    }
    if (uVar2 == 2) {
      *(undefined1 *)(unaff_s1 + 5) = 3;
      DAT_1f800236 = 7;
      DAT_800bf839 = (char)param_1;
      _DAT_800bf83a = (ushort)*(byte *)(unaff_s1 + 0xbf) << 4;
      return;
    }
    FUN_8012d2a8();
    return;
  }
  sVar1 = *(short *)(param_1 + 0x42) + -1;
  *(short *)(param_1 + 0x42) = sVar1;
  if (sVar1 == -1) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    DAT_800e7e84 = 4;
    DAT_800e7e85 = 0x24;
    DAT_800e7e86 = 0;
    DAT_1f800137 = 0;
    DAT_800bf81f = *(char *)(param_1 + 0x5f) << 4;
    FUN_80124148();
    return;
  }
LAB_8011b1b0:
  func_0x800735f4(param_1,0x48);
  return;
}

