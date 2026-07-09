// FUN_801052bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801052bc(int param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_8010dfd8(param_1,param_2,1);
  if (iVar2 < 0) {
    if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && ((*(ushort *)(param_2 + 0x62) & 8) != 0)) {
      iVar6 = *(int *)(param_2 + 0xfc);
      iVar2 = ((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar6 + 0x2c)) * 0x10000;
      iVar7 = iVar2 >> 0x10;
      iVar3 = ((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar6 + 0x34)) * 0x10000;
      iVar5 = iVar3 >> 0x10;
      uVar4 = func_0x80084080(iVar7 * iVar7 + iVar5 * iVar5);
      bVar1 = false;
      if (((int)(uVar4 & 0xffff) <= *(short *)(param_1 + 0x80) + 100) &&
         (bVar1 = false,
         (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(iVar6 + 0x30)) +
               *(ushort *)(param_1 + 0x84) + 0x32 & 0xffff) <= *(short *)(param_1 + 0x86) + 100)) {
        _DAT_1f80009c = func_0x80085690(-iVar5,iVar7);
        bVar1 = true;
      }
      if (bVar1) {
        *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
        func_0x80022d08(param_1,param_2,1,0);
        if (((iVar7 == param_1) && (*(char *)(iVar6 + 5) == '\0')) &&
           (iVar5 = func_0x80040c00(6), -1 < iVar5)) {
          func_0x80040b48(7);
          func_0x8004d4c4(0x29,1);
          func_0x8004b0d8(iVar6);
          *(char *)(iVar6 + 0x5e) = (char)((uint)iVar3 >> 0x10);
          *(char *)(iVar6 + 4) = (char)((uint)iVar2 >> 0x10);
          *(undefined1 *)(iVar6 + 5) = 0;
          *(undefined1 *)(iVar6 + 6) = 0;
          DAT_800bf9e5 = 6;
          FUN_801173f0();
          return;
        }
        return;
      }
    }
  }
  else {
    func_0x8001ff7c(param_1,param_2,iVar2,1);
    if ((param_2[4] == '\x01') && (param_2[3] == -0x7f)) {
      *param_2 = 3;
      iVar2 = _DAT_1f80009c;
      param_2[4] = 2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[0x2b] = (char)(iVar2 + 0x800 >> 4);
    }
  }
  return;
}

