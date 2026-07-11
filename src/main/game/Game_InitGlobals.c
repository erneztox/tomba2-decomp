/**
 * @brief Game globals init: clears 0x68 bytes at 0x800BF808, sets defaults
 * @note Original: func_800796DC at 0x800796DC
 */
// Game_InitGlobals



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800796dc(void)

{
  s32 uVar1;
  
  FUN_8009a420(&DAT_800bf808,0,0x68);
  DAT_800bf831 = 0xff;
  DAT_800bf830 = 0xff;
  g_PadFlag = 0;
  _DAT_1f800248 = 0;
  DAT_1f800246 = 0;
  _DAT_1f80024c = 0;
  DAT_1f800250 = 0;
  DAT_1f800259 = 0;
  DAT_1f80025a = 0;
  DAT_1f80025b = 0;
  g_ActionMode = 0;
  g_State230 = 0;
  DAT_800bf80f = 1;
  DAT_1f800136 = 0;
  g_CurrentOverlay = 0;
  _g_ActionInput = 0;
  _g_PlayerEntity = 0;
  _DAT_1f800208 = 0;
  _DAT_1f800280 = 0;
  DAT_1f800231 = 0;
  DAT_1f800251 = 0;
  DAT_1f800232 = 0;
  g_State253 = 0;
  DAT_1f800233 = 0;
  DAT_1f80023b = 0;
  FUN_800782f0(g_GameState,g_LevelId);
  FUN_800508a8();
  uVar1 = 0;
  if ((g_GameMode != 0) && (uVar1 = 0, 1 < g_GameMode - 7)) {
    uVar1 = 0xff;
  }
  FUN_8005082c(uVar1,uVar1,uVar1);
  DAT_800bf9d4 = 0;
  return;
}
