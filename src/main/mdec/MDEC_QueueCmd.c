/**
 * @brief MDEC command queue: appends param_2 words to MDEC cmd buffer at param_1
 * @note Original: func_8008DA2C at 0x8008DA2C
 */
// MDEC_QueueCmd



void MDEC_QueueCmd(s32 *param_1,s32 *param_2,uint param_3)

{
  s32 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3);
  }
  return;
}
