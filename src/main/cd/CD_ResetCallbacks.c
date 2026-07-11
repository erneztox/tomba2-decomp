/**
 * @brief Resets CD event/error callbacks and re-inits drive
 * @note Original: func_8008B28C at 0x8008B28C
 */
// CD_ResetCallbacks



void CD_ResetCallbacks(void)

{
  DAT_800abfc0 = 0;
  DAT_800abfbc = 0;
  DAT_800abfcc = 0;
  DAT_800abfc8 = 0;
  CD_Dispatch0C();
  CD_Dispatch08(2,CD_PollSync);
  return;
}
