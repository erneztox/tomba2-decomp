// SOP_TextureLoad (SOP_TextureLoad) - Loads texture pack from CD-ROM: CD_LoadSectors for sector table + data, then Texture_LoadPack

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_TextureLoad(void)

{
  CD_LoadSectors(&DAT_800ef478,_DAT_800be0f0 + (uint)g_OverlayEntity->sprite_param2,0x800);
  CD_LoadSectors(0x8018a000,_DAT_800be0f8 + (_DAT_800ef478 >> 0xb),_DAT_800ef47c - _DAT_800ef478);
  Texture_LoadPack(0x8018a000,0x1f8000);
  return;
}

