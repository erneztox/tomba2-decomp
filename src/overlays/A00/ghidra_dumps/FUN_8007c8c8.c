// FUN_8007c8c8

short * FUN_8007c8c8(short *param_1,ushort param_2,short *param_3,undefined1 param_4)

{
  short sVar1;
  
  *(undefined1 *)((int)param_1 + 3) = 0x80;
  param_1[2] = (param_2 & 0xf) << 4;
  param_1[3] = (param_2 & 0xf0) + 0x78;
  sVar1 = *param_3;
  *(undefined1 *)(param_1 + 1) = param_4;
  *param_1 = sVar1;
  *param_3 = *param_3 + 0x10;
  return param_1 + 4;
}

