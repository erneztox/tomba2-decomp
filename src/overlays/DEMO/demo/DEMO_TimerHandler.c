// DEMO_TimerHandler (DEMO_TimerHandler) - Demo timer handler

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_TimerHandler(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((uint)*(byte *)(_DAT_1f800138 + 0x69) * 0xc + -0x7fef88e4);
  func_0x0009c620(0);
  func_0x0009c8bc(param_2);
  func_0x00089870(iVar1 + 0x18000,0x20);
  func_0x0008ceb0(0,1,0xffffffff,0,0);
  func_0x001076b0(param_1);
  return;
}

