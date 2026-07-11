/**
 * @brief Sets GPU register with clamp: param clamped 0-0x3F, writes to DAT_800ac604+0x1AA
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
  *(ushort *)(DAT_800ac604 + 0x1aa) =
       *(ushort *)(DAT_800ac604 + 0x1aa) & 0xc0ff | (ushort)((uVar1 & 0x3f) << 8);
  return uVar1;
}
