/**
 * @brief MDEC callback chain: iterates ptrs at 0x800ABEC0, calls each in sequence
 * @note Original: func_80086DB4 at 0x80086DB4
 */
// MDEC_CallbackChain



void FUN_80086db4(int param_1)

{
  void **ppuVar1;
  int iVar2;
  
  ppuVar1 = &PTR_LAB_800abec0 + DAT_800abe7c;
  DAT_800abe7c = DAT_800abe7c + 1;
  iVar2 = (*(code *)*ppuVar1)();
  if (iVar2 < 0) {
    (*DAT_800abe38)();
  }
  else {
    if ((DAT_800abe7c != 0) && ((DAT_800abe7c != 3 || (**(char **)(param_1 + 0x3c) != -0x80)))) {
      FUN_80089620(0x3c);
      iVar2 = FUN_8008732c();
      if (iVar2 == 0) {
        (*DAT_800abe38)(0xfffffffd);
      }
    }
    if (4 < DAT_800abe7c) {
      DAT_800abe7c = DAT_800abe7c + -1;
    }
  }
  return;
}
