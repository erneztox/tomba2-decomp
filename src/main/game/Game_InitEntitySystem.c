/**
 * @brief Initializes entity globals at 0x800FB160: sets default values (1,0,7,0,9,0,0)
 * @note Original: func_8007B328 at 0x8007B328
 */
// Game_InitEntitySystem



void Game_InitEntitySystem(void)

{
  Mem_Set(0x800fb160,0,8);
  DAT_800fb161 = 1;
  DAT_800fb164 = 7;
  DAT_800fb162 = 0;
  DAT_800fb163 = 0;
  DAT_800fb165 = 9;
  DAT_800fb166 = 0;
  DAT_800fb167 = 0;
  Pad_InitConfig(0);
  return;
}
