/**
 * @brief Clears all 3 menu item slots by calling Game_StateLoad with modes 0,1,2
 * @note Original: func_80036AE8 at 0x80036AE8
 */
// Menu_ClearItems



void Menu_ClearItems(s32 param_1)

{
  Game_StateLoad(param_1,0);
  Game_StateLoad(param_1,1);
  Game_StateLoad(param_1,2);
  return;
}
