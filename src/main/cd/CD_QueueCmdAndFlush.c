/**
 * @brief CD cmd queue + flush: same as QueueCmd but forces flush at end
 * @note Original: func_8009AF98 at 0x8009AF98
 */
// CD_QueueCmdAndFlush



void CD_QueueCmdAndFlush(u8 param_1)

{
  if (param_1 == 9) {
    do {
      CD_QueueCmd(0x20);
    } while ((DAT_800acf04 & 7) != 0);
  }
  else {
    if (param_1 == 10) {
      CD_QueueCmd(0xd);
      DAT_800acf04 = 0;
    }
    else if (((int)(char)(&DAT_800ace75)[param_1] & 0x97U) != 0) {
      DAT_800acf04 = DAT_800acf04 + 1;
    }
    if (0x1f < DAT_800acf08) {
      BIOS_Syscall_B0_800808E0(1,0x80105ef8);
      DAT_800acf08 = 0;
    }
    *(u8 *)(DAT_800acf08 + -0x7fefa108) = param_1;
    DAT_800acf08 = DAT_800acf08 + 1;
  }
  if (0 < DAT_800acf08) {
    BIOS_Syscall_B0_800808E0(1,0x80105ef8);
    DAT_800acf08 = 0;
  }
  return;
}
