/**
 * @brief Initializes memory card subsystem
 * @note Original: func_80097678 at 0x80097678
 */
// MC_Init



void FUN_80097678(void)

{
  *DAT_800ac618 = *DAT_800ac618 & 0xf0ffffff | 0x20000000;
  return;
}
