/**
 * @brief Initializes MDEC decode: gets frame buffer, calls setup
 * @note Original: func_80087EAC at 0x80087EAC
 */
// MDEC_InitDecode



void MDEC_InitDecode(s32 param_1,s32 param_2,s32 param_3)

{
  s32 uVar1;
  
  uVar1 = (*DAT_800abe4c)();
  MDEC_SetFrameBuffer(uVar1,param_2,param_3);
  return;
}
