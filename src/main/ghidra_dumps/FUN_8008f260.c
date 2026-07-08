
void FUN_8008f260(uint param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  
  param_3[5] = (ushort)param_1 & 0x8000;
  uVar1 = (ushort)param_2;
  param_3[6] = uVar1 & 0x8000;
  param_3[8] = uVar1 & 0x4000;
  param_3[7] = uVar1 & 0x20;
  *param_3 = (ushort)((param_1 & 0xffff) >> 8) & 0x7f;
  param_3[1] = (ushort)((param_1 & 0xffff) >> 4) & 0xf;
  param_3[2] = (ushort)param_1 & 0xf;
  param_3[3] = (ushort)(param_2 >> 6) & 0x7f;
  param_3[4] = uVar1 & 0x1f;
  return;
}

