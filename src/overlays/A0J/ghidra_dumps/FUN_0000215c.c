// FUN_0000215c

void FUN_0000215c(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x0010ab20(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x0010adc4(uVar1,param_2,uVar2 >> 0x10);
  return;
}

