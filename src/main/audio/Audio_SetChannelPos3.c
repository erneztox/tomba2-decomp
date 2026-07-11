/**
 * @brief Audio channel position variant 3: same as SetChannelPos pattern
 * @note Original: func_80091FB8 at 0x80091FB8
 */
// Audio_SetChannelPos3



void FUN_80091fb8(ushort param_1,short param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  if (iVar1->gte_result == 1) {
    FUN_80095530((int)(short)(param_1 | param_2 << 8),param_3,param_4,1);
  }
  else {
    iVar1->rot_z = param_3;
    iVar1->target_rot_y = param_4;
  }
  return;
}
