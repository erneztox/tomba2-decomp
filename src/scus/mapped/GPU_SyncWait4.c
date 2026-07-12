/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001874C at 0x8001874C
 */
// GPU_SyncWait4



void GPU_SyncWait4(void)

{
  uint in_v0;
  uint *in_v1;
  uint unaff_s0;
  
  if (-1 < (int)(unaff_s0 ^ in_v0)) {
    do {
    } while (((unaff_s0 ^ *in_v1) & 0x80000000) == 0);
  }
  DAT_80025688 = DAT_800267b4;
  do {
    DAT_80025684 = *DAT_80025680;
  } while (*DAT_80025680 != *DAT_80025680);
  return;
}
