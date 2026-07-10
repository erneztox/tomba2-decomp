// FUN_00003704

void FUN_00003704(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  piVar5 = (int *)&DAT_8010d2fc;
  iVar7 = 0;
  puVar6 = (undefined2 *)&DAT_8010d306;
  do {
    pbVar4 = (byte *)(iVar7 + -0x7fef2c70);
    bVar1 = *pbVar4;
    *pbVar4 = bVar1 - 1;
    if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 1) {
      pcVar2 = (char *)*piVar5;
      if (*pcVar2 == -1) {
        *piVar5 = (int)pcVar2 - (uint)(byte)pcVar2[1];
      }
      iVar3 = *(int *)(puVar6 + -3);
      bVar1 = *(byte *)*piVar5;
      *pbVar4 = ((byte *)*piVar5)[1];
      local_20 = puVar6[-1];
      local_1e = *puVar6;
      local_1c = 0x10;
      local_1a = 1;
      func_0x00081218(&local_20,iVar3 + (uint)bVar1 * 0x20);
      *piVar5 = *piVar5 + 2;
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 6;
    piVar5 = piVar5 + 3;
  } while (iVar7 < 3);
  return;
}

