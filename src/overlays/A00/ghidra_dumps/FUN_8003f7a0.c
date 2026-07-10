// FUN_8003f7a0

int FUN_8003f7a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar2;
  
  setCopReg(2,in_zero,*param_1);
  setCopReg(2,in_at,param_1[1]);
  copFunction(2,0x180001);
  uVar1 = getCopReg(2,0xe);
  *param_2 = uVar1;
  iVar2 = getCopReg(2,0x9800);
  return iVar2 >> 2;
}

