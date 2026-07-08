
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8005344c(int param_1)

{
  if (((DAT_800bf870 == '\x04') && ((_DAT_800bfe56 & 0x10) == 0)) &&
     ((*(ushort *)(param_1 + 0x6a) & 0xf00) == 0x500)) {
    *(undefined1 *)(param_1 + 0x16a) = 0xc;
    *(undefined1 *)(param_1 + 5) = 0x37;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    return 1;
  }
  return 0;
}

