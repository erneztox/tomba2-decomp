// FUN_08017a30

void FUN_08017a30(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x001103f4(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x00110698(uVar1,param_2,uVar2 >> 0x10);
  return;
}

