// SOP_TileAnimationUpdate (SOP_TileAnimationUpdate) - Tile animation update: cycles tile textures based on timer, updates VRAM

void SOP_TileAnimationUpdate(void)

{
  u8 bVar1;
  char *pcVar2;
  int iVar3;
  u8 *pbVar4;
  int *piVar5;
  s16 *puVar6;
  int iVar7;
  s16 local_20;
  s16 local_1e;
  s16 local_1c;
  s16 local_1a;
  
  piVar5 = (int *)&DAT_8010d2fc;
  iVar7 = 0;
  puVar6 = (s16 *)&DAT_8010d306;
  do {
    pbVar4 = (u8 *)(iVar7 + -0x7fef2c70);
    bVar1 = *pbVar4;
    *pbVar4 = bVar1 - 1;
    if ((int)((uint)(u8)(bVar1 - 1) << 0x18) < 1) {
      pcVar2 = (char *)*piVar5;
      if (*pcVar2 == -1) {
        *piVar5 = (int)pcVar2 - (uint)(u8)pcVar2->flags;
      }
      iVar3 = *(int *)(puVar6 + -3);
      bVar1 = *(u8 *)*piVar5;
      *pbVar4 = ((u8 *)*piVar5)[1];
      local_20 = puVar6[-1];
      local_1e = *puVar6;
      local_1c = 0x10;
      local_1a = 1;
      GPU_LoadImage(&local_20,iVar3 + (uint)bVar1 * 0x20);
      *piVar5 = *piVar5 + 2;
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 6;
    piVar5 = piVar5 + 3;
  } while (iVar7 < 3);
  return;
}

