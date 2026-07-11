// A09_EntitySpawnSequence2 - Entity spawn sequence variant: background tiles

/* WARNING: Control flow encountered bad instruction data */

void A09_EntitySpawnSequence2(int param_1)

{
  u8 bVar1;
  u8 *puVar2;
  char *pcVar3;
  int iVar4;
  u8 *pbVar5;
  int *piVar6;
  int iVar7;
  s16 *puVar8;
  s16 local_20;
  s16 local_1e;
  s16 local_1c;
  s16 local_1a;
  
  if (param_1 == 0) {
    iVar7 = 0;
    do {
      puVar2 = (u8 *)(iVar7 + -0x7fef19f8);
      iVar7 = iVar7 + 1;
      *puVar2 = 0;
    } while (iVar7 < 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar6 = (int *)&DAT_8010e260;
  iVar7 = 0;
  puVar8 = (s16 *)&DAT_8010e26a;
  do {
    pbVar5 = (u8 *)(iVar7 + -0x7fef19f8);
    bVar1 = *pbVar5;
    *pbVar5 = bVar1 - 1;
    if ((int)((uint)(u8)(bVar1 - 1) << 0x18) < 1) {
      pcVar3 = (char *)*piVar6;
      if (*pcVar3 == -1) {
        *piVar6 = (int)pcVar3 - (uint)(u8)pcVar3->flags;
      }
      iVar4 = *(int *)(puVar8 + -3);
      bVar1 = *(u8 *)*piVar6;
      *pbVar5 = ((u8 *)*piVar6)[1];
      local_20 = puVar8[-1];
      local_1e = *puVar8;
      local_1c = 0x10;
      local_1a = 1;
      GPU_LoadImage(&local_20,iVar4 + (uint)bVar1 * 0x20);
      *piVar6 = *piVar6 + 2;
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 6;
    piVar6 = piVar6 + 3;
  } while (iVar7 < 1);
  return;
}

