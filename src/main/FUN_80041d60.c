
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80041d60(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    uVar4 = 3;
    if ((*(ushort *)(param_1 + 0x72) & 0x1000) == 0) {
      uVar4 = 0;
    }
    iVar3 = FUN_8007def8(*(ushort *)(param_1 + 0x72) & 0xfff,*(undefined1 *)(param_1 + 0x7a),uVar4);
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = _DAT_1f800214;
    if (((int)*(short *)(param_1 + 0x72) & 0x8000U) == 0) {
      iVar3 = param_1;
    }
    FUN_80041768(iVar3,(int)*(short *)(param_1 + 0x76),4);
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    if (-1 < *(short *)(param_1 + 0x74)) {
      *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)(param_1 + 0x74);
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 1;
      }
      return 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\x02') {
      uVar2 = *(ushort *)(param_1 + 0x72);
      if ((uVar2 & 0x2000) == 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x79) == '\x01') {
        if (*(char *)(param_1 + 0x7b) == -1) {
          return 0;
        }
        *(ushort *)(param_1 + 0x72) = uVar2 & 0xdfff;
        iVar3 = _DAT_1f800214;
        if ((uVar2 & 0x8000) == 0) {
          iVar3 = param_1;
        }
        FUN_80041768(iVar3,*(undefined1 *)(iVar3 + 0x7b),4);
        return 0;
      }
      return 0;
    }
    if ((*(char *)(param_1 + 0x7b) != -1) && ((*(ushort *)(param_1 + 0x72) & 0x4000) == 0)) {
      iVar3 = _DAT_1f800214;
      if ((*(ushort *)(param_1 + 0x72) & 0x8000) == 0) {
        iVar3 = param_1;
      }
      FUN_80041768(iVar3,*(undefined1 *)(iVar3 + 0x7b),4);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
  }
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  return 0;
}

