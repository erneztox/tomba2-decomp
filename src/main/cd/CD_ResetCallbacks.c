/**
 * @brief Resets CD event/error callbacks and re-inits drive
 * @note Original: func_8008B28C at 0x8008B28C
 */
// CD_ResetCallbacks



void FUN_8008b28c(void)

{
  DAT_800abfc0 = 0;
  DAT_800abfbc = 0;
  DAT_800abfcc = 0;
  DAT_800abfc8 = 0;
  FUN_80085b20();
  FUN_80085b50(2,FUN_8008b818);
  return;
}
