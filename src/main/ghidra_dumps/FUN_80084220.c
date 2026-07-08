
undefined4 * FUN_80084220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  setCopReg(2,0,*param_1);
  setCopReg(2,0x800,param_1[1]);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,9);
  *param_2 = uVar1;
  uVar1 = getCopReg(2,10);
  param_2[1] = uVar1;
  uVar1 = getCopReg(2,0xb);
  param_2[2] = uVar1;
  return param_2;
}

