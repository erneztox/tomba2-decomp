/**
 * @brief MDEC param setter 2: sets entity->state or entity[0xEB] based on param sign
 * @note Original: func_80087D84 at 0x80087D84
 */
// MDEC_SetParam2



u8 FUN_80087d84(s32 param_1,int param_2,int param_3)

{
  u8 bVar1;
  int iVar2;
  u8 *pbVar3;
  
  iVar2 = (*DAT_800abe4c)();
  if (param_2 < 0) {
    bVar1 = iVar2->state;
  }
  else if (param_2 < (int)(uint)iVar2->state) {
    pbVar3 = (u8 *)(*(int *)(iVar2 + 8) + param_2 * 8);
    if (param_3 < 0) {
      bVar1 = *pbVar3;
    }
    else {
      bVar1 = 0;
      if (param_3 < (int)(uint)*pbVar3) {
        bVar1 = *(u8 *)(*(int *)(pbVar3 + 4) + param_3);
      }
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
