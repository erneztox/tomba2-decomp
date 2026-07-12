/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018E8C at 0x80018E8C
 */
// GPU_Setup15



undefined4 GPU_Setup15(void)

{
  undefined4 uVar1;
  
  if (DAT_800256ec == 0) {
    GPU_Setup15(&DAT_80025724);
    DAT_800256ec = 1;
    *DAT_8002677c = DAT_8002571e;
    *DAT_80026780 = DAT_80025720;
    GPU_Setup15();
    uVar1 = GPU_Setup15();
    return uVar1;
  }
  return 0;
}
