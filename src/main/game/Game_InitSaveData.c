/**
 * @brief Game save data init: copies globals 0x800EA0D5-7 to 0x800BF8A4-6
 * @note Original: func_8005082C at 0x8005082C
 */
// Game_InitSaveData



void FUN_8005082c(u8 param_1,u8 param_2,u8 param_3)

{
  s8 cVar1;
  
  DAT_800bf8a6 = DAT_800ea0d7;
  DAT_800bf8a5 = DAT_800ea0d6;
  DAT_800bf8a4 = DAT_800ea0d5;
  cVar1 = DAT_800ea0d4;
  DAT_800ec144 = 1;
  DAT_800ea0d4 = 1;
  DAT_800ea0d5 = param_1;
  DAT_800ea0d6 = param_2;
  DAT_800ea0d7 = param_3;
  DAT_800ec145 = param_1;
  DAT_800ec146 = param_2;
  DAT_800ec147 = param_3;
  DAT_800bf8a7 = cVar1 << 7 | 1;
  return;
}
