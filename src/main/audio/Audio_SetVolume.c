/**
 * @brief Audio volume setter: calls SetChannelParam(-vol), toggles flags 0x20/0x10
 * @note Original: func_8008DE74 at 0x8008DE74
 */
// Audio_SetVolume



void FUN_8008de74(short param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_800922a0((int)param_1,0,(int)-param_2,param_3);
  iVar1 = *(int *)(&DAT_80104c30 + param_1 * 4);
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 0x20;
  iVar1 = *(int *)(&DAT_80104c30 + param_1 * 4);
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xffffffef;
  return;
}
