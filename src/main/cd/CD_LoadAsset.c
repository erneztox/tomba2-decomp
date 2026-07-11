/**
 * @brief Loads game asset from CD by ID: uses 0x800ECF58 + 0x800FB170 tables
 * @note Original: func_80045258 at 0x80045258
 */
// CD_LoadAsset



void CD_LoadAsset(int param_1,int param_2)

{
  CD_LoadSectors(*(s32 *)(&g_OT_Data + param_2 * 4),
               DAT_800be100 + (*(uint *)(&DAT_800fb170 + param_1 * 4) >> 0xb),
               *(int *)(&DAT_800fb170 + (param_1 + 1) * 4) - *(uint *)(&DAT_800fb170 + param_1 * 4))
  ;
  return;
}
