/**
 * @brief Main update: runs all entity loops (active, bg, player, obj, npc) + FX update
 * @note Original: func_8003FA44 at 0x8003FA44
 */
// Engine_UpdateAll



void FUN_8003fa44(void)

{
  FUN_8004fd30();
  FUN_80025d98();
  FUN_8003bf00();
  FUN_8003eec0();
  FUN_8003b588();
  FUN_8003bb50();
  FUN_8003bcf4();
  FUN_8003c048();
  FUN_8003f024();
  return;
}
