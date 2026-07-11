/**
 * @brief MDEC decode init variant 2: sets frame buffer, calls callback if ready
 * @note Original: func_80088248 at 0x80088248
 */
// MDEC_InitDecode2



undefined4 FUN_80088248(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_1->flags != 0) {
      return 0;
    }
    iVar1 = (*DAT_800abe54)();
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x49) = 4;
      *(undefined1 *)((int)param_1 + 0x46) = 1;
      param_1->behavior_state = (int)FUN_8008831c;
      param_1->action_state = (int)&LAB_800883c4;
      iVar1 = (param_2 + 3 >> 2) * 4;
      *param_1 = iVar1;
      *(undefined1 *)((int)param_1 + 0x47) = 0;
      iVar1 = iVar1 + ((int)(*(byte *)((int)param_1 + 0xe3) + 1) >> 1) * 4;
      param_1->flags = iVar1;
      param_1->kind = iVar1 + ((uint)*(byte *)((int)param_1 + 0xe9) * 5 + 3 & 0xffc);
      return 1;
    }
  }
  return 0;
}
