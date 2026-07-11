// FUN_0803ea20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803ea20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 1) != '\0') && ((_DAT_1f80017c & 7) == 0)) &&
     (iVar1 = func_0x0003116c(0x90f,param_1 + 0x2c,0xfffffff6), iVar1 != 0)) {
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x30);
    iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(iVar1 + 0x2c) = *(short *)(iVar1 + 0x2c) + (short)(iVar2 * 0x78 >> 0xc);
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(iVar1 + 0x30) = *(short *)(iVar1 + 0x30) + (short)(iVar2 * -0x78 >> 0xc);
    *(int *)(iVar1 + 0x54) = (int)*(short *)(param_1 + 0x7a);
  }
  return;
}

