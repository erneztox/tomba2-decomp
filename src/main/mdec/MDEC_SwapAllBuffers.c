/**
 * @brief MDEC buffer swap loop: iterates 0xF0-stride buffers, swaps cmds until all done
 * @note Original: func_80088CC8 at 0x80088CC8
 */
// MDEC_SwapAllBuffers



void MDEC_SwapAllBuffers(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = DAT_800abe78 * 0xf0 + -0x7fefdb00;
    if (param_1 != -9) {
      if (param_1 == 0) {
        *(s32 *)(&DAT_800abe90 + DAT_800abe78 * 4) = 0;
      }
      else {
        MDEC_DecodeStep(iVar1);
        MDEC_SwapCommand(iVar1);
      }
    }
    DAT_800abe7c = 0;
    *(s16 *)(DAT_800abee0 + 10) = 0;
    DAT_800abe78 = DAT_800abe78 + 1;
    iVar1 = 1;
    if (DAT_800abe78 <= DAT_800abe8c) {
      iVar1 = MDEC_DMAStart2(DAT_800abe78 * 0xf0 + -0x7fefdb00);
    }
    param_1 = 0xffff;
  } while (iVar1 == 0);
  return;
}
