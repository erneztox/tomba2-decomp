/**
 * @brief Audio volume set variant 2: same as SetVolume (duplicate)
 * @note Original: func_8008DEF4 at 0x8008DEF4
 */
// Audio_SetVolume2



void FUN_8008def4(short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_800922a0((int)param_1,(int)param_2,(int)-param_3);
  iVar1 = param_2 * 0xb0;
  iVar2 = iVar1 + *(int *)(&DAT_80104c30 + param_1 * 4);
  *(uint *)(iVar2 + 0x98) = *(uint *)(iVar2 + 0x98) | 0x20;
  iVar1 = iVar1 + *(int *)(&DAT_80104c30 + param_1 * 4);
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xffffffef;
  return;
}
