/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001875C at 0x8001875C
 */
// GPU_SyncWait5



void GPU_SyncWait5(uint param_1)

{
  uint in_v0;
  uint *in_v1;
  uint unaff_s0;
  
  while (((unaff_s0 ^ in_v0) & param_1) == 0) {
    in_v0 = *in_v1;
  }
  DAT_80025688 = DAT_800267b4;
  do {
    DAT_80025684 = *DAT_80025680;
  } while (*DAT_80025680 != *DAT_80025680);
  return;
}
