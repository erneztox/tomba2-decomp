/**
 * @brief Loads CD sector data to RAM address from 0x800BE108 + offset
 * @note Original: func_800753AC at 0x800753AC
 */
// CD_LoadToRAM



void FUN_800753ac(s32 param_1,int param_2)

{
  FUN_8001dc40(param_1,DAT_800be108 + param_2);
  return;
}
