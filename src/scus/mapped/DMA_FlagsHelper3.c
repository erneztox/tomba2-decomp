/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015E40 at 0x80015E40
 */
// DMA_FlagsHelper3



uint DMA_FlagsHelper3(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_s2;
  int unaff_s4;
  
  if (param_1 == 0) {
    iVar1 = DMA_FlagsHelper3();
    **(undefined4 **)(iVar1 + 0x5620) = unaff_s2;
    *DAT_80025624 = unaff_s4 << 0x10 | 0x10;
    *DAT_80025628 = 0x1000200;
    return 0;
  }
  uVar2 = DAT_8002563c - DAT_80025640 & 0x3f;
  if (uVar2 != 0) {
    DMA_FlagsHelper3();
  }
  if ((((*DAT_80025628 & 0x1000000) != 0) || ((*DAT_8002561c & 0x4000000) == 0)) && (uVar2 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
