
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80030a3c(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  short local_48;
  
  bVar1 = *(byte *)(param_1 + 4);
  psVar11 = (short *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    psVar8 = (short *)(param_1 + 0x6c);
    if (bVar1 != 0) {
      return;
    }
    local_48 = 0;
    sVar5 = *(short *)(param_1 + 0x2c);
    sVar2 = *(short *)(param_1 + 0x2e);
    sVar3 = *(short *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x4e) = 3;
    do {
      uVar6 = FUN_8009a450();
      uVar10 = (uVar6 & 0x3f) - 0x20;
      uVar6 = FUN_8009a450();
      uVar9 = (uVar6 & 0x3f) - 0x20;
      uVar6 = FUN_8009a450();
      uVar6 = (uVar6 & 0x3f) - 0x20;
      if (*(char *)(param_1 + 3) == ',') {
        uVar4 = FUN_8009a450();
        uVar10 = (int)(uVar10 * 0x10000) >> 0x11;
        uVar9 = (int)(uVar9 * 0x10000) >> 0x11;
        psVar8[-0xb] = (uVar4 & 0x3f) + 0x100;
        uVar6 = (int)(uVar6 * 0x10000) >> 0x11;
        if (_DAT_800e7ffe < 0) {
          uVar10 = uVar10 >> 1;
          uVar9 = uVar9 >> 1;
          uVar6 = uVar6 >> 1;
        }
      }
      else {
        uVar4 = FUN_8009a450();
        psVar8[-0xb] = (uVar4 & 0xff) + 0x80;
      }
      local_48 = local_48 + 1;
      *psVar11 = sVar5 + (short)uVar10;
      psVar8[-0xd] = sVar2 + (short)uVar9;
      psVar11 = psVar11 + 4;
      psVar8[-0xc] = sVar3 + (short)uVar6;
      psVar8[-2] = (short)uVar10 >> 2;
      psVar8[-1] = (short)uVar9 >> 2;
      *psVar8 = (short)uVar6 >> 2;
      psVar8 = psVar8 + 4;
    } while (local_48 < 3);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  }
  psVar11 = (short *)(param_1 + 0x50);
  sVar5 = FUN_8002b278(param_1);
  iVar7 = FUN_8009a450();
  iVar7 = (uint)*(byte *)(param_1 + 7) + (iVar7 >> 0xb) + 0x20;
  *(char *)(param_1 + 7) = (char)iVar7;
  if (iVar7 * 0x1000000 < 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    if (sVar5 == 0) {
      FUN_80031780(param_1);
    }
    else {
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -0x80;
    }
  }
  psVar8 = (short *)(param_1 + 0x6a);
  local_48 = 0;
  uVar4 = _DAT_1f80017c & 1;
  do {
    *psVar11 = *psVar11 + psVar8[-1];
    psVar8[-0xc] = psVar8[-0xc] + *psVar8;
    psVar8[-0xb] = psVar8[-0xb] + psVar8[1];
    if ((DAT_800bf870 != '\x06') || (uVar4 == 0)) {
      *psVar8 = *psVar8 + 1;
    }
    psVar8 = psVar8 + 4;
    local_48 = local_48 + 1;
    psVar11 = psVar11 + 4;
  } while (local_48 < 3);
  return;
}

