// FUN_8011b100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011b100(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int extraout_v1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x42) = 8;
  *(undefined1 *)(unaff_s0 + 5) = param_3;
  DAT_1f800137 = 2;
  func_0x8004ed94();
  func_0x80074590(0x19,0,0);
  if (extraout_v1 != 2) {
    FUN_8012d2a8();
    return;
  }
  *(undefined1 *)(unaff_s1 + 5) = 3;
  DAT_1f800236 = 7;
  DAT_800bf839 = (char)unaff_s0;
  _DAT_800bf83a = (ushort)*(byte *)(unaff_s1 + 0xbf) << 4;
  return;
}

