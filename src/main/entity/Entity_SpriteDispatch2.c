/**
 * @brief Entity sprite dispatch variant 2: entity[0x72] bits
 * @note Original: func_800444EC at 0x800444EC
 */
// Entity_SpriteDispatch2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800444ec(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  
  uVar4 = *(ushort *)(param_1 + 0x72);
  uVar6 = uVar4 & 0x7fff;
  iVar5 = _DAT_1f800214;
  if ((uVar4 & 0x8000) == 0) {
    iVar5 = param_1;
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (DAT_800e7fe4 == '\0') {
      if ((uVar4 & 0x7fff) == 0) {
        sVar1 = *(short *)(param_1 + 0x36);
        sVar2 = *(short *)(param_1 + 0x2e);
      }
      else {
        sVar1 = *(short *)(param_1 + 0x76);
        sVar2 = *(short *)(param_1 + 0x74);
      }
      _DAT_1f800192 = FUN_80085690((int)_DAT_1f800164 - (int)sVar1,(int)sVar2 - (int)_DAT_1f800160);
      _DAT_1f800192 = _DAT_1f800192 & 0xfff;
      DAT_800e7e85 = 0x1e;
      DAT_800e7e86 = 0;
    }
    if ((uVar4 & 0x7fff) == 0) {
      sVar2 = *(short *)(param_1 + 0x36);
      *(ushort *)(param_1 + 0x72) = *(ushort *)(param_1 + 0x72) | 0x100;
      sVar1 = *(short *)(iVar5 + 0x36);
      sVar3 = *(short *)(param_1 + 0x2e);
    }
    else {
      sVar1 = *(short *)(iVar5 + 0x36);
      sVar2 = *(short *)(param_1 + 0x76);
      sVar3 = *(short *)(param_1 + 0x74);
    }
    uVar4 = FUN_80085690((int)sVar1 - (int)sVar2,(int)sVar3 - (int)*(short *)(iVar5 + 0x2e));
    *(ushort *)(param_1 + 100) = uVar4 & 0xfff;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    if ((*(short *)(param_1 + 100) - *(short *)(iVar5 + 0x56) & 0xfffU) < uVar6) {
      *(short *)(iVar5 + 0x56) = *(short *)(param_1 + 100);
      if (DAT_800e7fe4 != '\0') {
        return 1;
      }
      if (DAT_800bf80e != '\0') {
        return 1;
      }
    }
    else {
      if (0x7ff < (*(short *)(param_1 + 100) - *(short *)(iVar5 + 0x56) & 0xfffU)) {
        uVar6 = -uVar6;
      }
      *(ushort *)(iVar5 + 0x56) = *(short *)(iVar5 + 0x56) + uVar6;
    }
  }
  return 0;
}
