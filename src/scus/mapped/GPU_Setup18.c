/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018EBC at 0x80018EBC
 */
// GPU_Setup18



void GPU_Setup18(void)

{
  undefined2 *puVar1;
  undefined2 *unaff_s0;
  
  puVar1 = DAT_8002677c;
  *unaff_s0 = 1;
  *puVar1 = unaff_s0[0x19];
  *DAT_80026780 = *(undefined4 *)(unaff_s0 + 0x1a);
  GPU_Setup18();
  GPU_Setup18();
  return;
}
