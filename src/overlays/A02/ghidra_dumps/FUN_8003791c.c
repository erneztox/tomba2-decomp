// FUN_8003791c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003791c(int param_1,undefined1 param_2)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  undefined **ppuVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined2 local_30;
  short local_2e;
  undefined4 local_2c;
  
  local_38 = 0;
  local_36 = 0;
  local_30 = 0x58;
  local_2c = 0;
  local_2e = (ushort)*(byte *)(param_1 + 0x2d) * 0x14 + 0x49;
  puVar11 = &DAT_800d1e68;
  local_37 = param_2;
  FUN_8007e1b8(&local_30,PTR_DAT_800174c8,*(undefined4 *)(param_1 + 4),&local_38);
  puVar7 = &DAT_800a2698;
  do {
    if (puVar7[5] == 0) {
      local_30 = *puVar7;
      local_2e = puVar7[1];
LAB_80037a00:
      local_2c = *(undefined4 *)(puVar7 + 2);
    }
    else {
      if (puVar7[5] == 1) {
        local_30 = *puVar7;
        local_2e = puVar7[1] + _DAT_800d1e68 * 0x14;
        goto LAB_80037a00;
      }
      local_30 = *puVar7;
      local_2e = puVar7[1];
      local_2c = CONCAT22(puVar7[3] + _DAT_800d1e68 * 0x15,puVar7[2]);
    }
    psVar1 = puVar7 + 4;
    puVar7 = puVar7 + 6;
    FUN_8007e1b8(&local_30,(&PTR_DAT_80017334)[*psVar1],*(undefined4 *)(param_1 + 4),&local_38);
    if (-0x7ff5d8fd < (int)puVar7) {
      iVar10 = 0;
      if (0 < _DAT_800d1e68) {
        iVar9 = 0;
        do {
          sVar2 = *(short *)(puVar11 + 2);
          ppuVar8 = &PTR_s_The_Starting_Beach_800a2b64 + sVar2;
          uVar3 = FUN_80073750(*ppuVar8);
          iVar4 = FUN_80036d90((int)sVar2);
          if (iVar4 == 0) {
            puVar6 = *ppuVar8;
            uVar5 = 0;
          }
          else {
            puVar6 = *ppuVar8;
            uVar5 = 8;
          }
          iVar4 = iVar9 + ((int)~uVar3 >> 0x1f & 4U) + 0x40;
          iVar9 = iVar9 + 0x14;
          FUN_80079324(0x24,iVar4 * 0x10000 >> 0x10,uVar5,puVar6,0);
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 0xc;
        } while (iVar10 < _DAT_800d1e68);
      }
      return;
    }
  } while( true );
}

