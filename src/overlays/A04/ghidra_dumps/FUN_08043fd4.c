// FUN_08043fd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08043fd4(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  
  iVar5 = 0;
  puVar4 = (undefined2 *)&DAT_801442e4;
  puVar1 = (undefined2 *)&DAT_801442e0;
  do {
    puVar6 = puVar1;
    iVar2 = iVar5 * 0x1000;
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 / 0xf;
    iVar3 = func_0x00083f50(iVar2);
    *puVar6 = (short)(iVar3 >> 4);
    puVar4[-1] = 0;
    iVar2 = func_0x00083e80(iVar2);
    *puVar4 = (short)(iVar2 >> 4);
    puVar4 = puVar4 + 4;
    puVar1 = puVar6 + 4;
  } while (iVar5 < 0xf);
  puVar6[4] = _DAT_801442e0;
  puVar6[5] = _DAT_801442e2;
  puVar6[6] = _DAT_801442e4;
  return;
}

