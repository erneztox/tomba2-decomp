/**
 * @brief Rotates vector around Y axis using GTE
 * @note Original address: 0x80085050
 */

short * GTE_RotateVectorY(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1 < 0) {
    iVar5 = *(int *)(&DAT_800a6490 + (-param_1 & 0xfff) * 4);
    iVar4 = -(int)(short)iVar5;
  }
  else {
    iVar5 = *(int *)(&DAT_800a6490 + (param_1 & 0xfff) * 4);
    iVar4 = (int)(short)iVar5;
  }
  iVar5 = iVar5 >> 0x10;
  sVar1 = *param_2;
  sVar2 = param_2[1];
  sVar3 = param_2[2];
  *param_2 = (short)(iVar5 * sVar1 - iVar4 * param_2[3] >> 0xc);
  param_2[1] = (short)(iVar5 * sVar2 - iVar4 * param_2[4] >> 0xc);
  param_2[2] = (short)(iVar5 * sVar3 - iVar4 * param_2[5] >> 0xc);
  param_2[3] = (short)(iVar4 * sVar1 + iVar5 * param_2[3] >> 0xc);
  param_2[4] = (short)(iVar4 * sVar2 + iVar5 * param_2[4] >> 0xc);
  param_2[5] = (short)(iVar4 * sVar3 + iVar5 * param_2[5] >> 0xc);
  return param_2;
}

