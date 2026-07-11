/**
 * @brief Loads level data segments: CD load + 10 sub-loads via CD_LoadSegment with config from overlay header
 * @note Original: func_800754F4 at 0x800754F4
 */
// CD_LoadLevelData



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CD_LoadLevelData(int param_1)

{
  CD_LoadToRAM(param_1,0,0x51800);
  CD_ReadSeek(&DAT_800bed84,param_1 + *(int *)(param_1 + 0x51028),
               param_1 + *(int *)(param_1 + 0x51030));
  CD_ReadSeek(&DAT_800bed82,param_1 + *(int *)(param_1 + 0x5102c),
               param_1 + *(int *)(param_1 + 0x51034));
  CD_LoadSegment(0,param_1 + *(int *)(param_1 + 0x5100c),0xe,(int)_DAT_800bed82);
  CD_LoadSegment(1,param_1 + *(int *)(param_1 + 0x51008),0xe,(int)_DAT_800bed82);
  CD_LoadSegment(2,param_1 + *(int *)(param_1 + 0x51004),0xe,(int)_DAT_800bed82);
  CD_LoadSegment(3,param_1 + *(int *)(param_1 + 0x51000),0xe,(int)_DAT_800bed82);
  CD_LoadSegment(4,param_1 + *(int *)(param_1 + 0x51010),8,(int)_DAT_800bed82);
  CD_LoadSegment(5,param_1 + *(int *)(param_1 + 0x51014),8,(int)_DAT_800bed82);
  CD_LoadSegment(6,param_1 + *(int *)(param_1 + 0x51018),8,(int)_DAT_800bed82);
  CD_LoadSegment(7,param_1 + *(int *)(param_1 + 0x5101c),0xe,(int)_DAT_800bed82);
  CD_LoadSegment(8,param_1 + *(int *)(param_1 + 0x51020),0xe,(int)_DAT_800bed82);
  CD_LoadSegment(9,param_1 + *(int *)(param_1 + 0x51024),0xe,(int)_DAT_800bed82);
  return param_1 + 0x66f4;
}
