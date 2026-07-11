/**
 * @brief Adjusts CD command u8: if table[param_1]&1, adds 0x20 to command
 * @note Original: func_8009A3A4 at 0x8009A3A4
 */
// CD_AdjustCmdByte



int CD_AdjustCmdByte(u8 param_1)

{
  if (((&DAT_800ace75)[param_1] & 1) != 0) {
    param_1 = param_1 + 0x20;
  }
  return (int)(char)param_1;
}
