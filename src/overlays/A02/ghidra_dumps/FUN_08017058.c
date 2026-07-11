// FUN_08017058

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017058(int param_1,byte *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  
  if (param_2[3] != 0) {
    iVar3 = func_0x0002300c(param_1,param_2,*(short *)(param_2 + 0x80) + 100);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = (uint)_DAT_1f80009c;
    if (((((*(byte *)(param_1 + 0x174) & 7) == 0) && (_DAT_1f80018e == 0)) && (DAT_1f800137 == '\0')
        ) && (((*param_2 & 2) == 0 && (DAT_800bfaba != '\0')))) {
      if ((99 < param_2[3]) ||
         (sVar7 = -0x400, *(short *)(param_1 + 0x36) < *(short *)(param_2 + 0x36))) {
        sVar7 = 0x400;
      }
      iVar4 = func_0x00083f50((int)*(short *)(param_2 + 0x56) + (int)sVar7,param_2);
      sVar1 = *(short *)(param_2 + 0x80);
      sVar2 = *(short *)(param_1 + 0x80);
      iVar5 = func_0x00083e80((int)*(short *)(param_2 + 0x56) + (int)sVar7);
      iVar3 = (int)(((uVar6 & 0xfff) - (uint)*(ushort *)(param_1 + 0x56)) * 0x100000) >> 0x10;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if ((iVar3 < 0x2001) &&
         ((*(char *)(param_1 + 5) != '\x1f' || (param_2 == *(byte **)(param_1 + 0x10))))) {
        _DAT_1f80018e = 0x1100;
        _DAT_1f80026c = (undefined2)(iVar4 * ((int)sVar1 + (int)sVar2 + 0x78) >> 0xc);
        _DAT_1f800270 =
             (undefined2)
             (iVar5 * ((int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80) + 0x78) >>
             0xc);
        DAT_800bf840 = 0x4e;
        _DAT_1f800184 = param_2;
      }
    }
  }
  func_0x0010fbfc(param_1,param_2);
  return;
}

