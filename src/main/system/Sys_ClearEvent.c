/**
 * @brief Clears system event: resets event handler state
 * @note Original: func_80052078 at 0x80052078
 */
// Sys_ClearEvent



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80052078(undefined4 param_1)

{
  undefined2 *puVar1;
  
  FUN_800450bc(_DAT_1f800138 + 6,param_1);
  puVar1 = _DAT_1f800138;
  *_DAT_1f800138 = 3;
  *(undefined1 *)((int)puVar1 + 0x6f) = 0;
  FUN_80080890();
  FUN_80080870(*(undefined4 *)(_DAT_1f800138 + 2));
  FUN_800808a0();
  FUN_80080880(0xff000000);
  return;
}
