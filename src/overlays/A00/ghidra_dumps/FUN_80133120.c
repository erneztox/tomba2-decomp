// FUN_80133120

void FUN_80133120(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  
  if (param_1 == 0) {
    iVar7 = 0;
    do {
      puVar2 = (undefined1 *)(iVar7 + -0x7feb3884);
      iVar7 = iVar7 + 1;
      *puVar2 = 0;
    } while (iVar7 < 1);
    FUN_8013c1c0();
    return;
  }
  piVar6 = (int *)&DAT_8014abdc;
  iVar7 = 0;
  puVar8 = (undefined2 *)&DAT_8014abe6;
  do {
    pbVar5 = (byte *)(iVar7 + -0x7feb3884);
    bVar1 = *pbVar5;
    *pbVar5 = bVar1 - 1;
    if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 1) {
      pcVar3 = (char *)*piVar6;
      if (*pcVar3 == -1) {
        *piVar6 = (int)pcVar3 - (uint)(byte)pcVar3[1];
      }
      iVar4 = *(int *)(puVar8 + -3);
      bVar1 = *(byte *)*piVar6;
      *pbVar5 = ((byte *)*piVar6)[1];
      uStack_20 = puVar8[-1];
      uStack_1e = *puVar8;
      uStack_1c = 0x10;
      uStack_1a = 1;
      func_0x80081218(&uStack_20,iVar4 + (uint)bVar1 * 0x20);
      *piVar6 = *piVar6 + 2;
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 6;
    piVar6 = piVar6 + 3;
  } while (iVar7 < 1);
  return;
}

