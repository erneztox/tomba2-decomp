
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80038a00(int param_1)

{
  short *psVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_58;
  byte local_57;
  undefined2 local_56;
  short local_50;
  short local_4e;
  undefined4 local_4c;
  undefined1 auStack_48 [16];
  short local_38;
  short local_30;
  
  iVar7 = 2;
  bVar2 = *(byte *)(param_1 + 0x15);
  uVar12 = (uint)bVar2;
  puVar5 = &DAT_800a2718;
  local_56 = 0;
  local_4c = 0;
  local_57 = bVar2 + 7;
  local_30 = (short)*(char *)(param_1 + 0xd);
  local_38 = (short)*(char *)(param_1 + 0x11);
  do {
    local_58 = *puVar5;
    local_50 = *(short *)(puVar5 + 2) + local_30;
    local_4e = *(short *)(puVar5 + 4) + local_38;
    iVar7 = iVar7 + 1;
    local_4c = CONCAT22(local_4c._2_2_,*(undefined2 *)(puVar5 + 6));
    psVar1 = (short *)(puVar5 + 8);
    puVar5 = puVar5 + 10;
    FUN_8007e1b8(&local_50,(&PTR_DAT_80017334)[*psVar1],*(undefined4 *)(param_1 + 4),&local_58);
  } while (iVar7 < 6);
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar7 = 0;
    local_57 = bVar2;
    if (*(char *)(param_1 + 9) == '\0') {
      puVar5 = &DAT_800a2704;
      do {
        local_58 = *puVar5;
        local_50 = *(short *)(puVar5 + 2) + local_30;
        local_4e = *(short *)(puVar5 + 4) + local_38;
        iVar7 = iVar7 + 1;
        local_4c = CONCAT22(local_4c._2_2_,*(undefined2 *)(puVar5 + 6));
        psVar1 = (short *)(puVar5 + 8);
        puVar5 = puVar5 + 10;
        FUN_8007e1b8(&local_50,(&PTR_DAT_80017334)[*psVar1],*(undefined4 *)(param_1 + 4),&local_58);
      } while (iVar7 < 2);
    }
    else {
      local_50 = 0xe4;
      if (*(char *)(param_1 + 0x1d) == '\0') {
        local_50 = 0x54;
      }
      local_58 = 0;
      local_56 = 0;
      local_4e = (ushort)*(byte *)(param_1 + 0x1c) * 0x14 + 0x44;
      local_4c = 0;
      FUN_8007e1b8(&local_50,PTR_DAT_800174c8,*(undefined4 *)(param_1 + 4),&local_58);
    }
    iVar8 = 0;
    iVar11 = 0x400000;
    iVar10 = 0x3c0000;
    sVar9 = 0x3c;
    iVar7 = FUN_80079528(PTR_s_Clear_800a3a8c);
    FUN_80079324((iVar7 * -8 + 0x48) * 0x10000 >> 0x10,0x2c,2,PTR_s_Clear_800a3a8c,uVar12);
    FUN_80079324(0x94,0x2c,2,PTR_s_Occur_800a3a88,uVar12);
    FUN_80079324(0x68,0x2c,0,&DAT_80010684,uVar12);
    iVar7 = FUN_80079634((int)_DAT_800bf8aa,auStack_48);
    FUN_80079324((iVar7 * -8 + 0x68) * 0x10000 >> 0x10,0x2c,2,auStack_48,uVar12);
    iVar7 = FUN_80079634((int)_DAT_800bf8a8,auStack_48);
    FUN_80079324((iVar7 * -8 + 0x8c) * 0x10000 >> 0x10,0x2c,2,auStack_48,uVar12);
    do {
      iVar7 = iVar8 + (uint)*(byte *)(param_1 + 0x1e);
      if ((int)(uint)*(byte *)(param_1 + 10) <= iVar7) break;
      uVar6 = (uint)*(byte *)(iVar7 * 3 + _DAT_800e7e6c + 1);
      if (*(char *)(uVar6 + 0x800bf8b4) != '\0') {
        if (*(char *)(uVar6 + 0x800bf8b4) == -1) {
          local_50 = local_30 + 0x1c;
          local_58 = 0;
          local_56 = 0;
          local_4e = sVar9 + local_38 + 8;
          local_4c = 0;
          local_57 = bVar2;
          FUN_8007e6dc(&local_50,PTR_DAT_800174c0,*(undefined4 *)(param_1 + 4),&local_58);
          uVar3 = 6;
        }
        else {
          uVar3 = 3;
        }
        if ((&DAT_800a33cb)[uVar6 * 0xc] == '\0') {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar7 = iVar11;
        }
        else {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar7 = iVar10;
        }
        FUN_80079324(0x28,iVar7 >> 0x10,uVar3,puVar4,uVar12);
      }
      iVar11 = iVar11 + 0x140000;
      iVar10 = iVar10 + 0x140000;
      iVar8 = iVar8 + 1;
      sVar9 = sVar9 + 0x14;
    } while (iVar8 < 6);
    iVar7 = 0;
    iVar10 = 0x400000;
    iVar8 = 0x3c0000;
    sVar9 = 0x3c;
    do {
      iVar11 = iVar7 + (uint)*(byte *)(param_1 + 0x1e);
      if ((int)(uint)*(byte *)(param_1 + 0xb) <= iVar11) break;
      uVar6 = (uint)*(byte *)(iVar11 * 3 + _DAT_800bf53c + 1);
      if (*(char *)(uVar6 + 0x800bf8b4) != '\0') {
        if (*(char *)(uVar6 + 0x800bf8b4) == -1) {
          local_50 = local_30 + 0xac;
          local_58 = 0;
          local_56 = 0;
          local_4e = sVar9 + local_38 + 8;
          local_4c = 0;
          local_57 = bVar2;
          FUN_8007e1b8(&local_50,PTR_DAT_800174c0,*(undefined4 *)(param_1 + 4),&local_58);
          uVar3 = 6;
        }
        else {
          uVar3 = 3;
        }
        if ((&DAT_800a33cb)[uVar6 * 0xc] == '\0') {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar11 = iVar10;
        }
        else {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar11 = iVar8;
        }
        FUN_80079324(0xb8,iVar11 >> 0x10,uVar3,puVar4,uVar12);
      }
      iVar10 = iVar10 + 0x140000;
      iVar8 = iVar8 + 0x140000;
      iVar7 = iVar7 + 1;
      sVar9 = sVar9 + 0x14;
    } while (iVar7 < 6);
    uVar6 = 0;
    if (*(char *)(param_1 + 0x1e) != '\0') {
      FUN_8003393c(param_1,uVar12);
      uVar6 = (uint)*(byte *)(param_1 + 0x1e);
    }
    if (uVar6 + 6 < (uint)*(byte *)(param_1 + 0x21)) {
      FUN_800339a4(param_1,uVar12);
    }
    FUN_80033a0c(param_1,&DAT_800a2740,uVar12 + 7);
  }
  return;
}

