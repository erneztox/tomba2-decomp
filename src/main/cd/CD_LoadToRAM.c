/**
 * @brief Loads CD sector data to RAM address from 0x800BE108 + offset
 * @note Original: func_800753AC at 0x800753AC
 */
// CD_LoadToRAM



void CD_LoadToRAM(s32 param_1,int param_2)

{
  CD_LoadSectors(param_1,DAT_800be108 + param_2);
  return;
}
