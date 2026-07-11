/**
 * @brief Sets entity sub-state to 0x22 or 0x26 based on bit 15 of param
 * @note Original: func_800440E4 at 0x800440E4
 */
// Entity_SetSubState22



void FUN_800440e4(int param_1,uint param_2,short param_3)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x164) == '\0') {
    FUN_80054dac(param_1,param_2 & 0x7fff,(int)param_3);
    uVar1 = 0x26;
    if ((param_2 & 0x8000) == 0) {
      uVar1 = 0x22;
    }
    *(undefined1 *)(param_1 + 5) = uVar1;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}
