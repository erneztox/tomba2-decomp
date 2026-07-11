// FUN_08012a10

/* WARNING: Control flow encountered bad instruction data */

void FUN_08012a10(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  if (param_1 == 0) {
    iVar7 = 4;
    puVar2 = &DAT_801278d0;
    do {
      *puVar2 = 0;
      iVar7 = iVar7 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar6 = (int *)&DAT_8011937c;
  iVar7 = 0;
  puVar8 = (undefined2 *)&DAT_80119386;
  do {
    pbVar5 = (byte *)(iVar7 + -0x7fed8734);
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
      local_20 = puVar8[-1];
      local_1e = *puVar8;
      local_1c = 0x10;
      local_1a = 1;
      func_0x00081218(&local_20,iVar4 + (uint)bVar1 * 0x20);
      *piVar6 = *piVar6 + 2;
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 6;
    piVar6 = piVar6 + 3;
  } while (iVar7 < 5);
  return;
}

