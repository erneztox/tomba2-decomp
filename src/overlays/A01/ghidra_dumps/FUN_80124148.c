// FUN_80124148

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124148(undefined1 param_1)

{
  int in_v1;
  int unaff_s1;
  
  if (in_v1 != 2) {
    FUN_8012d2a8();
    return;
  }
  *(undefined1 *)(unaff_s1 + 5) = 3;
  DAT_1f800236 = 7;
  DAT_800bf839 = param_1;
  _DAT_800bf83a = (ushort)*(byte *)(unaff_s1 + 0xbf) << 4;
  return;
}

