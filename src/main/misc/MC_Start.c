/**
 * @brief Starts memory card access
 * @note Original: func_800976A0 at 0x800976A0
 */
// MC_Start



void MC_Start(void)

{
  *DAT_800ac618 = *DAT_800ac618 & 0xf0ffffff | 0x22000000;
  return;
}
