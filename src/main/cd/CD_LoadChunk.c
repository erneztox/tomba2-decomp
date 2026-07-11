/**
 * @brief Loads data chunk from CD: reads sector table at 0x800BE118 by chunk ID
 * @note Original: func_80045080 at 0x80045080
 */
// CD_LoadChunk



void CD_LoadChunk(s32 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (param_2 & 0xff) * 8;
  CD_LoadSectors(param_1,*(s32 *)(&DAT_800be118 + iVar1),*(s32 *)(&DAT_800be11c + iVar1)
              );
  return;
}
