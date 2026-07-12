/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015A90 at 0x80015A90
 */
// DMA_LoopWait



uint DMA_LoopWait(void)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((*DAT_80025628 & 0x1000000) == 0) {
    DAT_80025648 = DMA_LoopWait(0);
    if (DAT_8002563c != DAT_80025640) {
      uVar1 = *DAT_80025628;
      while ((uVar1 & 0x1000000) == 0) {
        if (((DAT_80025640 + 1 & 0x3f) == DAT_8002563c) && (DAT_80025520 == (code *)0x0)) {
          DMA_LoopWait(2,0);
        }
        uVar1 = *DAT_8002561c;
        while ((uVar1 & 0x4000000) == 0) {
          uVar1 = *DAT_8002561c;
        }
        (**(code **)(&DAT_800385f8 + DAT_80025640 * 0x60))
                  (*(undefined4 *)(&DAT_800385fc + DAT_80025640 * 0x60),
                   *(undefined4 *)(DAT_80025640 * 0x60 + -0x7ffc7a00));
        DAT_80025640 = DAT_80025640 + 1 & 0x3f;
        if (DAT_8002563c == DAT_80025640) break;
        uVar1 = *DAT_80025628;
      }
    }
    DMA_LoopWait(DAT_80025648);
    if ((((DAT_8002563c == DAT_80025640) && ((*DAT_80025628 & 0x1000000) == 0)) &&
        (DAT_8002551c != 0)) && (DAT_80025520 != (code *)0x0)) {
      DAT_8002551c = 0;
      (*DAT_80025520)();
    }
    uVar1 = DAT_8002563c - DAT_80025640 & 0x3f;
  }
  return uVar1;
}
