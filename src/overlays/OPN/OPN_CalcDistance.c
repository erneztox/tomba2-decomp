// OPN_CalcDistance (OPN_CalcDistance) - Distance/angle calculation: atan2 between 2 points, returns dist < 0x50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 OPN_CalcDistance(int param_1,int param_2)

{
  short sVar1;
  s16 uVar2;
  s32 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2->event_id * 8;
  iVar5 = (int)(((uint)*(u16 *)(iVar6 + -0x7fe72c6c) - (uint)_g_GTE_Matrix12) * 0x10000) >> 0x10;
  iVar4 = (int)(((uint)*(u16 *)(iVar6 + -0x7fe72c70) - (uint)_g_GTE_Matrix01) * 0x10000) >> 0x10;
  sVar1 = Math_Atan2(iVar5,iVar4);
  *(short *)(param_2 + 0x66) = sVar1 + -0x400;
  iVar5 = iVar4 * iVar4 + iVar5 * iVar5;
  uVar3 = Math_SqrtGTE(iVar5);
  iVar4 = (int)(((uint)*(u16 *)(iVar6 + -0x7fe72c6e) - (uint)_g_GTE_Matrix10) * 0x10000) >> 0x10;
  uVar2 = Math_Atan2(iVar4,uVar3);
  param_2->target_angle = uVar2;
  *(s16 *)(param_2 + 0x7a) = *(s16 *)(iVar6 + -0x7fe72c6a);
  iVar4 = Math_SqrtGTE(iVar5 + iVar4 * 2);
  *(int *)(param_1 + 0x5c) = iVar4;
  return iVar4 < 0x50;
}

