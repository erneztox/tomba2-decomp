/**
 * @brief Math atan2 variant 3: uses table at 0x800A6490, different quadrant handling
 * @note Original: func_80084D10 at 0x80084D10
 */
// Math_Atan2_3



int FUN_80084d10(uint param_1,int param_2)

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
  sVar1 = *(short *)(param_2 + 6);
  sVar2 = *(short *)(param_2 + 8);
  sVar3 = *(short *)(param_2 + 10);
  *(short *)(param_2 + 6) = (short)(iVar5 * sVar1 - iVar4 * *(short *)(param_2 + 0xc) >> 0xc);
  *(short *)(param_2 + 8) = (short)(iVar5 * sVar2 - iVar4 * param_2->anim_timer >> 0xc);
  *(short *)(param_2 + 10) = (short)(iVar5 * sVar3 - iVar4 * *(short *)(param_2 + 0x10) >> 0xc);
  *(short *)(param_2 + 0xc) = (short)(iVar4 * sVar1 + iVar5 * *(short *)(param_2 + 0xc) >> 0xc);
  param_2->anim_timer = (short)(iVar4 * sVar2 + iVar5 * param_2->anim_timer >> 0xc);
  *(short *)(param_2 + 0x10) = (short)(iVar4 * sVar3 + iVar5 * *(short *)(param_2 + 0x10) >> 0xc);
  return param_2;
}
