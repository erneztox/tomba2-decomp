// FUN_0801847c

void FUN_0801847c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  uint *local_30;
  
  puVar9 = (undefined2 *)&DAT_8012594c;
  uVar4 = 0xedcba987;
  iVar10 = 0;
  puVar8 = (undefined2 *)&DAT_80125950;
  local_30 = (uint *)&DAT_80125a4c;
  do {
    iVar5 = uVar4 * 0x7d2b89dd + 1;
    iVar6 = iVar5 * 0x7d2b89dd + 1;
    uVar7 = iVar6 * 0x7d2b89dd + 1;
    iVar2 = (uVar4 & 0xff) + 0x40;
    uVar4 = (uVar7 & 0x3f) + 0xc0;
    *local_30 = uVar4 | uVar4 * 0x100;
    uVar4 = uVar7 * 0x7d2b89dd + 1;
    iVar1 = func_0x00083e80(iVar5);
    iVar5 = func_0x00083f50(iVar5);
    iVar3 = iVar5 * iVar2 >> 0xc;
    iVar5 = func_0x00083e80(iVar6);
    iVar6 = func_0x00083f50(iVar6);
    iVar10 = iVar10 + 1;
    local_30 = local_30 + 1;
    *puVar9 = (short)(iVar5 * iVar3 >> 0xc);
    puVar9 = puVar9 + 4;
    puVar8[-1] = (short)(iVar1 * iVar2 >> 0xc);
    *puVar8 = (short)(iVar6 * iVar3 >> 0xc);
    puVar8 = puVar8 + 4;
  } while (iVar10 < 0x20);
  return;
}

