/**
 * @brief Sets system event: writes event code to hardware register
 * @note Original: func_80052010 at 0x80052010
 */
// Sys_SetEvent



void FUN_80052010(int param_1)

{
  param_1 = param_1 * 0x70;
  if (*(s16 *)(&DAT_801fe000 + param_1) != 0) {
    *(s16 *)(&DAT_801fe000 + param_1) = 0;
    (&DAT_801fe06c)[param_1] = 0;
    (&DAT_801fe06f)[param_1] = 0;
    FUN_80080890();
    FUN_80080870(*(s32 *)(&DAT_801fe004 + param_1));
    FUN_800808a0();
  }
  return;
}
