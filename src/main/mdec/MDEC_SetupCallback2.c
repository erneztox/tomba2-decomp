/**
 * @brief MDEC callback setup variant: sets callbacks + entity[0x51/0x52/0x53] params
 * @note Original: func_80088908 at 0x80088908
 */
// MDEC_SetupCallback2



bool FUN_80088908(int param_1,char param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_800abe54)();
  if (iVar1 == 0) {
    param_1->anim_id = 1;
    *(undefined1 **)(param_1 + 0x14) = &LAB_800889a0;
    param_1->script_data = FUN_800889f4;
    *(char *)(param_1 + 0x51) = param_2;
    *(undefined1 *)(param_1 + 0x52) = param_3;
    *(bool *)(param_1 + 0x53) = param_2 == *(char *)(param_1 + 0xe4);
  }
  return iVar1 == 0;
}
