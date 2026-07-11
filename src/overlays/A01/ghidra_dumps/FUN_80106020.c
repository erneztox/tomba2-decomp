// FUN_80106020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80106020(int param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  puVar10 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while (puVar11 = _DAT_1f80013c, cVar2 = DAT_1f800144, DAT_1f800182 != '\0') {
    pbVar9 = (byte *)*puVar10;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar10 = puVar10 + 1;
    if (((*pbVar9 & 1) != 0) && (pbVar9[2] == 0x16)) {
      iVar8 = *(int *)(pbVar9 + 0xc0);
      iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar8 + 0x2c)) * 0x10000)
              >> 0x10;
      iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar8 + 0x34)) * 0x10000)
              >> 0x10;
      uVar6 = func_0x80084080(iVar4 * iVar4 + iVar5 * iVar5);
      if ((int)(uVar6 & 0xffff) <=
          ((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
          (int)*(short *)(pbVar9 + 0x80)) {
        sVar7 = *(short *)(pbVar9 + 0x84) +
                (*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84));
        if ((int)(uint)(ushort)((*(short *)(param_1 + 0x32) - *(short *)(iVar8 + 0x30)) + sVar7) <=
            (int)*(short *)(param_1 + 0x86) + (int)*(short *)(pbVar9 + 0x86)) {
          *(short *)(param_1 + 0x32) = *(short *)(iVar8 + 0x30) - sVar7;
          *(undefined1 *)(param_1 + 0x29) = 1;
        }
      }
    }
  }
  while( true ) {
    do {
      if (cVar2 == '\0') {
        DAT_1f800182 = cVar2;
        return;
      }
      pbVar9 = (byte *)*puVar11;
      DAT_1f800182 = cVar2 + -1;
      puVar11 = puVar11 + 1;
      cVar2 = DAT_1f800182;
    } while ((*pbVar9 & 1) == 0);
    if (pbVar9[2] == 8) break;
    if ((pbVar9[2] == 0x12) && (pbVar9[3] != 8)) {
      sVar7 = *(short *)(pbVar9 + 0x84);
      *(short *)(pbVar9 + 0x84) = sVar7 + 300;
      sVar1 = *(short *)(pbVar9 + 0x86);
      *(short *)(pbVar9 + 0x86) = sVar1 + 300;
      iVar4 = func_0x800240fc(param_1,pbVar9);
      if (iVar4 != 0) {
        sVar3 = *(short *)(param_1 + 0x4a) + -0x800;
        *(short *)(param_1 + 0x4a) = sVar3;
        if (sVar3 < -0x2000) {
          *(undefined2 *)(param_1 + 0x4a) = 0xe000;
        }
        *(undefined1 *)(param_1 + 0x29) = 1;
      }
      *(short *)(pbVar9 + 0x84) = sVar7;
      *(short *)(pbVar9 + 0x86) = sVar1;
      cVar2 = DAT_1f800182;
    }
  }
  func_0x8002423c(param_1,pbVar9);
  FUN_8010f208();
  return;
}

