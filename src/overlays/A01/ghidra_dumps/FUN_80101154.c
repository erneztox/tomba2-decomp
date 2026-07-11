// FUN_80101154

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_80101154(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 0x29) = 2;
  func_0x800635d4(param_1,1);
  func_0x80076d68(param_1);
  uVar3 = func_0x8005444c(param_1);
  if ((uVar3 & 1) == 0) {
    if ((*(char *)(param_1 + 0x169) != '\0') || ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) == 0)) {
      iVar4 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
      sVar1 = *(short *)(param_1 + 0x152);
      iVar5 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x2e) = *(short *)(iVar7 + 0x2c) - (short)(iVar4 * sVar1 >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(iVar7 + 0x34) + (short)(iVar5 * *(short *)(param_1 + 0x152) >> 0xc);
      iVar4 = func_0x80083e80((int)*(short *)(param_1 + 0x58));
      sVar1 = *(short *)(param_1 + 100);
      iVar5 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
      iVar6 = (int)(short)(iVar4 * sVar1 >> 0xc);
      iVar4 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar5 * iVar6 >> 0xc);
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar4 * iVar6 >> 0xc);
      *(short *)(param_1 + 0x32) = *(short *)(iVar7 + 0x30) + *(short *)(param_1 + 0x156);
      iVar7 = func_0x80083f50((int)*(short *)(param_1 + 0x58));
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x32) + (short)(iVar7 * *(short *)(param_1 + 100) >> 0xc);
      return 0;
    }
    iVar4 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
    sVar1 = *(short *)(param_1 + 0x152);
    iVar5 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x2e) = *(short *)(iVar7 + 0x2c) - (short)(iVar4 * sVar1 >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar7 + 0x34) + (short)(iVar5 * *(short *)(param_1 + 0x152) >> 0xc);
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 100) + *(short *)(iVar7 + 0x30) + *(short *)(param_1 + 0x156);
    uVar2 = _DAT_800ecf54;
  }
  else {
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined1 *)(param_2 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x80054d14(param_1,2,3);
    uVar2 = 0;
  }
  return uVar2;
}

