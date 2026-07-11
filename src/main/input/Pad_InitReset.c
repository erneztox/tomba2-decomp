/**
 * @brief Controller init/reset: resets pad state, waits for acknowledge from hardware
 * @note Original: func_8001CF2C at 0x8001CF2C
 */
// Pad_InitReset



void FUN_8001cf2c(void)

{
  int iVar1;
  
  FUN_80052010(2);
  DAT_800be0e4 = 0;
  FUN_8001cf00(0);
  do {
    iVar1 = FUN_80089e1c(9,0,0);
  } while (iVar1 == 0);
  return;
}
