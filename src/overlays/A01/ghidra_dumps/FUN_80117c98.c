// FUN_80117c98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117c98(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_v1;
  int iVar5;
  int iVar6;
  
  uVar4 = (uint)*(byte *)(param_1 + 6);
  if (uVar4 == 0) {
    iVar5 = param_1;
    FUN_80113cb4();
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    uVar4 = extraout_v1;
    param_1 = iVar5;
  }
  else if (uVar4 == 1) {
    if ((_DAT_1f80017c + *(short *)(param_1 + 0x74) & 7U) == 0) {
      iVar5 = 0;
      if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
        iVar5 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
        iVar2 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
        iVar6 = (uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32);
        iVar3 = iVar6 * 0x10000 >> 0x10;
        uVar1 = func_0x80084080(iVar5 * iVar5 + iVar2 * iVar2 + iVar3 * iVar3);
        if ((2000 < uVar1) || (0x44c < (iVar6 + 800U & 0xffff))) {
          FUN_80120d60();
          return;
        }
        iVar5 = 2;
        if (1000 < uVar1) {
          iVar5 = 1;
        }
      }
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 3;
        }
      }
    }
    FUN_801208b4(param_1);
    return;
  }
  if ((uVar4 & 2) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x18d) = (byte)uVar4 | 2;
  return;
}

