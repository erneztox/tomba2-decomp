/**
 * @brief Main update: runs all entity loops (active, bg, player, obj, npc) + FX update
 * @note Original: func_8003FA44 at 0x8003FA44
 */
// Engine_UpdateAll



void Engine_UpdateAll(void)

{
  UI_DrawOverlay();
  Engine_UpdatePool4();
  EntityLoop_Background_Draw();
  EntityLoop_Background();
  EntityLoop_Player();
  EntityLoop_Object();
  EntityLoop_NPC();
  EntityLoop_Active();
  Engine_Render3DSprites();
  return;
}
