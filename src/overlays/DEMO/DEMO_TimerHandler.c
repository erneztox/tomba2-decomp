// DEMO_TimerHandler (DEMO_TimerHandler) - Demo timer handler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_TimerHandler(s32 param_1,s32 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((uint)*(u8 *)(g_OverlayEntity + 0x69) * 0xc + -0x7fef88e4);
  CD_ResetWithOption(0);
  Sys_RegisterEvent1(param_2);
  func_0x00089870(iVar1 + 0x18000,0x20);
  CD_SetupFileLoad(0,1,0xffffffff,0,0);
  func_0x001076b0(param_1);
  return;
}

