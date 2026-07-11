// FUN_8011851c

int FUN_8011851c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 + 0x56);
  if ((param_4 - iVar1 & 0xfffU) < 0x800) {
    if (param_4 < iVar1) {
      *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + 0x1000;
    }
    return (param_2 << 0x15) >> 0x10;
  }
  if (iVar1 < param_4) {
    *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + -0x1000;
  }
  return param_2 * -0x200000 >> 0x10;
}

