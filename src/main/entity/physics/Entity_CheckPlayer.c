/**
 * @brief Entity player checker: tests entity[0x72] bit 0x8000
 * @note Original: func_80044308 at 0x80044308
 */
// Entity_CheckPlayer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80044308(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = _DAT_1f800214;
  if (((int)*(short *)(param_1 + 0x72) & 0x8000U) == 0) {
    iVar4 = param_1;
  }
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    sVar2 = *(short *)(iVar4 + 0x56);
    if (0xff < ((int)*(short *)(param_1 + 100) - (int)*(short *)(iVar4 + 0x56) & 0xfffU)) {
      if ((*(short *)(param_1 + 100) - sVar2 & 0xfffU) < 0x800) {
        *(short *)(iVar4 + 0x56) = sVar2 + 0x100;
        return 0;
      }
      *(short *)(iVar4 + 0x56) = sVar2 + -0x100;
      return 0;
    }
    *(short *)(iVar4 + 0x56) = *(short *)(param_1 + 100);
    if ((DAT_800e7fe4 == '\0') && (DAT_800bf80e == '\0')) {
      return 0;
    }
    uVar3 = *(ushort *)(param_1 + 0x72);
    if ((uVar3 & 0x7fff) == 2) {
      return 1;
    }
    FUN_800442a0(param_1);
    if ((uVar3 & 0x7fff) != 0) {
      return 1;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return 0;
      }
      if (*(char *)(iVar4 + 0x79) != '\x01') {
        return 0;
      }
      return 1;
    }
    if (bVar1 != 0) {
      return 0;
    }
    if (DAT_800e7fe4 == '\0') {
      _DAT_1f800192 =
           FUN_80085690((int)_DAT_1f800164 - (int)*(short *)(iVar4 + 0x36),
                        (int)*(short *)(iVar4 + 0x2e) - (int)_DAT_1f800160);
      _DAT_1f800192 = _DAT_1f800192 & 0xfff;
      DAT_800e7e85 = 0x1e;
      DAT_800e7e86 = 0;
    }
    uVar3 = FUN_80085690((int)*(short *)(iVar4 + 0x36) - (int)_DAT_1f800164,
                         (int)_DAT_1f800160 - (int)*(short *)(iVar4 + 0x2e));
    uVar3 = uVar3 & 0xfff;
    *(ushort *)(param_1 + 100) = uVar3;
    if ((uVar3 - *(short *)(iVar4 + 0x56) & 0xfff) < 0x100) {
      *(ushort *)(iVar4 + 0x56) = uVar3;
    }
  }
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  return 0;
}
