// A03_RenderDispatch - Render chain: UI_DrawOverlay -> Entity_DrawList -> EntityLoop_Active

void A03_RenderDispatch(void)

{
  UI_DrawOverlay();
  Engine_UpdatePool4();
  func_0x00109eec();
  func_0x00109ce0();
  EntityLoop_NPC();
  func_0x001109d4(0x800f2418);
  EntityLoop_Active();
  return;
}

