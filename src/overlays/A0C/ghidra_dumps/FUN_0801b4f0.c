// FUN_0801b4f0

void FUN_0801b4f0(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x00113eb4(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x00114158(uVar1,param_2,uVar2 >> 0x10);
  return;
}

