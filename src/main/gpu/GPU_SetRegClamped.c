/**
 * @brief Sets GPU register with clamp: param clamped 0-0x3F, writes to g_SPU_Regs+0x1AA
 * @note Original: func_80098100 at 0x80098100
 */
// GPU_SetRegClamped



uint FUN_80098100(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_1) && (uVar1 = param_1, 0x3f < (int)param_1)) {
    uVar1 = 0x3f;
  }
  *(u16 *)(g_SPU_Regs + 0x1aa) =
       *(u16 *)(g_SPU_Regs + 0x1aa) & 0xc0ff | (u16)((uVar1 & 0x3f) << 8);
  return uVar1;
}
