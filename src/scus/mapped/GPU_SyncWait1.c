/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800186F8 at 0x800186F8
 */
// GPU_SyncWait1



void GPU_SyncWait1(void)

{
  uint uVar1;
  
  GPU_SyncWait1();
  uVar1 = *DAT_8002567c;
  GPU_SyncWait1(DAT_800267b4 + 1,1);
  if (((uVar1 & 0x400000) != 0) && (-1 < (int)(uVar1 ^ *DAT_8002567c))) {
    do {
    } while (((uVar1 ^ *DAT_8002567c) & 0x80000000) == 0);
  }
  DAT_80025688 = DAT_800267b4;
  do {
    DAT_80025684 = *DAT_80025680;
  } while (*DAT_80025680 != *DAT_80025680);
  return;
}
