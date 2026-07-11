// DEMO_EntitySpawn (DEMO_EntitySpawn) - Demo entity spawning

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_EntitySpawn(void)

{
  _g_InputPressed = _g_InputPressed + 1;
  if (g_PauseFlag == 0) {
    Entity_UpdateList8();
    Entity_UpdateAll();
    Entity_InputUpdate();
    Engine_PoolUpdate();
    UI_PanelDispatch();
    func_0x0006ec44();
    func_0x00050de4();
  }
  if (g_PauseFlag < 2) {
    func_0x0010b328();
  }
  Audio_SFXSequence();
  Audio_SeqPlay2();
  return;
}

