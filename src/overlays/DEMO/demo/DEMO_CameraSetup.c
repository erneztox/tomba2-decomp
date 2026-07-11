// DEMO_CameraSetup (DEMO_CameraSetup) - Demo camera setup

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_CameraSetup(void)

{
  _DAT_1f80017c = _DAT_1f80017c + 1;
  if (DAT_1f800136 == 0) {
    func_0x00059d28();
    func_0x00069b28();
    func_0x00026368();
    func_0x0007a904();
    func_0x00025588();
    func_0x0004fe84();
    func_0x00026c88();
    func_0x00022a80();
    func_0x0006ec44();
    func_0x00050de4();
    func_0x0001cac0();
  }
  if (DAT_1f800136 < 2) {
    func_0x0003f9a8();
  }
  func_0x00077d8c();
  func_0x00075a80();
  return;
}

