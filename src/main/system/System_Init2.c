/**
 * @brief System init variant 2: calls MDEC+GPU+CD init sequence
 * @note Original: func_80050B08 at 0x80050B08
 */
// System_Init2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void System_Init2(void)

{
  uint uVar1;
  u8 local_28->counter1;
  
  MDEC_SetFlag();
  CD_Dispatch0C();
  CD_InitWithRetry();
  GPU_ResetGraph(3);
  GPU_SetQueueDepth(0);
  GPU_SetDisplayMask(1);
  CD_SetCallback(0);
  Engine_ResetState();
  Screen_InitOverlay();
  GTE_InitProjectionMatrix();
  MC_Close();
  CD_CheckTransfer(0x1010);
  CD_Transfer(0x20000);
  CD_SyncCheck(1);
  local_28->type = 0x80;
  CD_SendCmdRetry(0xe,local_28,0);
  Timer_GetCounter(3);
  Audio_SystemInit();
  CD_ResetWithOption(0);
  System_Init();
  Entity_InitSystem();
  Timer_GetCounter(1);
  Entity_ProcessFrame();
  Sys_SetCallback(0,Overlay_LoadFile);
  CD_Dispatch14(&LAB_800506b4);
  uVar1 = (uint)DAT_1f800135;
  _g_OT_Buffer = (1 - uVar1) * 0x14000 + 0x800bfe68;
LAB_80050c6c:
  _g_EntityBuffer = uVar1 * 0x2070 + -0x7ff17f58;
  do {
    GPU_SetupOT(_g_EntityBuffer,0x800);
    do {
      while( true ) {
        while( true ) {
          do {
            _DAT_800e809c = 0;
            _DAT_800bf4f4 = _g_OT_Buffer;
            _g_OT_Buffer = (uint)DAT_1f800135 * 0x14000 + 0x800bfe68 & 0xffffff;
            Engine_UpdateSprites();
            Entity_FrameLoop();
            GPU_DrawSync(0);
            do {
            } while (_DAT_800e809c < g_State235);
            Screen_Clear();
          } while (DAT_1f80019c == 1);
          if (1 < DAT_1f80019c) break;
          if (DAT_1f80019c == 0) {
            GPU_DrawMain(_g_EntityBuffer + 0x2000);
            GPU_PutDrawEnv(_g_EntityBuffer + 0x2014);
            GPU_DrawOTag(_g_EntityBuffer + 0x1ffc);
            DAT_1f800135 = 1 - DAT_1f800135;
            uVar1 = (uint)DAT_1f800135;
            goto LAB_80050c6c;
          }
        }
        if (DAT_1f80019c != 2) break;
        GPU_DrawMain(_g_EntityBuffer + 0x2000);
        DAT_1f80019c = 1;
        DAT_1f800135 = 1 - DAT_1f800135;
        _g_EntityBuffer = (uint)DAT_1f800135 * 0x2070 + -0x7ff17f58;
      }
    } while (DAT_1f80019c != 3);
  } while( true );
}
