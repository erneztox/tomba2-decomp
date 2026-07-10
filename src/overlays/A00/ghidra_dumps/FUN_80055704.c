// FUN_80055704

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80055704(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_1f800230 != '\0') {
    return 0xffffffff;
  }
  if (DAT_800bf816 != '\0') {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x174) & 7) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (((_DAT_800ecf54 & _DAT_1f800174) == 0) || (iVar2 = FUN_800535e0(param_1,1), iVar2 == 0)) {
LAB_800557d4:
      *(undefined1 *)(param_1 + 0xbf) = 0;
      return 0;
    }
  }
  else {
    if ((_DAT_800ecf54 & _DAT_1f800174) == 0) goto LAB_800557d4;
    bVar1 = *(char *)(param_1 + 0xbf) + 1;
    *(byte *)(param_1 + 0xbf) = bVar1;
    if (bVar1 < 0x15) {
      return 2;
    }
    *(undefined1 *)(param_1 + 0xbe) = 1;
  }
  return 2;
}

