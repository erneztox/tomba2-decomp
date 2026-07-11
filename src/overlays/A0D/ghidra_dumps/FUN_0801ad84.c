// FUN_0801ad84

void FUN_0801ad84(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x00113748(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x001139ec(uVar1,param_2,uVar2 >> 0x10);
  return;
}

