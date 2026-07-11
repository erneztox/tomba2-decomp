/**
 * @brief Loads game asset from CD by ID: uses 0x800ECF58 + 0x800FB170 tables
 * @note Original: func_80045258 at 0x80045258
 */
// CD_LoadAsset



void FUN_80045258(int param_1,int param_2)

{
  FUN_8001dc40(*(undefined4 *)(&DAT_800ecf58 + param_2 * 4),
               DAT_800be100 + (*(uint *)(&DAT_800fb170 + param_1 * 4) >> 0xb),
               *(int *)(&DAT_800fb170 + (param_1 + 1) * 4) - *(uint *)(&DAT_800fb170 + param_1 * 4))
  ;
  return;
}
