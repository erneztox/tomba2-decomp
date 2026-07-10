// FUN_8007c2a4

/* WARNING: Removing unreachable block (ram,0x8007c314) */
/* WARNING: Removing unreachable block (ram,0x8007c390) */

short * FUN_8007c2a4(short *param_1,short *param_2,undefined1 param_3,uint param_4,
                    undefined1 param_5)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = param_4 & 0x7f;
  if (((param_4 & 0x80) == 0) || (uVar2 / 10 != 0)) {
    sVar1 = *param_2;
    *(undefined1 *)(param_1 + 1) = param_3;
    *(undefined1 *)((int)param_1 + 3) = param_5;
    *param_1 = sVar1;
    param_1[2] = ((short)(uVar2 / 10) + 0x10) * 8;
    param_1[3] = 0x28;
    param_1 = param_1 + 4;
  }
  sVar1 = *param_2;
  *param_2 = sVar1 + 8;
  *param_1 = sVar1 + 8;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)((int)param_1 + 3) = param_5;
  param_1[2] = ((short)(uVar2 % 10) + 0x10) * 8;
  param_1[3] = 0x28;
  *param_2 = *param_2 + 8;
  return param_1 + 4;
}

