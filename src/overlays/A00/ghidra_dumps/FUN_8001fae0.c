// FUN_8001fae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001fae0(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x145) == '\0') {
    iVar4 = (int)(((uint)*(ushort *)(param_2 + 0x2e) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)*(ushort *)(param_2 + 0x36) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000)
            >> 0x10;
    uVar2 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
    if (((((int)(uVar2 & 0xffff) <=
           (int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80)) &&
         ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
                (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
          (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) &&
        (uVar1 = FUN_80085690(-iVar3,iVar4),
        ((uVar1 - *(short *)(param_1 + 0x140)) + 0x580 & 0xfff) < 0x301)) && (DAT_1f800137 == '\0'))
    {
      _DAT_1f80018c = uVar1 & 0xfff;
      *(undefined1 *)(param_2 + 0x2b) = 1;
      if ((*(char *)(param_2 + 2) == '\x0e') || (*(char *)(param_2 + 2) == '9')) {
        _DAT_1f80018e = 0x4400;
      }
      else {
        _DAT_1f80018e = 0x4800;
      }
      if (*(char *)(param_1 + 0x61) != -0x80) {
        DAT_800bf840 = 0x44;
      }
    }
  }
  return;
}

