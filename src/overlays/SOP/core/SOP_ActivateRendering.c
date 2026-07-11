// SOP_ActivateRendering (SOP_ActivateRendering) - Activates entity loop and rendering: calls EntityLoop_Active and screen setup

void SOP_ActivateRendering(void)

{
  func_0x00109fe0(0x800f2418);
  EntityLoop_Active();
  if (g_GameSubState != '\x05') {
    func_0x0010c26c(0x800ed018);
  }
  return;
}

