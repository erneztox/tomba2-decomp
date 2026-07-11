/**
 * @brief Texture VRAM upload: DMA transfer from 0x80157000 to VRAM, calls Texture_Process
 * @note Original: func_8004514C at 0x8004514C
 */
// Texture_UploadVRAM



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Texture_UploadVRAM(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  CD_LoadSectors(0x80157000,DAT_800be110,DAT_800be114);
  Texture_Process();
  iVar4 = _DAT_800ef484 - _DAT_800ef480;
  CD_LoadSectors(0x80158000,DAT_800be100 + (_DAT_800ef480 >> 0xb),iVar4);
  iVar1 = _DAT_800ef488;
  puVar3 = (uint *)&DAT_800ef48c;
  iVar2 = 0;
  _DAT_1f800228 = iVar4 + -0x7fea8000;
  _DAT_800ed014 = _DAT_1f800228;
  if (0 < _DAT_800ef488) {
    do {
      iVar2 = iVar2 + 1;
      *(uint *)(&g_OT_Data + (*puVar3 >> 0x18) * 4) = (*puVar3 & 0xffffff) + 0x80158000;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  _DAT_1f80022c = CD_LoadLevelData(0x80182000);
  g_DMAFlag = 1;
  GPU_WaitVSync();
  return;
}
