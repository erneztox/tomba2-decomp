
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_800634a8(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_800635d4(param_1,1);
  FUN_80076d68(param_1);
  if ((*(char *)(param_1 + 0x169) == '\0') && ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) != 0)) {
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x14c);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x150);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x14e) + *(short *)(param_1 + 100);
    uVar2 = _DAT_800ecf54;
  }
  else {
    iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x58));
    sVar1 = *(short *)(param_1 + 100);
    iVar4 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
    iVar5 = (int)(short)(iVar3 * sVar1 >> 0xc);
    iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x150) + (short)(iVar4 * iVar5 >> 0xc);
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x14c) - (short)(iVar3 * iVar5 >> 0xc);
    iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0x58));
    uVar2 = 0;
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x14e) + (short)(iVar3 * *(short *)(param_1 + 100) >> 0xc);
  }
  return uVar2;
}

