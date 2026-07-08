
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004960c(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (uint)*(byte *)(_DAT_1f8001e4 + 6);
  }
  else {
    uVar1 = (uint)(*(ushort *)(_DAT_1f8001e4 + 6) >> 8);
  }
  *(undefined1 *)(param_1 + 0x2a) =
       *(undefined1 *)(_DAT_1f8001d4 + (uint)*(ushort *)(_DAT_1f8001e4 + 2) * 8 + uVar1 * 8);
  return 1;
}

