/**
 * @brief GPU/SPU command: sets DAT_800ac598 flag, modifies SPU register at 0x800AC604+0x1AA
 * @note Original: func_80098150 at 0x80098150
 */
// GPU_SPU_Cmd



s32 FUN_80098150(int param_1)

{
  u16 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    DAT_800ac598 = 0;
    uVar1 = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xff7f;
  }
  else {
    if (param_1 != 1) {
      return DAT_800ac598;
    }
    if ((DAT_800ac59c == 1) || (iVar2 = FUN_800982a0(DAT_800ac5a0), iVar2 == 0)) {
      uVar1 = *(u16 *)(g_SPU_Regs + 0x1aa) | 0x80;
      DAT_800ac598 = 1;
    }
    else {
      DAT_800ac598 = 0;
      uVar1 = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xff7f;
    }
  }
  *(u16 *)(g_SPU_Regs + 0x1aa) = uVar1;
  return DAT_800ac598;
}
