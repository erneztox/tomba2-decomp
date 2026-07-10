// FUN_00003a18

void FUN_00003a18(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x0010c3a4(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x0010c664(uVar1,param_2,uVar2 >> 0x10);
  return;
}

