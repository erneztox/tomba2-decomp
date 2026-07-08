
void FUN_8001339c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = 0;
  local_40 = 0x5000000;
  local_3c = 0x280000ff;
  do {
    iVar6 = 0;
    pcVar5 = (char *)&local_28;
    do {
      local_28 = DAT_80010134;
      local_24 = DAT_80010138;
      uVar3 = 0;
      puVar4 = &local_40;
      do {
        iVar2 = (int)(uVar3 + 2) >> 2;
        iVar1 = iVar7 + (uVar3 & 1);
        uVar3 = uVar3 + 1;
        puVar4[2] = ((int)pcVar5[1] * (uint)(byte)(&DAT_80025474)[iVar2 + (0x10 - iVar1) * 2] + 0x78
                    ) * 0x10000 |
                    (int)*pcVar5 * (uint)(byte)(&DAT_80025474)[iVar2 + iVar1 * 2] + 0xa0;
        puVar4 = puVar4 + 1;
      } while ((int)uVar3 < 4);
      FUN_800137e0(&local_40);
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 2;
    } while (iVar6 < 4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  local_38[0] = 0x500070;
  local_38[1] = 0x480078;
  local_38[2] = 0xa800c8;
  local_38[3] = 0xa000d0;
  FUN_800137e0(&local_40);
  return;
}

