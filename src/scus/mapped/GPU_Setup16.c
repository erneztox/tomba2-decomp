/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018E90 at 0x80018E90
 */
// GPU_Setup16



undefined4 GPU_Setup16(void)

{
  undefined4 uVar1;
  
  if (DAT_800256ec == 0) {
    GPU_Setup16(&DAT_80025724);
    DAT_800256ec = 1;
    *DAT_8002677c = DAT_8002571e;
    *DAT_80026780 = DAT_80025720;
    GPU_Setup16();
    uVar1 = GPU_Setup16();
    return uVar1;
  }
  return 0;
}
