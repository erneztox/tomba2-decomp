// FUN_80102664

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80102664(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x158);
  if (*(char *)(iVar3 + 0xc) == '\x04') {
    if (*(char *)(iVar3 + 2) == '\x05') {
      uVar1 = FUN_8010b29c(param_1,iVar3);
      return uVar1;
    }
    if (*(char *)(iVar3 + 2) == '\b') {
      *(undefined1 *)(iVar3 + 0x29) = 1;
      *(short *)(iVar3 + 0x60) = -*(short *)(param_1 + 0x152);
      func_0x800635d4(param_1,1);
      func_0x80076d68(param_1);
      if ((*(char *)(param_1 + 0x169) == '\0') && ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) != 0)) {
        *(undefined2 *)(param_1 + 0x58) = 0;
        FUN_8010b42c(param_1,iVar3);
        return (uint)_DAT_800ecf54;
      }
      FUN_8010b42c(param_1,iVar3);
      iVar2 = func_0x80049280(param_1,0,(int)*(short *)(param_1 + 0x62));
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x29) = 1;
        *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
        func_0x80049674(param_1);
        *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
        *(undefined1 *)(iVar3 + 0x29) = 0;
        *(undefined1 *)(param_1 + 0x164) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        func_0x80054198(param_1);
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        func_0x80054d14(param_1,2,4);
      }
    }
  }
  return 0;
}

