/**
 * @brief Entity system init: calls InitGlobals2, resets flags at 0x800BF4FA/ECF4A-E
 * @note Original: func_800520E0 at 0x800520E0
 */
// Entity_InitSystem



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_InitSystem(void)

{
  Game_InitEntitySystem();
  _DAT_800bf4fa = 0xffff;
  _g_RenderFlag = 0;
  DAT_800ecf4c = 0;
  DAT_800ecf4d = 0;
  DAT_800ecf4e = 0;
  DAT_800ecf4f = 0;
  MDEC_InitSystem(&DAT_800bf4f8,0x800bf51a);
  MDEC_Config(1);
  MDEC_InitHW();
  return;
}
