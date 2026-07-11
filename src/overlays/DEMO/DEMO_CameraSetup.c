// DEMO_CameraSetup (DEMO_CameraSetup) - Demo camera setup

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_CameraSetup(void)

{
  _g_InputPressed = _g_InputPressed + 1;
  if (g_PauseFlag == 0) {
    Entity_InputUpdate();
    Entity_UpdateBGList();
    Entity_UpdateList8();
    Entity_UpdateAll();
    Engine_PoolUpdate();
    UI_PanelDispatch();
    Entity_UpdateChildren();
    Engine_DispatchLevel();
    func_0x0006ec44();
    func_0x00050de4();
    func_0x0001cac0();
  }
  if (g_PauseFlag < 2) {
    Engine_ExecuteGameLoop();
  }
  Audio_SFXSequence();
  Audio_SeqPlay2();
  return;
}

