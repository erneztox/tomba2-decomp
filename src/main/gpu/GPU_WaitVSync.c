/**
 * @brief Waits for vertical sync: spin-loops until vblank interrupt
 * @note Original: func_80051FB4 at 0x80051FB4
 */
// GPU_WaitVSync



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051fb4(void)

{
  s16 *puVar1;
  s16 *puVar2;
  
  puVar1 = _g_CurrentEntity;
  *(u8 *)(_g_CurrentEntity + 0x36) = 0;
  puVar2 = _g_CurrentEntity;
  *puVar1 = 0;
  *(u8 *)((int)puVar2 + 0x6f) = 0;
  FUN_80080890();
  FUN_80080870(*(s32 *)(_g_CurrentEntity + 2));
  FUN_800808a0();
  FUN_80080880(0xff000000);
  return;
}
