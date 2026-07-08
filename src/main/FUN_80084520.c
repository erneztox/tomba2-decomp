
uint * FUN_80084520(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  *param_1 = (short)*param_1 * iVar1 >> 0xc & 0xffffU |
             (((int)*param_1 >> 0x10) * iVar2 >> 0xc) << 0x10;
  param_1[1] = (short)param_1[1] * iVar3 >> 0xc & 0xffffU |
               (((int)param_1[1] >> 0x10) * iVar1 >> 0xc) << 0x10;
  param_1[2] = (short)param_1[2] * iVar2 >> 0xc & 0xffffU |
               (((int)param_1[2] >> 0x10) * iVar3 >> 0xc) << 0x10;
  param_1[3] = (short)param_1[3] * iVar1 >> 0xc & 0xffffU |
               (((int)param_1[3] >> 0x10) * iVar2 >> 0xc) << 0x10;
  param_1[4] = (short)param_1[4] * iVar3 >> 0xc;
  return param_1;
}

