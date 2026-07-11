// FUN_08012060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012060(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  func_0x0010ae18();
  if ((DAT_800bf873 == '\0') && ((*(byte *)(param_1 + 0x174) & 7) == 0)) {
    iVar3 = (int)(((uint)*(ushort *)(param_2 + 0x2e) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar2 = (int)(((uint)*(ushort *)(param_2 + 0x36) - (*(ushort *)(param_1 + 0x36) - 300)) *
                 0x10000) >> 0x10;
    uVar1 = func_0x00084080(iVar3 * iVar3 + iVar2 * iVar2);
    if (((int)(uVar1 & 0xffff) <= *(short *)(param_1 + 0x80) + 200) &&
       ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
              (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
      _DAT_1f80009c = func_0x00085690(-iVar2,iVar3);
      if ((((_DAT_1f80018e == 0) && (DAT_1f800137 == '\0')) && ((*param_2 & 2) == 0)) &&
         (DAT_800bfaba != '\0')) {
        iVar2 = (int)(((_DAT_1f80009c & 0xfff) - (uint)*(ushort *)(param_1 + 0x56)) * 0x100000) >>
                0x10;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if ((iVar2 < 0x4001) &&
           ((*(char *)(param_1 + 5) != '\x1f' || (param_2 == *(byte **)(param_1 + 0x10))))) {
          _DAT_1f80018e = 0x1500;
          _DAT_1f80026c = 0;
          _DAT_1f800270 = 0xfe70;
          DAT_800bf840 = 0x4e;
          _DAT_1f800184 = param_2;
        }
      }
    }
  }
  return;
}

