// FUN_80039110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80039110(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_48;
  byte local_47;
  undefined2 local_46;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 auStack_38 [16];
  
  uVar13 = 0;
  cVar7 = *(char *)(param_1 + 0xe);
  cVar8 = *(char *)(param_1 + 0x12);
  local_47 = *(byte *)(param_1 + 0x16);
  uVar14 = (uint)local_47;
  puVar12 = &DAT_800a27c4;
  local_46 = 0;
  local_3a = 0;
  local_3e = cVar8 + 0xc;
  do {
    if ((1 < uVar13) || (*(char *)(param_1 + 8) == '\x02')) {
      local_48 = *puVar12;
      local_40 = *(short *)(puVar12 + 2) + (short)cVar7;
      local_3c = *(undefined2 *)(puVar12 + 4);
      FUN_8007e1b8(&local_40,(&PTR_DAT_80017334)[*(short *)(puVar12 + 6)],
                   *(undefined4 *)(param_1 + 4),&local_48);
    }
    uVar13 = uVar13 + 1;
    puVar12 = puVar12 + 8;
  } while ((int)uVar13 < 6);
  if (*(char *)(param_1 + 8) == '\x02') {
    FUN_80025934(0x800ed058,1,uVar14);
    bVar1 = DAT_800bf882 != '\0';
    if (bVar1) {
      FUN_80079324(0x30,0x6a,0,&DAT_80010688,uVar14);
    }
    if ((DAT_800bf91e != -1) && (8 < DAT_800bf87c)) {
      bVar1 = true;
      FUN_80079634((uint)DAT_800bf87c - (uint)DAT_800bf87d,auStack_38);
      FUN_80079374(0x26,0x66,0,auStack_38,uVar14);
    }
    if (bVar1) {
      FUN_8007e938(*(undefined4 *)(param_1 + 4),0x1c,0x6c,uVar14,0xd2);
    }
    FUN_80079374(0x14,0x7c,0,&DAT_8001068c,uVar14);
    iVar9 = FUN_80079634(_DAT_800bf874,auStack_38);
    FUN_80079374((iVar9 * -8 + 0x68) * 0x10000 >> 0x10,0x7c,0,auStack_38,uVar14);
    FUN_80079324(0x50,0x30,0,PTR_DAT_800a3a90,uVar14);
    uVar10 = FUN_800787f8(DAT_800bf870);
    FUN_80079324(0x50,0x38,0,uVar10,uVar14);
    FUN_80079324(0x50,0x50,0,PTR_s_Section_800a3a94,uVar14);
    uVar10 = FUN_80078798(DAT_800bf870,DAT_800bf871);
    FUN_80079324(0x50,0x58,0,uVar10,uVar14);
    FUN_80079324(200,0x30,0,PTR_s_Status_800a3aa0,uVar14);
    local_40 = cVar7 + 0xd4;
    local_48 = 0;
    local_46 = 0;
    local_3e = cVar8 + 0x44;
    local_3c = 0;
    bVar1 = (_DAT_800bf880 & 0x800) != 0;
    local_3a = 0;
    if (bVar1) {
      FUN_8007e1b8(&local_40,PTR_DAT_80017678,*(undefined4 *)(param_1 + 4),&local_48);
      local_40 = local_40 + 0x14;
    }
    bVar2 = (_DAT_800bf880 & 0x200) != 0;
    if (bVar2) {
      FUN_8007e1b8(&local_40,PTR_DAT_80017418,*(undefined4 *)(param_1 + 4),&local_48);
      local_40 = local_40 + 0x14;
    }
    bVar3 = (_DAT_800bf880 & 0x100) != 0;
    if (bVar3) {
      FUN_8007e1b8(&local_40,PTR_DAT_8001741c,*(undefined4 *)(param_1 + 4),&local_48);
      local_40 = local_40 + 0x14;
    }
    bVar4 = (_DAT_800bf880 & 0x400) != 0;
    if (bVar4) {
      FUN_8007e1b8(&local_40,PTR_DAT_80017420,*(undefined4 *)(param_1 + 4),&local_48);
      local_40 = local_40 + 0x14;
    }
    bVar5 = (_DAT_800bf89e & 0x200) != 0;
    if (bVar5) {
      FUN_8007e1b8(&local_40,PTR_DAT_80017674,*(undefined4 *)(param_1 + 4),&local_48);
      local_40 = local_40 + 0x14;
    }
    bVar6 = (_DAT_800bf880 & 0x3000) != 0;
    if (bVar6) {
      FUN_8007e1b8(&local_40,PTR_DAT_80017788,*(undefined4 *)(param_1 + 4),&local_48);
      local_40 = local_40 + 0x14;
    }
    if (!bVar6 && (!bVar5 && (!bVar4 && (!bVar3 && (!bVar2 && !bVar1))))) {
      FUN_8007e1b8(&local_40,PTR_DAT_80017414,*(undefined4 *)(param_1 + 4),&local_48);
      FUN_80079324(0xe8,0x3c,0,PTR_s_Normal_800a3aa4,uVar14);
    }
    FUN_80079324(200,0x58,0,PTR_s_Using_the__800a3abc,uVar14);
    iVar9 = uVar14 + 1;
    FUN_8007e938(*(undefined4 *)(param_1 + 4),0xd0,0x6a,iVar9,
                 (int)*(short *)(&DAT_800a24f4 + (uint)DAT_800bf88c * 2));
    FUN_800342ec(param_1,0xd8,0x66,uVar14);
    FUN_800376ec(param_1,DAT_800bf88c,0xdc,0x66,4,uVar14);
    FUN_8007e938(*(undefined4 *)(param_1 + 4),0xd0,0x7e,iVar9,
                 (int)*(short *)(&DAT_800a24f4 + (DAT_800bf88d + 10) * 2));
    FUN_800342ec(param_1,0xd8,0x7a,uVar14);
    FUN_800376ec(param_1,DAT_800bf88d + 10,0xdc,0x7a,4,uVar14);
    uVar13 = (uint)DAT_800bf88f;
    if ((uVar13 != 0) && (uVar13 != 0x6c)) {
      FUN_8007e938(*(undefined4 *)(param_1 + 4),0xd0,0x92,iVar9,
                   (int)*(short *)(&DAT_800a24f4 + uVar13 * 2));
      FUN_800376ec(param_1,DAT_800bf88f,0xdc,0x8e,4,uVar14);
      FUN_800342ec(param_1,0xd8,0x8e,uVar14);
    }
    if (DAT_800bf88e != 0) {
      FUN_8007e938(*(undefined4 *)(param_1 + 4),0xd0,0xa6,uVar14 + 1,
                   (int)*(short *)(&DAT_800a24f4 + (uint)DAT_800bf88e * 2));
      uVar11 = 2;
      if ((&DAT_800a2be8)[(uint)DAT_800bf88e * 0xc] == '\x02') {
        uVar11 = 3;
      }
      FUN_800376ec(param_1,(uint)DAT_800bf88e,0xdc,0xa2,uVar11,uVar14);
      FUN_800342ec(param_1,0xd8,0xa2,uVar14);
    }
    if (DAT_800bf883 == '\0') {
      FUN_80079324(0x70,0x70,0,PTR_DAT_800a3a98,uVar14);
    }
    else {
      FUN_80079324(0x70,0x70,0,PTR_s_Pig_bag_800a3a9c,uVar14);
      FUN_80039034(param_1);
    }
    FUN_80079324(0x14,0x98,0,PTR_s_Event_800a3a84,uVar14);
    FUN_80079324(0x44,0xa4,0,&DAT_80010690,uVar14);
    iVar9 = FUN_80079634((int)_DAT_800bf8aa,auStack_38);
    FUN_80079324((iVar9 * -8 + 0x44) * 0x10000 >> 0x10,0xa4,0,auStack_38,uVar14);
    iVar9 = FUN_80079634((int)_DAT_800bf8a8,auStack_38);
    FUN_80079324((iVar9 * -8 + 100) * 0x10000 >> 0x10,0xa4,0,auStack_38,uVar14);
    FUN_80033a0c(param_1,&DAT_800a27f4,uVar14 + 7);
  }
  return;
}

