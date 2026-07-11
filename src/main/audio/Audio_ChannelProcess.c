/**
 * @brief Audio channel processor: updates channel state, calls voice funcs
 * @note Original: func_80091120 at 0x80091120
 */
// Audio_ChannelProcess



void FUN_80091120(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  iVar1 = *(int *)(iVar3 + 0x90);
  iVar2 = iVar1 - iVar3->rot_x;
  if (iVar2 < 1) {
    if (iVar3->rot_x < iVar1) {
      return;
    }
    do {
      do {
        FUN_80091460((param_1 << 0x10) >> 0x10,(int)param_2);
      } while (*(int *)(iVar3 + 0x90) == 0);
      iVar1 = iVar1 + *(int *)(iVar3 + 0x90);
      iVar2 = iVar1 - iVar3->rot_x;
    } while (iVar1 < iVar3->rot_x);
  }
  else {
    if (0 < iVar3->sprite_y) {
      iVar3->sprite_y = iVar3->sprite_y + -1;
      return;
    }
    if (iVar3->sprite_y != 0) {
      *(int *)(iVar3 + 0x90) = iVar2;
      return;
    }
    iVar3->sprite_y = iVar3->rot_x;
    iVar2 = *(int *)(iVar3 + 0x90) + -1;
  }
  *(int *)(iVar3 + 0x90) = iVar2;
  return;
}
