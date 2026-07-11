/**
 * @brief Waits for vertical sync: spin-loops until vblank interrupt
 * @note Original: func_80051FB4 at 0x80051FB4
 */
// GPU_WaitVSync



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051fb4(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = _DAT_1f800138;
  *(undefined1 *)(_DAT_1f800138 + 0x36) = 0;
  puVar2 = _DAT_1f800138;
  *puVar1 = 0;
  *(undefined1 *)((int)puVar2 + 0x6f) = 0;
  FUN_80080890();
  FUN_80080870(*(undefined4 *)(_DAT_1f800138 + 2));
  FUN_800808a0();
  FUN_80080880(0xff000000);
  return;
}
