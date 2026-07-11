/**
 * @brief Audio channel position: sets channel[0x58/0x5A] or calls active setter via FUN_80095530
 * @note Original: func_80091EC0 at 0x80091EC0
 */
// Audio_SetChannelPos



void FUN_80091ec0(ushort param_1,short param_2,undefined2 param_3,undefined2 param_4)

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
