// A09_StateSwitch - Player state switch (8 cases, checks _DAT_800e7fd8)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_StateSwitch(void)

{
  func_0x0002288c(&g_PlayerEntity);
  if (g_PlayerEntity < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080107ac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)g_PlayerEntity * 4 + -0x7fef7060))();
    return;
  }
  if (_DAT_800e7fd8 < 2) {
    func_0x00109398(&g_PlayerEntity);
  }
  func_0x001095b8();
  return;
}

