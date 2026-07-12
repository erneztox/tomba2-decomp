/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001876C at 0x8001876C
 */
// GPU_SyncWait6



void GPU_SyncWait6(void)

{
  DAT_80025688 = DAT_800267b4;
  do {
    DAT_80025684 = *DAT_80025680;
  } while (*DAT_80025680 != *DAT_80025680);
  return;
}
