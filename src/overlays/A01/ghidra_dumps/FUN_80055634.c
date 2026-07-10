// FUN_80055634

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80055634(int param_1,int param_2)

{
  int iVar1;
  
  if (DAT_800bf816 == '\0') {
    if (DAT_1f800230 != '\0') {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x174) & 7) != 0) {
      return 0;
    }
    if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
      *(undefined1 *)(param_1 + 0x175) = 0;
      iVar1 = FUN_800535e0(param_1,0);
      return (uint)(iVar1 != 0) << 1;
    }
    if (param_2 != 0) {
      return 0;
    }
    if (((_DAT_800ecf54 & _DAT_1f800174) != 0) && (iVar1 = FUN_800535e0(param_1,1), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x175) = 1;
      return 2;
    }
    *(undefined1 *)(param_1 + 0x175) = 0;
  }
  return 0;
}

