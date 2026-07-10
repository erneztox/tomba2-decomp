// FUN_800844c0

undefined2 * FUN_800844c0(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  setCopControlWord(2,0,*param_1);
  setCopControlWord(2,0x800,param_1[1]);
  setCopControlWord(2,0x1000,param_1[2]);
  setCopControlWord(2,0x1800,param_1[3]);
  setCopControlWord(2,0x2000,param_1[4]);
  setCopReg(2,in_zero,*param_2);
  setCopReg(2,in_at,param_2[1]);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x4800);
  uVar2 = getCopReg(2,0x5000);
  uVar3 = getCopReg(2,0x5800);
  *param_3 = (short)uVar1;
  param_3[1] = (short)uVar2;
  param_3[2] = (short)uVar3;
  return param_3;
}

