// DEMO_EntitySpawn (DEMO_EntitySpawn) - Demo entity spawning

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_EntitySpawn(void)

{
  _DAT_1f80017c = _DAT_1f80017c + 1;
  if (DAT_1f800136 == 0) {
    func_0x00026368();
    func_0x0007a904();
    func_0x00059d28();
    func_0x00025588();
    func_0x0004fe84();
    func_0x0006ec44();
    func_0x00050de4();
  }
  if (DAT_1f800136 < 2) {
    func_0x0010b328();
  }
  func_0x00077d8c();
  func_0x00075a80();
  return;
}

