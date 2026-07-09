// FUN_80102300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80102300(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 0x29) = 2;
  func_0x800635d4(param_1,1);
  func_0x80076d68(param_1);
  if ((*(char *)(param_1 + 0x169) == '\0') && ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x156);
    *(short *)(param_1 + 0x2e) = *(short *)(iVar7 + 0x2c) + *(short *)(param_1 + 0x152);
    *(ushort *)(param_1 + 0x32) = *(short *)(param_1 + 100) + *(short *)(iVar7 + 0x30) + uVar2;
    iVar7 = func_0x80022f04();
    uVar5 = 0;
    if (iVar7 != 0) {
      DAT_800f002b = 1;
      DAT_800f0046 = (undefined1)(*(ushort *)(uVar2 + 0x56) >> 4);
      func_0x8001e860();
      uVar5 = 0x1f800000;
      DAT_1f800182 = 0;
    }
    return uVar5;
  }
  *(short *)(param_1 + 0x2e) = *(short *)(iVar7 + 0x2c) + *(short *)(param_1 + 0x152) + 0x28;
  iVar3 = func_0x80083e80((int)*(short *)(param_1 + 0x58));
  sVar1 = *(short *)(param_1 + 100);
  iVar4 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
  iVar6 = (int)(short)(iVar3 * sVar1 >> 0xc);
  iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar4 * iVar6 >> 0xc);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar3 * iVar6 >> 0xc);
  iVar3 = func_0x80083e80((int)*(short *)(iVar7 + 0xc));
  *(short *)(param_1 + 0x32) =
       (short)(iVar3 * *(short *)(param_1 + 0x152) >> 0xc) +
       *(short *)(iVar7 + 0x30) + *(short *)(param_1 + 0x156);
  iVar7 = func_0x80083f50((int)*(short *)(param_1 + 0x58));
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(iVar7 * *(short *)(param_1 + 100) >> 0xc);
  return 0;
}

