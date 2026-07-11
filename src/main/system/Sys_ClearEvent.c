/**
 * @brief Clears system event: resets event handler state
 * @note Original: func_80052078 at 0x80052078
 */
// Sys_ClearEvent



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80052078(s32 param_1)

{
  s16 *puVar1;
  
  FUN_800450bc(_g_CurrentEntity + 6,param_1);
  puVar1 = _g_CurrentEntity;
  *_g_CurrentEntity = 3;
  *(u8 *)((int)puVar1 + 0x6f) = 0;
  FUN_80080890();
  FUN_80080870(*(s32 *)(_g_CurrentEntity + 2));
  FUN_800808a0();
  FUN_80080880(0xff000000);
  return;
}
