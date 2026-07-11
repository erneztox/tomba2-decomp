/**
 * @brief CD command queue: appends u8 to buffer at DAT_800acf08, flushes on full, special cmds 9/10
 * @note Original: func_8009AE60 at 0x8009AE60
 */
// CD_QueueCmd



void CD_QueueCmd(u8 param_1)

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
  return;
}
