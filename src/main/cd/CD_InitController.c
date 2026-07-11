/**
 * @brief CD controller init: sets flag, restores saved state, returns status
 * @note Original: func_80086144 at 0x80086144
 */
// CD_InitController



s16 * FUN_80086144(void)

{
  s16 *puVar1;
  
  puVar1 = &DAT_800aad18;
  if (DAT_800aad18 == 0) {
    FUN_80086220(&DAT_800aad50);
    DAT_800aad18 = 1;
    *DAT_800abda8 = DAT_800aad4a;
    *DAT_800abdac = DAT_800aad4c;
    FUN_800808a0();
  }
  else {
    puVar1 = (s16 *)0x0;
  }
  return puVar1;
}
