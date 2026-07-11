/**
 * @brief CD register getter: returns *g_CD_Status
 * @note Original: func_8009CC14 at 0x8009CC14
 */
// CD_GetReg



s32 CD_GetReg(void)

{
  return *g_CD_Status;
}
