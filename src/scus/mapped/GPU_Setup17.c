/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018E9C at 0x80018E9C
 */
// GPU_Setup17



undefined4 GPU_Setup17(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int unaff_s0;
  
  if (*(short *)(unaff_s0 + 0x56ec) == 0) {
    GPU_Setup17(unaff_s0 + 0x5724);
    puVar1 = DAT_8002677c;
    *(short *)(unaff_s0 + 0x56ec) = 1;
    *puVar1 = *(undefined2 *)(unaff_s0 + 0x571e);
    *DAT_80026780 = *(undefined4 *)(unaff_s0 + 0x5720);
    GPU_Setup17();
    uVar2 = GPU_Setup17();
    return uVar2;
  }
  return 0;
}
