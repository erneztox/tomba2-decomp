// FUN_0803f55c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803f55c(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  int iVar15;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  short local_30;
  
  psVar14 = (short *)(param_1 + 0x50);
  local_50[0] = _DAT_8010a1b0;
  local_50[1] = _DAT_8010a1b4;
  local_50[2] = _DAT_8010a1b8;
  local_50[3] = _DAT_8010a1bc;
  local_40 = _DAT_8010a1c0;
  local_3c = _DAT_8010a1c4;
  local_38 = _DAT_8010a1c8;
  local_34 = _DAT_8010a1cc;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar15 = 0;
    uVar10 = func_0x0009a450();
    local_30 = *(short *)(param_1 + 0x2c);
    sVar3 = *(short *)(param_1 + 0x2e);
    puVar11 = (undefined2 *)local_50[uVar10 & 7];
    sVar4 = *(short *)(param_1 + 0x30);
    psVar13 = (short *)(param_1 + 0x6c);
    *(undefined2 *)(param_1 + 0x44) = *puVar11;
    uVar5 = puVar11[1];
    *(undefined2 **)(param_1 + 0x34) = puVar11 + 2;
    *(undefined2 *)(param_1 + 0x46) = uVar5;
    do {
      iVar15 = iVar15 + 1;
      uVar9 = func_0x0009a450();
      sVar6 = (uVar9 & 0xf) + 7;
      uVar9 = func_0x0009a450();
      sVar7 = (uVar9 & 0x1f) - 0xf;
      uVar9 = func_0x0009a450();
      sVar8 = (uVar9 & 0x1f) - 0xf;
      *psVar14 = local_30 + sVar6;
      psVar13[-0xd] = sVar3 + sVar7;
      psVar13[-0xc] = sVar4 + sVar8;
      iVar12 = func_0x0009a450();
      psVar13[-0xb] = (short)(iVar12 >> 7) + 0x80;
      psVar13[-2] = sVar6;
      psVar13[-1] = sVar7;
      *psVar13 = sVar8;
      psVar13 = psVar13 + 4;
      psVar14 = psVar14 + 4;
    } while (iVar15 < 3);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 7) = 0x1e;
  }
  psVar14 = (short *)(param_1 + 0x50);
  cVar2 = *(char *)(param_1 + 7);
  *(char *)(param_1 + 7) = cVar2 + -1;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    iVar15 = 0;
    psVar13 = (short *)(param_1 + 0x6e);
    do {
      iVar15 = iVar15 + 1;
      *psVar14 = *psVar14 + psVar13[-3];
      psVar13[-0xe] = psVar13[-0xe] + psVar13[-2];
      psVar13[-2] = psVar13[-2] + -1;
      psVar13[-0xd] = psVar13[-0xd] + psVar13[-1];
      iVar12 = func_0x0009a450();
      psVar14 = psVar14 + 4;
      *psVar13 = *psVar13 + 0xcc + (short)(iVar12 >> 7);
      psVar13 = psVar13 + 4;
    } while (iVar15 < 3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

